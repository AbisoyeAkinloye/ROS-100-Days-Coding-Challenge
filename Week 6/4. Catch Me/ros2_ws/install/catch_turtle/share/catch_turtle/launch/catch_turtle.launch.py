from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node (
            package="turtlesim",
            executable="turtlesim_node"
        ),
        Node (
            package="catch_turtle",
            executable="turtle_controller.py",
            parameters=[
                {"catch_closest_turtle": True}
            ]
        ),
        Node (
            package="catch_turtle", 
            executable = "turtle_spawner.py",
            parameters=[
                {"spawn_period": 1.5}
            ]
        )
    ])