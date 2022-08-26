#!/usr/bin/env python3

import rclpy
from rclpy.node import Node

from example_interfaces.msg import String


class TransitorRadio(Node):
    def __init__(self):
        super().__init__("transitor_radio")
        self.subcriber_ = self.create_subscription(
            String, "robot_news", self.robot_news_callback, 10)
        self.get_logger().info("Radio has been tuned to the channel.")

    def robot_news_callback(self, msg):
        self.get_logger().info(msg.data)


def main(args=None):
    rclpy.init(args=args)
    node = TransitorRadio()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == '__main__':
    main()
