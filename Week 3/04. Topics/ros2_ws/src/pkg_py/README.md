# ROS Topic

## Creating a Topic Publisher

<div id="publisher"></div>
The source code <a href="./pkg_py/robot_news.py">here</a>

- Create a file as in `robot_news.py`
- Make the file an executable
  ```shell
    chmod +x robot_news.py
  ```
- Import the Ros client and node
  ```bash
    import rclpy
    from rclpy.node import Node
  ```
- To create a topic publisher, you need a `msg` file & type. Since you haven't created a custom ROS `message`, you can use the default message installed with ROS2 globally.
  ```py
    from example_interfaces.msg import String
  ```
- The `String` is the message type. That is, the publisher publishes a string data.
- Now create the `publisher`

  ```py
  self.publisher_ = self.create_publisher(msg_type, topic_name, QoS)
  ```

  The msg_type will be `String` imported from example interface, next is the topic name, then `QoS` Quality of Service - By default, publishers and subscriptions in ROS 2 have “keep last” for history with a queue size of **10**, “reliable” for reliability, “volatile” for durability, and “system default” for liveliness. Read more <a href="https://docs.ros.org/en/rolling/Concepts/About-Quality-of-Service-Settings.html">here</a>

- Set timer at which rate the publisher will publish and callback for the timer.
  $frequency = \dfrac{1}{time}$

  ```py
  self.timer_ = self.create_timer(0.5, self.publish_news)

  def publish_news(self):
        msg = String()
        msg.data = f"Hi, this is {self.robot_name_} from robot news station."
        self.publisher_.publish(msg)
  ```

- Then publish the message.
  ```
  self.publisher_.publish(msg)
  ```
  **Note:** Make sure you add the example_interface into the `package.xml` file.

```xml
<depend>example_interfaces</depend>
```

## Create a Topic Subscriber

<span style="background-color: yellow">The source code <a href="./pkg_py/transitor_radio.py">here</a></span>

<div id="subscriber"></div>

- Create another file and make it executable.
- Import the message type from `.msg` file
- Create subscriber.

  ```py
  self.subcriber_ = self.create_subscription(
            msg_type, topic_name, callback, QoS)

    # as in

    self.subcriber_ = self.create_subscription(
            String, "robot_news", self.robot_news_callback, 10)
  ```

  **Note:** Make sure the topic name is the same as the name given in the publisher. The callback is a method in the class.

```py
def robot_news_callback(self, msg):
        self.get_logger().info(msg.data)
```

- Then run both the publisher and subscriber.
