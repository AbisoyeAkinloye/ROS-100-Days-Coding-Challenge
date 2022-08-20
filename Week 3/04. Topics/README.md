# ROS2 Topics

They are mean of communication used by nodes to exchange messages. Topics are a vital element of the ROS graph that act as a bus for nodes to exchange messages.

The analogy of a radio transmitter can be used to explain ROS topic as shown below:

![radio transmitter](ros%20topic.png)

* A node can have many publishers/subscribers for many differnt topics.
* Unidirectional data stream (publisher/subscriber)
* Publisher and Subscriber are anonymous. 
* Publisher doesn't know the subscribe, the subscriber doesn't know the publisher but they share the same communication bus which is called **Topic** we messages are shared.
* A topic has a message type.
  ```
  ros2 topic list -t
  ```
* To get infomation about number of subcriber(s), publisher(s), and message type.
  ```
  ros2 topic info /<topic_name>
  ```
* To get the message from the topic
  ```
  ros2 topic echo /<topic_name>
  ```

## Write Python Publisher
Using the analogy of Radio tranmission, you can write a publisher which sends radio signal to a certain frequency (topic).

Read my documentation <a href="./ros2_ws/src/pkg_py/README.md#publisher">here</a>

## Write Python Subscriber

Using the analogy of Radio tranmission, you can write a subscriber which receives radio signal at a certain frequency (topic).

Read my documentation <a href="./ros2_ws/src/pkg_py/README.md#subscriber">here</a>

## Write C++ Publisher

Using the analogy of Radio tranmission, you can write a publisher which sends radio signal at a certain frequency (topic).

Read my documentation <a href="./ros2_ws/src/pkg_cpp/README.md#publisher">here</a>

## Write C++ Subscriber

Using the analogy of Radio tranmission, you can write a subscriber which receives radio signal at a certain frequency (topic).

Read my documentation <a href="./ros2_ws/src/pkg_cpp/README.md#subscriber">here</a>