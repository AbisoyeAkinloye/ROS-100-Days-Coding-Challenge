#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from example_interfaces.msg import Int64

class NumberPublisher(Node):
    def __init__(self):
        super().__init__("number_publisher")
        self.publisher_ = self.create_publisher(Int64, "number", 10)
        self.timer_ = self.create_timer(0.50, self.counter_cb)
        self.get_logger().info("Counter publisher has just been created.")
        self.start_count = 0

    def counter_cb(self, count = Int64()):
        self.start_count += 1
        count.data = self.start_count
        self.get_logger().info(f"Counter: {count.data}")
        self.publisher_.publish(count)


def main(args=None):
    rclpy.init(args=args)
    node = NumberPublisher()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()