#!/usr/bin/env python3

import rclpy
from rclpy.node import Node

from example_interfaces.msg import Int64
from example_interfaces.srv import SetBool


class NumberCounter(Node):
    def __init__(self):
        super().__init__("number_counter")
        self.publisher_ = self.create_publisher(Int64, "number_count", 10)
        self.subscriber_ = self.create_subscription(
            Int64, "number", self.counter_cb, 10)
        self.server_ = self.create_service(
            SetBool, "reset_counter", self.reset_counter_cb)
        self.initial_count = 0      

    def counter_cb(self, count: Int64):
        self.initial_count += 1
        count.data = self.initial_count
        self.get_logger().info(f"Counter: {count.data}")
        self.publisher_.publish(count)

    def reset_counter_cb(self, request, response):
        if request.data:
            self.initial_count = 0
            response.success = True
            response.message = f"The counter has been reset to {self.initial_count}"
        else:
            response.success = False
            response.message = "Counter not reset"
        return response


def main(args=None):
    rclpy.init(args=args)
    node = NumberCounter()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == '__main__':
    main()
