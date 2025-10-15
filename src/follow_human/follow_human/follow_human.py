#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from yolov8_msgs.msg import HumanPositionArray


class FollowHuman(Node):
    def __init__(self):
        super().__init__('follow_human')

        self.subscription = self.create_subscription(
            HumanPositionArray,
            '/human_positions',
            self.human_callback,
            10
        )
        self.cmd_pub = self.create_publisher(Twist, '/cmd_vel', 10)

        # Tham số điều khiển
        self.target_area = 0.15  # kích thước box mục tiêu (khi đến đủ gần, càng nhỏ robot càng đứng xa)
        self.center_x = 320.0    # center của ảnh (640px)
        self.linear_k = 0.3
        self.angular_k = 0.3
        self.stop_threshold = 0.03  # biên độ nhỏ -> không dao động

        self.get_logger().info("🚶‍♂️ Follow Human Node started")

    def human_callback(self, msg: HumanPositionArray):
        twist = Twist()

        if not msg.humans:
            # Không có người => robot dừng
            twist.linear.x = 0.0
            twist.angular.z = 0.0
            self.cmd_pub.publish(twist)
            self.get_logger().info("⛔ No human detected — stopping")
            return

        # Chọn người gần nhất (người to nhất trong ảnh)
        target = max(msg.humans, key=lambda h: h.width * h.height)
        area = (target.width * target.height) / (640 * 480)
        error_x = target.x_center - self.center_x

        # Điều khiển quay
        if abs(error_x) > 20:  # tránh dao động nhỏ
            twist.angular.z = -self.angular_k * error_x
        else:
            twist.angular.z = 0.0

        # Điều khiển tiến/lùi (dựa vào kích thước box)
        diff = self.target_area - area
        if abs(diff) > self.stop_threshold:
            twist.linear.x = self.linear_k * diff * 100  # nhân hệ số cho dễ chỉnh
        else:
            twist.linear.x = 0.0  # ổn định ở gần người

        # Giới hạn tốc độ
        twist.linear.x = max(min(twist.linear.x, 0.3), -0.3)
        twist.angular.z = max(min(twist.angular.z, 0.6), -0.6)

        self.cmd_pub.publish(twist)
        self.get_logger().info(
            f"🎯 Tracking human: area={area:.3f}, err_x={error_x:.1f}, v={twist.linear.x:.2f}, w={twist.angular.z:.2f}"
        )


def main(args=None):
    rclpy.init(args=args)
    node = FollowHuman()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
