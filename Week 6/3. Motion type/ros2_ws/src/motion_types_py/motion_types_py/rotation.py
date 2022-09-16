#!/usr/bin/env python3

'''
Turtle rotates having specified the angular speed and angle of rotation in clockwise or anticlockwise direction.

Author: Abisoye Akinloye
Date: September 2022
'''

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist

from math import radians


class Rotation(Node):
    def __init__(self):
        super().__init__("rotation")
        self.velocity_publisher_ = self.create_publisher(
            Twist, "/turtle1/cmd_vel", 10)
        self.timer_ = self.create_timer(1.0, self.rotate_callback)
        self.get_logger().info("Turtle about to rotate")
        self.angular_speed, self.angle, self.direction, self.t0 = self.rotation_params()

    def rotate_callback(self):
        vel_msg = Twist()
        t1 = self.get_clock().now().seconds_nanoseconds()[0]
        dt = t1 - self.t0
        current_angle = self.angular_speed * dt

        if current_angle < self.angle:
            if self.direction:
                vel_msg.angular.z = abs(self.angular_speed)
            else:
                vel_msg.angular.z = -abs(self.angular_speed)
        else:
            vel_msg.angular.z = 0.0

        self.velocity_publisher_.publish(vel_msg)

    def rotation_params(self):
        angle = float(input("Enter angle of rotation (degree): "))
        angular_speed = float(input("Angular speed (rad/s): "))
        direction = bool(
            int(input("Enter [1] Anti-clockwise or [0] for clockwise direction: ")))
        # convert angle from degree to radian
        angle = radians(angle)
        t0 = self.get_clock().now().seconds_nanoseconds()[0]
        return angular_speed, angle, direction, t0


def main(args=None):
    rclpy.init(args=args)
    rotate = Rotation()
    rclpy.spin(rotate)
    rclpy.shutdown()

if __name__ == '__main__':
    main()