# Service

The mode of communication in ROS2 are `topic` and `service`. 
- Topic communicate continously/repeatedly but Service communicate for a specified period of time i.e `momentarily`
- Topics are used for data stream while Service is used for Server - Client communication
- A synchronous mode of communication using `services` and, an asynchronous mode of communication with the publisher/subscriber system. 
- Service is bidirectional asynchronous or synchronous while topic is unidirectional asynchronous.
- Services re mostly used for actions or computation. Hence, the naming starts with a verb.
- **N.B:** A service server can only exist once, but can have many clients.

## Analogy

An analogy of a web app is used. The computer/smartphone used to browse is the `Client` while an `API` called is the `Server` through hyperprotocol transfer (https) which is the `Service`.
![Service](service.png)

## Commands
- To list the availabe service
  ```
  ros2 service list
  ```
- To check the message type, append `-t` flag
  ```
  ros2 service list -t
  ```
- To call a service
  ```
  ros2 service call <service_name> <service_type>
  ```
- To show service interface
  ```
  ros2 interface show <service_type>
  ```