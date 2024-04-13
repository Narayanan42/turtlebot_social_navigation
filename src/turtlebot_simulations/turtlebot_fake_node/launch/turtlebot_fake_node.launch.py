import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.actions import IncludeLaunchDescription
from launch.actions import LogInfo
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node

TURTLEBOT_MODEL = os.environ['TURTLEBOT_MODEL']


def generate_launch_description():
    param_dir = LaunchConfiguration(
        'param_dir',
        default=os.path.join(
            get_package_share_directory('turtlebot_fake_node'),
            'param',
            TURTLEBOT_MODEL + '.yaml'))

    rviz_dir = LaunchConfiguration(
        'rviz_dir',
        default=os.path.join(
            get_package_share_directory('turtlebot_fake_node'), 'launch'))

    use_sim_time = LaunchConfiguration('use_sim_time', default='false')
    urdf_file_name = 'turtlebot4.urdf'

    urdf = os.path.join(
        get_package_share_directory('turtlebot_description'),
        'urdf',
        urdf_file_name)

    return LaunchDescription([
        LogInfo(msg=['Execute Turtlebot Fake Node!!']),

        DeclareLaunchArgument(
            'param_dir',
            default_value=param_dir,
            description='Specifying parameter direction'),

        IncludeLaunchDescription(
            PythonLaunchDescriptionSource([rviz_dir, '/rviz2.launch.py'])),

        Node(
            package='turtlebot_fake_node',
            executable='turtlebot_fake_node',
            parameters=[param_dir],
            output='screen'),

        Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            name='robot_state_publisher',
            output='screen',
            parameters=[{'use_sim_time': use_sim_time}],
            arguments=[urdf]),
    ])
