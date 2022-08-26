#!/usr/bin/env python3

import rclpy
from rclpy.node import Node

from geometry_msgs.msg import Twist

class DrawCircle(Node):
    def __init__(self):
        super().__init__("draw_a_circle")
        self.publisher_ = self.create_publisher(Twist, "/turtle1/cmd_vel", 10)
        self.timer_ = self.create_timer(0.50, self.cmd_vel_callback)
        self.get_logger().info("Circle shape has started drawing continously...")

    def cmd_vel_callback(self):
        cmd_vel = Twist()
        cmd_vel.linear.x = 2.0
        cmd_vel.linear.y = 3.0
        cmd_vel.angular.z = 1.8
        self.publisher_.publish(cmd_vel)

def main(args=None):
    rclpy.init(args=args)
    draw_circle = DrawCircle()
    rclpy.spin(draw_circle)
    rclpy.shutdown()

if __name__ == '__main__':
    main()