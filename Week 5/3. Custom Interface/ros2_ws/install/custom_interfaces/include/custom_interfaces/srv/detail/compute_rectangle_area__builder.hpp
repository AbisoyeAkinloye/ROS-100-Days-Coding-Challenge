// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:srv/ComputeRectangleArea.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__COMPUTE_RECTANGLE_AREA__BUILDER_HPP_
#define CUSTOM_INTERFACES__SRV__DETAIL__COMPUTE_RECTANGLE_AREA__BUILDER_HPP_

#include "custom_interfaces/srv/detail/compute_rectangle_area__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_ComputeRectangleArea_Request_breadth
{
public:
  explicit Init_ComputeRectangleArea_Request_breadth(::custom_interfaces::srv::ComputeRectangleArea_Request & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::srv::ComputeRectangleArea_Request breadth(::custom_interfaces::srv::ComputeRectangleArea_Request::_breadth_type arg)
  {
    msg_.breadth = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::ComputeRectangleArea_Request msg_;
};

class Init_ComputeRectangleArea_Request_length
{
public:
  Init_ComputeRectangleArea_Request_length()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComputeRectangleArea_Request_breadth length(::custom_interfaces::srv::ComputeRectangleArea_Request::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_ComputeRectangleArea_Request_breadth(msg_);
  }

private:
  ::custom_interfaces::srv::ComputeRectangleArea_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::ComputeRectangleArea_Request>()
{
  return custom_interfaces::srv::builder::Init_ComputeRectangleArea_Request_length();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_ComputeRectangleArea_Response_area
{
public:
  Init_ComputeRectangleArea_Response_area()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interfaces::srv::ComputeRectangleArea_Response area(::custom_interfaces::srv::ComputeRectangleArea_Response::_area_type arg)
  {
    msg_.area = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::ComputeRectangleArea_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::ComputeRectangleArea_Response>()
{
  return custom_interfaces::srv::builder::Init_ComputeRectangleArea_Response_area();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__COMPUTE_RECTANGLE_AREA__BUILDER_HPP_
