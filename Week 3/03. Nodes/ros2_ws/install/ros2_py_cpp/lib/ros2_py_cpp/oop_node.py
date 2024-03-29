#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

class MyNode(Node):
    def __init__(self):
        super().__init__("my_node")
        self.counter_ = 0
        self.get_logger().info("Hello from ROS OOP node...")
        self.create_timer(0.55, self.timer_callback)

    def timer_callback(self):
        self.counter_ += 1
        self.get_logger().info(f"Hello {self.counter_}")

def main(args=None):
    rclpy.init(args=args)
    node = MyNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()