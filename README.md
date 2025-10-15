# Robot Follow Human using YOLOv8 & ROS2

A ROS2 package that enables a robot to **detect and follow a human** in real-time using a camera and YOLOv8 object detection.

Developed for autonomous robots running **ROS2 Humble** (tested on Ubuntu 22.04, Python 3.10).

---

## Overview
This project implements a **human-following robot system using YOLOv8** for real-time person detection and ROS2 for robot control and communication.
The system processes camera images to detect humans, estimates their position, and publishes movement commands to make the robot follow the detected person autonomously.

It consists of two main ROS2 nodes:

`human_position_publisher` — runs YOLOv8 to detect humans and publishes their bounding box coordinates.

`follow_human` — subscribes to detected positions and controls the robot to follow the target at a safe distance.

Optional visualization using RViz2 allows monitoring camera input, detection results, and robot motion in real-time.

### ROS2 Packages
Make sure you have:
```bash
sudo apt install ros-humble-cv-bridge ros-humble-rclpy ros-humble-sensor-msgs
sudo apt install ros-humble-geometry-msgs ros-humble-launch ros-humble-rviz2
```

### Install Environment
Install ROS dependencies:
```bash
sudo apt install ros-humble-cv-bridge ros-humble-image-transport python3-colcon-common-extensions
```

Install the necessary Python libraries:
```bash
cd robot_detect
pip install -r src/requirements.txt
```

### Usage
1. Git clone directory
```bash
```
2. Build
```bash
cd robot_detect
colcon build
source install/setup.bash
```
2. Launch gazebo simulator and robot model (terminal 1)
```bash
cd robot_detect
source install/setup.bash
ros2 launch robot_simulation simulation.launch.py
```
After running, gazebo will be displayed with pre-set environment, along with differential robot model.

3. Launch models yolov8 (terminal 2)
```bash
cd robot_detect
source install/setup.bash
ros2 launch robot_recognition launch_yolov8.launch.py
```

- Start the YOLOv8 detector node `yolov8_ros2_pt.py`
- Get image from topic `/camera/image_raw`
- Detect people and output bounding box coordinates to topic `/inference_result`
- Display detection log in terminal (position and confidence)

4. Launch follow human
```bash
cd robot_detect
source install/setup.bash
ros2 launch follow_human follow_human.launch.py
```

This command will launch the entire “Follow Human” system, including:

- Node `human_position_publisher`: detects and outputs the position of the person from the camera.
- Node `follow_human`: controls the robot to move according to the detected person.
- (Optional) Open `RViz2` to visually observe the camera and the direction of the robot's movement.

![robot detect](/docs/object_detect.gif)



### ROS2 Topics

| **Topic Name**      | **Message Type**                 | **Description**                            |
| ------------------- | -------------------------------- | ------------------------------------------ |
| `/camera/image_raw` | `sensor_msgs/Image`              | Input image stream from the camera         |
| `/human_positions`  | `yolov8_msgs/HumanPositionArray` | Detected human positions from YOLOv8       |
| `/cmd_vel`          | `geometry_msgs/Twist`            | Velocity command output for robot movement |


### Control Parameters (in `follow_human.py`)

| **Parameter**    | **Description**                                                                   | **Default Value** |
| ---------------- | --------------------------------------------------------------------------------- | ----------------: |
| `target_area`    | Target bounding box area — smaller value means the robot keeps a farther distance |            `0.15` |
| `center_x`       | Image center position (for a 640px wide image)                                    |           `320.0` |
| `linear_k`       | Linear velocity gain — controls forward/backward movement speed                   |             `0.3` |
| `angular_k`      | Angular velocity gain — controls rotation speed toward the target                 |             `0.3` |
| `stop_threshold` | Minimum movement threshold — smaller value reduces oscillation near the target    |            `0.03` |

---

## Author
- Name: BUI QUOC DOANH
- Email: doanh762003@gmail.com
- Github: is-buiquocdoanh

## License
This project is released under the [MIT License](https://opensource.org/license/mit)