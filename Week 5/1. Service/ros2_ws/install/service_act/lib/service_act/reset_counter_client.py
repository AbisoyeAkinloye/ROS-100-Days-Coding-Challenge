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

    def send_request(self):
        data = int(input("Enter [1] True and [0] False: "))

        if data == 1:
            self.request.data = True
            
        elif data == 0:
            self.request.data = False

        self.future = self.client_.call_async(self.request)
        rclpy.spin_until_future_complete(self, self.future)

        try:
            response = self.future.result()
            self.get_logger().info(response.message)
        except Exception as e:
            self.get_logger().error("Service call failed: %r",(e,))     
        
        return response
        

def main(args=None):
    rclpy.init(args=args)
    node = ResetCounterClient()
    response = node.send_request()
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
