// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:srv/SetLed.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__SET_LED__BUILDER_HPP_
#define CUSTOM_INTERFACES__SRV__DETAIL__SET_LED__BUILDER_HPP_

#include "custom_interfaces/srv/detail/set_led__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetLed_Request_battery_state
{
public:
  Init_SetLed_Request_battery_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interfaces::srv::SetLed_Request battery_state(::custom_interfaces::srv::SetLed_Request::_battery_state_type arg)
  {
    msg_.battery_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::SetLed_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::SetLed_Request>()
{
  return custom_interfaces::srv::builder::Init_SetLed_Request_battery_state();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetLed_Response_success
{
public:
  explicit Init_SetLed_Response_success(::custom_interfaces::srv::SetLed_Response & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::srv::SetLed_Response success(::custom_interfaces::srv::SetLed_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::SetLed_Response msg_;
};

class Init_SetLed_Response_led_state
{
public:
  Init_SetLed_Response_led_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetLed_Response_success led_state(::custom_interfaces::srv::SetLed_Response::_led_state_type arg)
  {
    msg_.led_state = std::move(arg);
    return Init_SetLed_Response_success(msg_);
  }

private:
  ::custom_interfaces::srv::SetLed_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::SetLed_Response>()
{
  return custom_interfaces::srv::builder::Init_SetLed_Response_led_state();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__SET_LED__BUILDER_HPP_
