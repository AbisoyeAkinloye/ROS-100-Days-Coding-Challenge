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
from math import sqrt, atan2

class GoToGoal(Node):
    global x1, x2, y1, y2, theta
    def __init__(self):
        super().__init__("goto_goal")
        self.velocity_publisher_ = self.create_publisher(Twist, "/turtle1/cmd_vel", 10)
        self.pose_subscriber_ = self.create_subscription(Pose, "/turtle1/pose", pose_callback, 10)
        self.timer_ = self.create_timer(1.0, self.goto_goal)

    def set_goal(self):
        self.get_logger().info("Set the desired (x2, y2) position of the turtle")
        x2 = float(input("Enter a desired x position: "))
        y2 = float(input("Enter a desired y position: "))

    def pose_callback(self, pose):
        pose = Pose()
        x1 = pose.x
        y1 = pose.y
        theta = pose.theta
        self.get_logger().info(f"(x1, y1) = {(x1, y1)}")

    def goto_goal(){
        
    }