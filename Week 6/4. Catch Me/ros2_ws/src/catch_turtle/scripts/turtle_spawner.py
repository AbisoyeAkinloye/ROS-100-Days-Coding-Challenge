#!/usr/bin/env python3

import rclpy
from rclpy.node import Node

from turtlesim.srv import Spawn
from catch_turtle.msg import Turtle
from catch_turtle.msg import TurtleArray
from catch_turtle.srv import CatchTurtle

import random, math
from functools import partial


class SpawnTurtle(Node):
    def __init__(self):
        super().__init__("turtle_spawner")
        self.counter = 1

        self.turtle_publisher_ = self.create_publisher(TurtleArray, "alive_turtles", 10)
        self.alive_turtles = []
        self.timer_ = self.create_timer(3.0, self.spawn_turtle)

    def publish_alive_turtle(self):
        msg = TurtleArray()
        msg.turtles = self.alive_turtles
        self.turtle_publisher_.publish(msg)


    def call_spawn_service(self, turtle_name, pose_x, pose_y, theta):
        spawn_turtle_client = self.create_client(Spawn, "/spawn")

        while not spawn_turtle_client.wait_for_service(1.0):
            self.get_logger().warn("Service is unavailable, waiting again...")

        request = Spawn.Request()
        request.x = pose_x
        request.y = pose_y
        request.theta = theta
        request.name = turtle_name

        future = spawn_turtle_client.call_async(request)
        future.add_done_callback(partial(self.get_response,turtle_name=turtle_name, pose_x=pose_x, pose_y=pose_y, theta=theta))

    def get_response(self, future, turtle_name, pose_x, pose_y, theta):
        try:
            response = future.result()
            self.get_logger().info(f'{response.name} has been spawned.')
            new_turtle = Turtle()
            new_turtle.name = response.name
            new_turtle.x = pose_x
            new_turtle.y = pose_y
            new_turtle.theta = theta
            self.alive_turtles.append(new_turtle)
            self.publish_alive_turtle()
        except Exception as e:
            self.get_logger().error("Service call failed: %r" % (e,))

    def spawn_turtle(self):
        self.counter += 1
        turtle_name = f"turtle{self.counter}"
        pose_x = random.uniform(0.0, 11.0)
        pose_y = random.uniform(0.0, 11.0)
        theta = random.uniform(0.0, 2*math.pi)
        self.call_spawn_service(turtle_name, pose_x, pose_y, theta)


def main(args=None):
    rclpy.init(args=args)
    spawn_turtle = SpawnTurtle()
    rclpy.spin(spawn_turtle)
    rclpy.shutdown()


if __name__ == '__main__':
    main()
