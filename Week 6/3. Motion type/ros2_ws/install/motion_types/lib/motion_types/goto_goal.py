#!/usr/bin/env python3

'''
Turtle goes to a goal by specifying a target location and the turtle will adjust accordingly its linear and angular speed to the goal location.

Author: Abisoye Akinloye.
Date: September 2022.
'''

import rclpy
from rclpy.node import Node

from geometry_msgs.msg import Twist
from turtlesim.msg import Pose
from math import sqrt, atan2, pi

class GoToGoal(Node):
    pose_x = 0.0
    pose_y = 0.0
    theta = 0.0
    def __init__(self):
        super().__init__("goto_goal")
        self.velocity_publisher_ = self.create_publisher(Twist, "/turtle1/cmd_vel", 10)
        self.timer_ = self.create_timer(1.0, self.goto_goal)
        self.pose_subscriber_ = self.create_subscription(
            Pose, "/turtle1/pose", self.pose_callback, 10)
        self.set_goal()

    def set_goal(self):
        self.get_logger().info("Set the desired (x2, y2) position of the turtle")
        self.x2 = float(input("Enter a desired x position: "))
        self.y2 = float(input("Enter a desired y position: "))

    def pose_callback(self, pose_msg=Pose()):
        self.pose_x = pose_msg.x
        self.pose_y = pose_msg.y
        self.theta = pose_msg.theta
        # self.get_logger().warn(f"x: {self.pose_x}, y: {self.pose_y}")

    def goto_goal(self):
        dist_x = self.x2 - self.pose_x
        dist_y = self.y2 - self.pose_y
        euclidean_distance =  sqrt(dist_x**2 + dist_x**2) 
        distance_tolerance = 0.5

        speed = Twist()
        if (euclidean_distance > distance_tolerance):
            K_linear = 0.8
            speed.linear.x = K_linear * euclidean_distance

            angle = atan2(dist_y, dist_x)
            diff = angle - self.theta
            K_angular = 1.2

            if diff > pi:
                diff -= 2*pi
            elif diff < -pi:
                diff += 2*pi

            speed.angular.z = K_angular*diff
        else:
            speed.linear.x = 0.0
            speed.angular.z = 0.0
            self.get_logger().info("Target reached")
            self.timer_.cancel()

        self.velocity_publisher_.publish(speed)

def main(args=None):
    rclpy.init(args=args)
    goto_goal = GoToGoal()
    rclpy.spin(goto_goal)
    rclpy.shutdown()


if __name__=='__main__':
    main()