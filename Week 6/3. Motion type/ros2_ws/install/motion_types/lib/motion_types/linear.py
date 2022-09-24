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
        self.velocity_publisher_ = self.create_publisher(
            Twist, "/turtle1/cmd_vel", 10)
        self.timer_ = self.create_timer(0.05, self.move_callback)
        # self.get_logger().info("The turtle is about to move linearly")
        self.distance, self.velocity, self.direction = self.set_params()

    def set_params(self):
        '''
        Func prompt to input distance, speed, and direction.
        '''
        distance = float(input("Enter the desired distance (m): "))
        velocity = float(input("Enter the desired velocity (m/s): "))
        direction = int(
            input("Enter [1] for forward and [0] for backward direction: "))
        self.t0 = self.get_clock().now().seconds_nanoseconds()[
            0]  # initial time
        return distance, velocity, direction

    def move_callback(self):
        cmd_vel = Twist()
        t1 = self.get_clock().now().seconds_nanoseconds()[0]
        dt = t1-self.t0  # change in time

        # displacement because it is a distance taken in a specified direction
        displacement = self.velocity * dt

        if displacement < self.distance:
            if self.direction == 1:
                cmd_vel.linear.x = abs(self.velocity)
            elif self.direction == 0:
                cmd_vel.linear.x = -abs(self.velocity)
            else:
                print("Invalid input!")
                rclpy.shutdown()
        else:
            cmd_vel.linear.x = 0.0
            self.get_logger().info("Distance reached!!!")
            self.timer_.cancel()

        self.velocity_publisher_.publish(cmd_vel)


def main(args=None):
    rclpy.init(args=args)
    move = MoveLinearly()
    rclpy.spin(move)
    rclpy.shutdown()


if __name__ == '__main__':
    main()
