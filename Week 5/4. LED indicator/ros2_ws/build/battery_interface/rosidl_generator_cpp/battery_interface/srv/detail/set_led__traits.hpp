// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from battery_interface:srv/SetLed.idl
// generated code does not contain a copyright notice

#ifndef BATTERY_INTERFACE__SRV__DETAIL__SET_LED__TRAITS_HPP_
#define BATTERY_INTERFACE__SRV__DETAIL__SET_LED__TRAITS_HPP_

#include "battery_interface/srv/detail/set_led__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<battery_interface::srv::SetLed_Request>()
{
  return "battery_interface::srv::SetLed_Request";
}

template<>
inline const char * name<battery_interface::srv::SetLed_Request>()
{
  return "battery_interface/srv/SetLed_Request";
}

template<>
struct has_fixed_size<battery_interface::srv::SetLed_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<battery_interface::srv::SetLed_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<battery_interface::srv::SetLed_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<battery_interface::srv::SetLed_Response>()
{
  return "battery_interface::srv::SetLed_Response";
}

template<>
inline const char * name<battery_interface::srv::SetLed_Response>()
{
  return "battery_interface/srv/SetLed_Response";
}

template<>
struct has_fixed_size<battery_interface::srv::SetLed_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<battery_interface::srv::SetLed_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<battery_interface::srv::SetLed_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<battery_interface::srv::SetLed>()
{
  return "battery_interface::srv::SetLed";
}

template<>
inline const char * name<battery_interface::srv::SetLed>()
{
  return "battery_interface/srv/SetLed";
}

template<>
struct has_fixed_size<battery_interface::srv::SetLed>
  : std::integral_constant<
    bool,
    has_fixed_size<battery_interface::srv::SetLed_Request>::value &&
    has_fixed_size<battery_interface::srv::SetLed_Response>::value
  >
{
};

template<>
struct has_bounded_size<battery_interface::srv::SetLed>
  : std::integral_constant<
    bool,
    has_bounded_size<battery_interface::srv::SetLed_Request>::value &&
    has_bounded_size<battery_interface::srv::SetLed_Response>::value
  >
{
};

template<>
struct is_service<battery_interface::srv::SetLed>
  : std::true_type
{
};

template<>
struct is_service_request<battery_interface::srv::SetLed_Request>
  : std::true_type
{
};

template<>
struct is_service_response<battery_interface::srv::SetLed_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // BATTERY_INTERFACE__SRV__DETAIL__SET_LED__TRAITS_HPP_
