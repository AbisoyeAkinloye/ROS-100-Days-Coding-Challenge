// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_interfaces:srv/SetLed.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__SET_LED__TRAITS_HPP_
#define CUSTOM_INTERFACES__SRV__DETAIL__SET_LED__TRAITS_HPP_

#include "custom_interfaces/srv/detail/set_led__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_interfaces::srv::SetLed_Request>()
{
  return "custom_interfaces::srv::SetLed_Request";
}

template<>
inline const char * name<custom_interfaces::srv::SetLed_Request>()
{
  return "custom_interfaces/srv/SetLed_Request";
}

template<>
struct has_fixed_size<custom_interfaces::srv::SetLed_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_interfaces::srv::SetLed_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_interfaces::srv::SetLed_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_interfaces::srv::SetLed_Response>()
{
  return "custom_interfaces::srv::SetLed_Response";
}

template<>
inline const char * name<custom_interfaces::srv::SetLed_Response>()
{
  return "custom_interfaces/srv/SetLed_Response";
}

template<>
struct has_fixed_size<custom_interfaces::srv::SetLed_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_interfaces::srv::SetLed_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custom_interfaces::srv::SetLed_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_interfaces::srv::SetLed>()
{
  return "custom_interfaces::srv::SetLed";
}

template<>
inline const char * name<custom_interfaces::srv::SetLed>()
{
  return "custom_interfaces/srv/SetLed";
}

template<>
struct has_fixed_size<custom_interfaces::srv::SetLed>
  : std::integral_constant<
    bool,
    has_fixed_size<custom_interfaces::srv::SetLed_Request>::value &&
    has_fixed_size<custom_interfaces::srv::SetLed_Response>::value
  >
{
};

template<>
struct has_bounded_size<custom_interfaces::srv::SetLed>
  : std::integral_constant<
    bool,
    has_bounded_size<custom_interfaces::srv::SetLed_Request>::value &&
    has_bounded_size<custom_interfaces::srv::SetLed_Response>::value
  >
{
};

template<>
struct is_service<custom_interfaces::srv::SetLed>
  : std::true_type
{
};

template<>
struct is_service_request<custom_interfaces::srv::SetLed_Request>
  : std::true_type
{
};

template<>
struct is_service_response<custom_interfaces::srv::SetLed_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__SET_LED__TRAITS_HPP_
