#!/usr/bin/env python3

import rclpy
from rclpy.node import Node

from example_interfaces.msg import Int64

class NumberCounter(Node):
    def __init__(self):
        super().__init__("number_counter")
        self.subscriber = self.create_subscription(Int64, "/number", self.number_counter_cb, 10)
        self.get_logger().info("Number has started counting...")

    def number_counter_cb(self, msg: Int64):
        self.get_logger().info(f"Counter: {msg.data}")

def main(args=None):
    rclpy.init(args=args)
    node = NumberCounter()
    rclpy.spin(node)
    rclpy.shutdown()