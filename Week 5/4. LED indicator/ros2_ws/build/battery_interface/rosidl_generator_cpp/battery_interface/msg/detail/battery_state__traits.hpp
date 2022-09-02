// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from battery_interface:msg/BatteryState.idl
// generated code does not contain a copyright notice

#ifndef BATTERY_INTERFACE__MSG__DETAIL__BATTERY_STATE__TRAITS_HPP_
#define BATTERY_INTERFACE__MSG__DETAIL__BATTERY_STATE__TRAITS_HPP_

#include "battery_interface/msg/detail/battery_state__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<battery_interface::msg::BatteryState>()
{
  return "battery_interface::msg::BatteryState";
}

template<>
inline const char * name<battery_interface::msg::BatteryState>()
{
  return "battery_interface/msg/BatteryState";
}

template<>
struct has_fixed_size<battery_interface::msg::BatteryState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<battery_interface::msg::BatteryState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<battery_interface::msg::BatteryState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BATTERY_INTERFACE__MSG__DETAIL__BATTERY_STATE__TRAITS_HPP_
