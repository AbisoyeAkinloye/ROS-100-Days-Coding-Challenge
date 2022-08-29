#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from example_interfaces.srv import AddTwoInts
import sys

class Client(Node):
    def __init__(self):
        super().__init__("add_two_ints")
        self.client = self.create_client(AddTwoInts, "add_two_ints")

        while not self.client.wait_for_service(1.0):
            self.get_logger().warn("Server not available, waiting...")

        self.request = AddTwoInts.Request()

    def send_request(self, a, b):
        self.request.a = a
        self.request.b = b
        self.future = self.client.call_async(self.request)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()

def main(args=None):
    rclpy.init(args=args)
    node = Client()
    response = node.send_request(int(sys.argv[1]), int(sys.argv[2]))
    node.get_logger().info(f'{int(sys.argv[1])} + { int(sys.argv[2])} = {response.sum}')
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()