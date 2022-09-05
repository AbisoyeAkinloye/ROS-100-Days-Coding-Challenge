#!/usr/bin/env python3

import rclpy
from rclpy.node import Node

from turtlesim.msg import Pose
from geometry_msgs.msg import Twist

class MoveLinear(Node):
    def __init__(self):
        super().__init__("move_turtle_linearly")
        self.publisher_ = self.create_publisher(Twist, "/turtle1/cmd_vel", 10)
        self.subsciber_ = self.create_subscription(Pose, "/turtle1/pose", self.move_turtle, 10)
        self.get_logger().info("Move turtle by specifying distance, speed and direction")

        self.time = self.get_clock().now().seconds_nanoseconds()
        self.time_sec = self.time[0]

        self.distance = float(input("Turtle should move at distance: "))
        # self.speed = self.distance/self.time_sec

        self.f_b = int(input("Enter [1] - forward, [0] - backward: "))

    def move_turtle(self, pose: Pose):
        origin = 5.5

        cmd = Twist()

        if self.f_b == 1 and pose.x < origin+self.distance:
            cmd.linear.x = self.distance 
        elif self.f_b == 0 and pose.x > origin-self.distance:
            cmd.linear.x = -self.distance

        # if pose.x > origin+self.distance:
        #     cmd.linear.x = 0.0 
           

        self.publisher_.publish(cmd)

def main(args=None):
    rclpy.init(args=args)
    move = MoveLinear()
    rclpy.spin(move)
    rclpy.shutdown()

if __name__ == '__main__':
    main()