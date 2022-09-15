#!/usr/bin/env python3

'''
Turtle to move linearly based on specified direction (forward or backward), speed, and distance.

Author: Abisoye Akinloye
Date: September 2022
'''
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist

class MoveLinearly(Node):
    def __init__(self):
        super().__init__("linear_movement")
        self.velocity_publisher_=self.create_publisher(Twist, "/turtle1/cmd_vel", 10)
        self.timer_ = self.create_timer(1.0, self.move_callback)
        self.get_logger().info("The turtle is about to move linearly\n")
        self.distance, self.speed, self.direction = self.specify_params()

    def move_callback(self):
        cmd_vel = Twist()
         
        print(self.distance)

    def specify_params(self):
        '''
        Func prompt to input distance, speed, and direction.
        '''
        distance = float(input("Enter the desired distance (m): "))
        speed = float(input("Enter the desired speed (m/s): "))
        direction = int(input("Enter [1] for forward and [0] for backward direction: "))
        time = self.get_clock().now().seconds_nanoseconds()
        t0 = time[0]
        return distance, speed, direction

def main(args=None):
    rclpy.init(args=args)
    move = MoveLinearly()
    rclpy.spin(move)
    rclpy.shutdown()