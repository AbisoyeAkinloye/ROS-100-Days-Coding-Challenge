#!/usr/bin/env python3

import rclpy
from rclpy.node import Node

from example_interfaces.srv import AddTwoInts

class AddTwoIntegers(Node):
    def __init__(self):
        super().__init__("add_two_integers")
        self.server_ = self.create_service(
            AddTwoInts, "add_two_ints", self.add_two_ints_callback)
        self.get_logger().info("Server is ON waiting for a client...")

    def add_two_ints_callback(self, request, response):
        response.sum = request.a + request.b
        self.get_logger().info(f'{request.a} + {request.b} = {response.sum}')
        return response

def main(args=None):
    rclpy.init(args=args)
    summation = AddTwoIntegers()
    rclpy.spin(summation)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
