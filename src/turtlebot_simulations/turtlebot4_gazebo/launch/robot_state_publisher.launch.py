#!/usr/bin/env python3

import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description():
    TURTLEBOT3_MODEL = os.environ['TURTLEBOT4_MODEL']

    use_sim_time = LaunchConfiguration('use_sim_time', default='false')
    
    # urdf = os.path.join(
    # get_package_share_directory('turtlebot3_description'),
    # 'urdf',
    # urdf_file_name)
    urdf = '/home/nanu/turtlebot_social_navigation/src/turtlebot_simulations/turtlebot4_gazebo/models/turtlebot4_description/urdf/lite/turtlebot4.urdf'

    return LaunchDescription([
        DeclareLaunchArgument(
            'use_sim_time',
            default_value='false',
            description='Use simulation (Gazebo) clock if true'),

        Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            name='robot_state_publisher',
            output='screen',
            parameters=[{'use_sim_time': use_sim_time}],
            arguments=[urdf]),
    ])
