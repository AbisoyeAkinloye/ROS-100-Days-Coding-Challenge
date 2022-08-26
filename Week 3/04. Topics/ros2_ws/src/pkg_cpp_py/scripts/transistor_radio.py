#!/usr/bin/env python3

import rclpy
from rclpy.node import Node

from example_interfaces.msg import String

class TransitorRadio(Node):
    def __init__(self):
        super().__init__("transitor_radio")
        self.subscriber_ = self.create_subscription(String, "robot_news", robot_news_cb, 10)
        self.get_logger().info("Transitor radio has been tuned to a channel")

    def robot_news_cb(self, msg):
        self.get_logger().info(msg.data)

def main(args=None):
    rclpy.init(args=args)
    transitor_radio = TransitorRadio()
    rclpy.spin(transitor_radio)
    rclpy.shutdown()

if __name__ == '__main__':
    main()