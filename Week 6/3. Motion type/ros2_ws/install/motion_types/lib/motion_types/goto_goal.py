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
import math


class GoToGoal(Node):
    def __init__(self):
        super().__init__("go_to_goal")
        self.velocity_publisher_ = self.create_publisher(
            Twist, "/turtle1/cmd_vel", 10)
        self.pose_subscriber_ = self.create_subscription(
            Pose, "/turtle1/pose", self.pose_callback, 10)
        self.timer_ = self.create_timer(1.0, self.goto_goal)
        

    def pose_callback(self, pose_msg=Pose()):
        '''
        x1 and y1 is the initial (x,y) coordinate of the robot
        on the reference frame (simulator).
        '''
        pose_x = pose_msg.x
        pose_y = pose_msg.y
        theta = pose_msg.theta

        return pose_x, pose_y, theta

    def set_goal(self):
        '''
        x2 and y2 is the goal (x,y) coordinate of the robot
        on the reference frame (simulator).
        '''
        self.get_logger().info("Turtle to move to desired location")
        self.x2 = float(input("Enter the x position: "))
        self.y2 = float(input("Enter the y position: "))
        

    def goto_goal(self):
        vel_msg = Twist()
        x1, y1, theta = self.pose_callback()

        dist_x = self.x2 - x1
        dist_y = self.y2 - y1

        self.get_logger().info(f"{(dist_x, dist_y)}")

        euclidean_distance = math.sqrt(dist_x**2 + dist_y**2)
        theta = math.atan2(dist_y, dist_x)
        distance_tolerance = 0.5

        if (euclidean_distance > distance_tolerance):
            vel_msg.linear.x = 0.5 * euclidean_distance

            goal_theta = math.atan2(dist_y, dist_x)
            diff = goal_theta - theta
            self.get_logger().info(f"diff: {diff}")

            if diff > math.pi:
                diff -= 2*math.pi
            elif diff < -math.pi:
                diff += 2*math.pi

            vel_msg.angular.z = 1.2*diff

        else:
            vel_msg.linear.x = 0.0
            vel_msg.angular.z = 0.0

        self.velocity_publisher_.publish(vel_msg)


def main(args=None):
    rclpy.init(args=args)
    goto_goal = GoToGoal()
    rclpy.spin(goto_goal)
    rclpy.shutdown()


if __name__ == '__main__':
    main()
