#!/usr/bin/env python3

import rclpy
from rclpy.node import Node

from custom_interfaces.msg import HardwareStatus

class HardwareStatusPub(Node):
    def __init__(self):
        super().__init__("hardware_status_pub")
        self.publisher_ = self.create_publisher(HardwareStatus, "hardware_status", 10)
        self.timer_ = self.create_timer(1.0, self.publish_hardware_status)
        self.get_logger().info("Publisher node has started.")

    def publish_hardware_status(self):
        msg = HardwareStatus()
        msg.temperature = 45
        msg.are_motors_ready = True
        msg.message = "Nothing special here."
        self.publisher_.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = HardwareStatusPub()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()