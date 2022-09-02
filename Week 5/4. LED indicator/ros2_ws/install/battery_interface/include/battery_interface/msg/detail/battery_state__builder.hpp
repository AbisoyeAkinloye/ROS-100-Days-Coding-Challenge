// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from battery_interface:msg/BatteryState.idl
// generated code does not contain a copyright notice

#ifndef BATTERY_INTERFACE__MSG__DETAIL__BATTERY_STATE__BUILDER_HPP_
#define BATTERY_INTERFACE__MSG__DETAIL__BATTERY_STATE__BUILDER_HPP_

#include "battery_interface/msg/detail/battery_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace battery_interface
{

namespace msg
{

namespace builder
{

class Init_BatteryState_battery_state
{
public:
  Init_BatteryState_battery_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::battery_interface::msg::BatteryState battery_state(::battery_interface::msg::BatteryState::_battery_state_type arg)
  {
    msg_.battery_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::battery_interface::msg::BatteryState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::battery_interface::msg::BatteryState>()
{
  return battery_interface::msg::builder::Init_BatteryState_battery_state();
}

}  // namespace battery_interface

#endif  // BATTERY_INTERFACE__MSG__DETAIL__BATTERY_STATE__BUILDER_HPP_
