from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    return LaunchDescription([
        Node(
            package="turtle_controller",
            executable= "turtle_linear_movement"
        ),
        Node(
            package="turtlesim",
            executable= "turtlesim_node"
        )
    ])
