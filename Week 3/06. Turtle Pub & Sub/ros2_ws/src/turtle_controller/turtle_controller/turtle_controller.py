#!/usr/bin/env python3

import rclpy
from rclpy.node import Node

from turtlesim.msg import Pose
from geometry_msgs.msg import Twist


class TurtleController(Node):
    def __init__(self):
        super().__init__("avoid_wall")
        self.publisher_ = self.create_publisher(Twist, "/turtle1/cmd_vel", 10)
        self.subscriber_ = self.create_subscription(
            Pose, "/turtle1/pose", self.pose_callback, 10)
        self.get_logger().info("Turtle has started moving..")

    def pose_callback(self, pose: Pose):
        cmd_vel = Twist()
        cmd_vel.linear.x = 2.0

        if (pose.x < 1.2 or pose.x > 9.8 or pose.y < 1.2 or pose.y > 9.5):
            cmd_vel.angular.z = 1.8
        else:
            cmd_vel.angular.z = 0.0

        self.publisher_.publish(cmd_vel)

def main(args=None):
    rclpy.init(args=args)
    avoid_wall = TurtleController()
    rclpy.spin(avoid_wall)
    rclpy.shutdown()

if __name__ == '__main__':
    main()