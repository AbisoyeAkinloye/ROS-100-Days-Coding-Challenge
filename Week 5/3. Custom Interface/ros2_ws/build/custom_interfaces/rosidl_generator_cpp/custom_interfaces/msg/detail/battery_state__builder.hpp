// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:msg/BatteryState.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__BATTERY_STATE__BUILDER_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__BATTERY_STATE__BUILDER_HPP_

#include "custom_interfaces/msg/detail/battery_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_interfaces
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
  ::custom_interfaces::msg::BatteryState battery_state(::custom_interfaces::msg::BatteryState::_battery_state_type arg)
  {
    msg_.battery_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::msg::BatteryState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::msg::BatteryState>()
{
  return custom_interfaces::msg::builder::Init_BatteryState_battery_state();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__BATTERY_STATE__BUILDER_HPP_
