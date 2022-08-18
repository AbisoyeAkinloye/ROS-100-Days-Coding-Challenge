# ROS2 Topics

They are mean of communication used by nodes to exchange messages. Topics are a vital element of the ROS graph that act as a bus for nodes to exchange messages.

The analogy of a radio transmitter can be used to explain ROS topic as shown below:
![radio transmitter](ros%20topic.png)

* Unidirectional data stream (publisher/subscriber)
* Publisher and Subscriber are anonymous. Publisher doesn't know the subscribe, the subscriber doesn't know the publisher.
* A topic has a message type.
* A node can have many publishers/subscribers for many differnt topics.

## Write Python Publisher

## Write Python Subscriber

## Write C++ Publisher

## Write C++ Subscriber