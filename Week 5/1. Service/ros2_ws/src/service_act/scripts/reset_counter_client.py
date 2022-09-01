#!/usr/bin/env python3

import rclpy
import sys
from rclpy.node import Node

from example_interfaces.srv import SetBool


class ResetCounterClient(Node):
    def __init__(self):
        super().__init__("reset_counter")
        self.client_ = self.create_client(SetBool, "reset_counter")

        while not self.client_.wait_for_service(1.0):
            if not rclpy.ok():
                self.get_logger().error("Oop! server not found")
            else:
                self.get_logger().warn("Service is not available, waiting again...")

        self.request = SetBool.Request()

    def send_resetCounter_request(self, response, response):
        pass


def main(args=None):
    rclpy.init(args=args)
    node = ResetCounterClient()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == '__main__':
    main()
