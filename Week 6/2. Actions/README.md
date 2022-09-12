# ROS Action

There are there mode of communication in ROS, namely;
1. Topic
2. Service
3. Action

Action works like the ROS service but it is intended for long running task. Unlike service, action can be cancelled while running. Actions are built on topics and services. Their functionality is similar to services, except actions are preemptable (you can cancel them while executing).

In ROS service (server/client) system, the client makes a request while the server process the request and send response. Whereas, an action consists of:

- goal
- feedback
- result

An `action client` node sends a goal to an `action server` node that acknowledges the goal and returns a stream of feedback and a result.

A robot system would likely use actions for navigation. An action goal could tell a robot to travel to a position. While the robot navigates to the position, it can send updates along the way (i.e. feedback), and then a final result message once it’s reached its destination.

## Analogy

A delivery robot that delivers goods to buyer autonomously, the `goal` is to deliver goods to someone at a specific location, it gives `feedback` of his present location (tracker) at any point in time, later `result` of the recipient location. If successfully delivered goods, the `status` will be SUCCEEDED.  

Hence, Action can:
- Cancel execution
- It is ansynchronous
- get feedback from the server
- handle multiple goals

## Creating Action
- Make directory in the package named `action`
  ```
  mkdir action
  ```
- Create an action file, remember convectionally naming
  ```
  touch Name.action
  ```
- An action definition is made up of three message definitions separated by `---`
  ```
  # Goal
    ---
  # Result
    ---
  # Feedback
  ```

  - A request message is sent from an action client to an action server initiating a new goal.
  - A result message is sent from an action server to an action client when a goal is done.
  - Feedback messages are periodically sent from an action server to an action client with updates about a goal.
- In the `CMakeLists.txt` file
  ```c
  # find dependencies
  find_package(rosidl_default_generators REQUIRED)

  rosidl_generate_interfaces(${PROJECT_NAME}
    "action/Name.action"
  )
  ```
- In the `package.xml`
  ```xml
  <depend>action_msgs</depend>
  ```
- Note, we need to depend on action_msgs since action definitions include additional metadata (e.g. goal IDs).

## Command

- List ROS actions
  ```
  ros2 action list
  ```
- Action types
  ```
  ros2 action list -t
  ```
- Get action information
  ```
  ros2 action info /action_name
  ```
- Structure of action
  ```
  ros2 interface show /action_type
  ```
- Send goal from terminal
  ```
  ros2 action send_goal <action_name> <action_type> <values>
  ```
- To get `feedback` from `goal` sent
  ```
  ros2 action send_goal --feedback <action_name> <action_type> <values>
  ```