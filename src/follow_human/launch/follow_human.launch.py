from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import ExecuteProcess

def generate_launch_description():
    
    # Node to run the human position publisher
    human_position_publisher_node = Node(
        package='follow_human',
        executable='human_position_publisher',
        name='human_position_publisher',
        output='screen'
    )
    
    # Node to run the follow human logic
    follow_human_node = Node(
        package='follow_human',
        executable='follow_human',
        name='follow_human',
        output='screen'
    )
    
    # Rviz2 node for visualization
    rviz_node = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        output='screen',
        arguments=['-d', 'src/follow_human/rviz/follow_human.rviz']
    )
    
    return LaunchDescription([
        human_position_publisher_node,
        follow_human_node,
        rviz_node
    ])