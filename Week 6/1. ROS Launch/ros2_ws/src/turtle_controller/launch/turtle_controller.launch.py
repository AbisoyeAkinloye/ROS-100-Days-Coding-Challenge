from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    return LaunchDescription([
        Node(
            package="turtle_controller",
            executable="turtle_linear_movement",
            # prefix=["stdbuf -o L"],
            output="screen"
            # emulate_tty=True
        ),
        Node(
            package="turtlesim",
            executable="turtlesim_node",
            # prefix=["stdbuf -o L"],
            output="screen"
            # emulate_tty=True
        )
    ])
