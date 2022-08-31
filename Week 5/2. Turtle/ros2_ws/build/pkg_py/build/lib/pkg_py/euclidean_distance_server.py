#!/usr/bin/env python3

import rclpy
import math
from rclpy.node import Node

from example_interfaces.srv import AddTwoInts
from turtlesim.msg import Pose


class EuclideanDistance(Node):
    x1 = x2 = y1 = y2 = 0.0

    def __init__(self):
        super().__init__("euclidean_distance_server")
        self.create_subscription(Pose, "/turtle1/pose", self.pose_cb, 10)
        self.server = self.create_service(
            AddTwoInts, "euclidean_distance", self.calc_euclidean_distance)
        self.get_logger().info("Service has been started...")

    def pose_cb(self, pose: Pose):
        pose.x = self.x1
        pose.y = self.y1

    def calc_euclidean_distance(self, request: AddTwoInts.Request, response: AddTwoInts.Response):
        self.x2 = request.a
        self.y2 = request.b
        response.sum = math.sqrt((self.x2-self.x1)**2 - (self.y2 - self.y1)**2)
        self.get_logger().info(
            "Recieved request...\nThe distance between the two points ({self.x1},{self.y1}) and ({self.x2},{self.y2}) is {response.sum}")
        return response


def main(args=None):
    rclpy.init(args=args)
    dist = EuclideanDistance()
    rclpy.spin(dist)
    rclpy.shutdown()


if __name__ == '__main__':
    main()