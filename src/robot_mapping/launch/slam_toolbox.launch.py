from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os

def generate_launch_description():
    # Lấy đường dẫn tới file config
    slam_config = os.path.join(
        get_package_share_directory('robot_mapping'),
        'config',
        'mapper_params_online_async.yaml'
    )

    return LaunchDescription([
        Node(
            package='slam_toolbox',
            executable='sync_slam_toolbox_node',  # hoặc 'async_slam_toolbox_node'
            name='slam_toolbox',
            output='screen',
            parameters=[slam_config, {'use_sim_time': True}]
        )
    ])
