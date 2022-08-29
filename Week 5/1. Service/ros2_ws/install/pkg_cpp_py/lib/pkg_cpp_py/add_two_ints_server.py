#!/usr/bin/env python3

import rclpy
from rclpy.node import Node

from example_interfaces.srv import AddTwoInts

class Server(Node):
    def __init__(self):
        super().__init__("add_two_ints")
        self.server = self.create_service(AddTwoInts, "add_two_ints", self.add_two_ints_cb)
        self.get_logger().info("Server has just been created...")

    def add_two_ints_cb(self, request, response):
        response.sum = request.a + request.b
        self.get_logger().info(f"{request.a} + {request.b} = {response.sum}")
        return response

def main(args=None):
    rclpy.init(args=args)
    server = Server()
    rclpy.spin(server)
    rclpy.shutdown()

if __name__ == '__main__':
    main()