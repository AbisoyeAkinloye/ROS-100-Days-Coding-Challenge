#!/usr/bin/env python3

import rclpy
from rclpy.node import Node

from example_interfaces.msg import String

class Listener(Node):
    def __init__(self):
        super().__init__("listener")
        self.subsciber_ = self.create_subscription(String, "/chatter", self.talker_cb, 10)
        self.get_logger().info("I'm all ears...")

    def talker_cb(self, msg):
        self.get_logger().info(f"I heard: {msg.data}")

def main(args=None):
    rclpy.init(args=args)
    listener = Listener()
    rclpy.spin(listener)
    rclpy.shutdown()

if __name__ == '__main__':
    main()