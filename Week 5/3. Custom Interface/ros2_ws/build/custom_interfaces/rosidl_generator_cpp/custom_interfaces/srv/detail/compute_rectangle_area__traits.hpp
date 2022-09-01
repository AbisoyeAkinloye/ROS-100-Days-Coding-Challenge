// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_interfaces:srv/ComputeRectangleArea.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__COMPUTE_RECTANGLE_AREA__TRAITS_HPP_
#define CUSTOM_INTERFACES__SRV__DETAIL__COMPUTE_RECTANGLE_AREA__TRAITS_HPP_

#include "custom_interfaces/srv/detail/compute_rectangle_area__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_interfaces::srv::ComputeRectangleArea_Request>()
{
  return "custom_interfaces::srv::ComputeRectangleArea_Request";
}

template<>
inline const char * name<custom_interfaces::srv::ComputeRectangleArea_Request>()
{
  return "custom_interfaces/srv/ComputeRectangleArea_Request";
}

template<>
struct has_fixed_size<custom_interfaces::srv::ComputeRectangleArea_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_interfaces::srv::ComputeRectangleArea_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_interfaces::srv::ComputeRectangleArea_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_interfaces::srv::ComputeRectangleArea_Response>()
{
  return "custom_interfaces::srv::ComputeRectangleArea_Response";
}

template<>
inline const char * name<custom_interfaces::srv::ComputeRectangleArea_Response>()
{
  return "custom_interfaces/srv/ComputeRectangleArea_Response";
}

template<>
struct has_fixed_size<custom_interfaces::srv::ComputeRectangleArea_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_interfaces::srv::ComputeRectangleArea_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_interfaces::srv::ComputeRectangleArea_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_interfaces::srv::ComputeRectangleArea>()
{
  return "custom_interfaces::srv::ComputeRectangleArea";
}

template<>
inline const char * name<custom_interfaces::srv::ComputeRectangleArea>()
{
  return "custom_interfaces/srv/ComputeRectangleArea";
}

template<>
struct has_fixed_size<custom_interfaces::srv::ComputeRectangleArea>
  : std::integral_constant<
    bool,
    has_fixed_size<custom_interfaces::srv::ComputeRectangleArea_Request>::value &&
    has_fixed_size<custom_interfaces::srv::ComputeRectangleArea_Response>::value
  >
{
};

template<>
struct has_bounded_size<custom_interfaces::srv::ComputeRectangleArea>
  : std::integral_constant<
    bool,
    has_bounded_size<custom_interfaces::srv::ComputeRectangleArea_Request>::value &&
    has_bounded_size<custom_interfaces::srv::ComputeRectangleArea_Response>::value
  >
{
};

template<>
struct is_service<custom_interfaces::srv::ComputeRectangleArea>
  : std::true_type
{
};

template<>
struct is_service_request<custom_interfaces::srv::ComputeRectangleArea_Request>
  : std::true_type
{
};

template<>
struct is_service_response<custom_interfaces::srv::ComputeRectangleArea_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__COMPUTE_RECTANGLE_AREA__TRAITS_HPP_
