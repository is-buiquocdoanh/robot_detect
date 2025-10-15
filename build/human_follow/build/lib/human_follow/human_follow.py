import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from std_msgs.msg import String
import json

class FollowHuman(Node):
    def __init__(self):
        super().__init__('follow_human')
        self.sub = self.create_subscription(String, '/inference_result', self.yolo_callback, 10)
        self.pub = self.create_publisher(Twist, '/cmd_vel', 10)
        self.target_class = 'person'
        self.image_width = 640
        self.linear_speed = 0.15
        self.angular_speed = 0.4
        self.get_logger().info("✅ FollowHuman node started.")

    def yolo_callback(self, msg):
        try:
            data = json.loads(msg.data)
        except:
            self.get_logger().warn("Invalid YOLO message format")
            return

        cmd = Twist()
        person_found = False

        for det in data.get('detections', []):
            if det['class_name'] == self.target_class:
                person_found = True
                x_center = det['bbox_center']['x']
                width = det['bbox_size']['x']

                # Điều chỉnh xoay (người lệch giữa ảnh)
                error_x = x_center - self.image_width / 2
                cmd.angular.z = -error_x / (self.image_width / 2) * self.angular_speed

                # Tiến/lùi theo kích thước bbox
                desired_width = 120  # tương ứng khoảng cách mong muốn
                cmd.linear.x = (desired_width - width) / desired_width * self.linear_speed

                break  # chỉ theo người đầu tiên

        if not person_found:
            cmd.linear.x = 0.0
            cmd.angular.z = 0.0

        self.pub.publish(cmd)

def main(args=None):
    rclpy.init(args=args)
    node = FollowHuman()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
