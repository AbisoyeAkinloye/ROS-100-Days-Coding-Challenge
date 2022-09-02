// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from battery_interface:srv/SetLed.idl
// generated code does not contain a copyright notice

#ifndef BATTERY_INTERFACE__SRV__DETAIL__SET_LED__BUILDER_HPP_
#define BATTERY_INTERFACE__SRV__DETAIL__SET_LED__BUILDER_HPP_

#include "battery_interface/srv/detail/set_led__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace battery_interface
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
  ::battery_interface::srv::SetLed_Request battery_state(::battery_interface::srv::SetLed_Request::_battery_state_type arg)
  {
    msg_.battery_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::battery_interface::srv::SetLed_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::battery_interface::srv::SetLed_Request>()
{
  return battery_interface::srv::builder::Init_SetLed_Request_battery_state();
}

}  // namespace battery_interface


namespace battery_interface
{

namespace srv
{

namespace builder
{

class Init_SetLed_Response_success
{
public:
  explicit Init_SetLed_Response_success(::battery_interface::srv::SetLed_Response & msg)
  : msg_(msg)
  {}
  ::battery_interface::srv::SetLed_Response success(::battery_interface::srv::SetLed_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::battery_interface::srv::SetLed_Response msg_;
};

class Init_SetLed_Response_led_state
{
public:
  Init_SetLed_Response_led_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetLed_Response_success led_state(::battery_interface::srv::SetLed_Response::_led_state_type arg)
  {
    msg_.led_state = std::move(arg);
    return Init_SetLed_Response_success(msg_);
  }

private:
  ::battery_interface::srv::SetLed_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::battery_interface::srv::SetLed_Response>()
{
  return battery_interface::srv::builder::Init_SetLed_Response_led_state();
}

}  // namespace battery_interface

#endif  // BATTERY_INTERFACE__SRV__DETAIL__SET_LED__BUILDER_HPP_
