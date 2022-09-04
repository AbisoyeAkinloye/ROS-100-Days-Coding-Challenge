#!/usr/bin/env python3

import rclpy
from rclpy.node import Node

from example_interfaces.msg import Int64

class NumberPublisher(Node):
    def __init__(self):
        super().__init__("number_publisher")
        self.declare_parameter("num",0)
        self.num = self.get_parameter("num").value

        self.publisher = self.create_publisher(Int64, "/number", 10)
        self.timer = self.create_timer(1.0, self.publish_number)

        self.get_logger().info(f"Number has started counting from {self.num}")

    def publish_number(self):
        msg = Int64()
        self.num += 1
        msg.data = self.num
        self.publisher.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = NumberPublisher()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()