#!/usr/bin/env python3

import sys
import rclpy
from rclpy.node import Node
from example_interfaces.srv import AddTwoInts

class EuclideanDistance(Node):
    def __init__(self):
        super().__init__("euclidean_distance_client")
        self.client = self.create_client(AddTwoInts, "euclidean_distance")

        while not self.client.wait_for_service(1.0):
            self.get_logger().warn("Service not available, waiting again...")

        self.request = AddTwoInts.Request()

    def send_request(self, x2, y2):
        self.request.a = int(x2)
        self.request.b = int(y2)
        
        self.future = self.client.call_async(self.request)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()

def main(args=None):
    rclpy.init(args=args)
    node = EuclideanDistance()
    response = node.send_request(sys.argv[1], sys.argv[2])
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()