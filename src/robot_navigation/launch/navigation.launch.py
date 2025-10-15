import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node

def generate_launch_description():
    package_dir = get_package_share_directory('robot_navigation')
    nav2_dir = get_package_share_directory('nav2_bringup')
    map_file_default = os.path.join(
        package_dir,
        'maps',
        'my_map.yaml'
    )

    use_sim_time = LaunchConfiguration('use_sim_time')
    slam = LaunchConfiguration('slam')
    rviz = LaunchConfiguration('rviz')
    map_file = LaunchConfiguration('map')
    params_file = LaunchConfiguration('params_file')
    namespace = LaunchConfiguration('namespace')

    declare_use_sim_time_cmd = DeclareLaunchArgument(
        'use_sim_time', default_value='true')       # False để test trên robot thật

    declare_slam_cmd = DeclareLaunchArgument(
        'slam', default_value='False')              # True nếu muốn dùng SLAM, False nếu đã có map

    declare_use_rviz_cmd = DeclareLaunchArgument(
        'rviz', default_value='True')               # True để hiển thị rviz, False để không hiển thị

    declare_map_cmd = DeclareLaunchArgument(
        'map', default_value=map_file_default)

    declare_nav_params_cmd = DeclareLaunchArgument(
        'params_file', default_value=os.path.join(
            package_dir,
            'config',
            'nav2_params.yaml')
    )

    declare_namespace_cmd = DeclareLaunchArgument(
        'namespace', default_value=''
    )

    localization_cmd = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(nav2_dir, 'launch', 'localization_launch.py')
        ),
        launch_arguments={
            'use_sim_time': use_sim_time,
            'slam': slam,
            'map': map_file,
            'params_file': params_file,
            'namespace': namespace
        }.items()
    )

    navigation_cmd = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(nav2_dir, 'launch', 'navigation_launch.py')
        ),
        launch_arguments={
            'use_sim_time': use_sim_time,
            'params_file': params_file,
            'namespace': namespace
        }.items()
    )

    rviz_cmd = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(nav2_dir, 'launch', 'rviz_launch.py')
        ),
        launch_arguments={
            'use_sim_time': use_sim_time,
            'rviz': rviz,
            'namespace': namespace
        }.items()
    )

    # Khởi động map_server riêng với use_sim_time
    map_server_node = Node(
        package='nav2_map_server',
        executable='map_server',
        name='map_server',
        output='screen',
        parameters=[
            {'yaml_filename': map_file_default},
            {'use_sim_time': use_sim_time}  # dùng LaunchConfiguration
        ]
    )

    ld = LaunchDescription()

    ld.add_action(declare_use_sim_time_cmd)
    ld.add_action(declare_slam_cmd)
    ld.add_action(declare_nav_params_cmd)
    ld.add_action(declare_use_rviz_cmd)
    ld.add_action(declare_map_cmd)
    ld.add_action(declare_namespace_cmd)

    ld.add_action(localization_cmd)
    ld.add_action(navigation_cmd)
    ld.add_action(rviz_cmd)
    ld.add_action(map_server_node)

    return ld
