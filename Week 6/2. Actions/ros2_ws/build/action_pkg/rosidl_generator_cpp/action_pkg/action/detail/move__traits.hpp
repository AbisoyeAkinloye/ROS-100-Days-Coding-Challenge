// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from action_pkg:action/Move.idl
// generated code does not contain a copyright notice

#ifndef ACTION_PKG__ACTION__DETAIL__MOVE__TRAITS_HPP_
#define ACTION_PKG__ACTION__DETAIL__MOVE__TRAITS_HPP_

#include "action_pkg/action/detail/move__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_pkg::action::Move_Goal>()
{
  return "action_pkg::action::Move_Goal";
}

template<>
inline const char * name<action_pkg::action::Move_Goal>()
{
  return "action_pkg/action/Move_Goal";
}

template<>
struct has_fixed_size<action_pkg::action::Move_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<action_pkg::action::Move_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<action_pkg::action::Move_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_pkg::action::Move_Result>()
{
  return "action_pkg::action::Move_Result";
}

template<>
inline const char * name<action_pkg::action::Move_Result>()
{
  return "action_pkg/action/Move_Result";
}

template<>
struct has_fixed_size<action_pkg::action::Move_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<action_pkg::action::Move_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<action_pkg::action::Move_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_pkg::action::Move_Feedback>()
{
  return "action_pkg::action::Move_Feedback";
}

template<>
inline const char * name<action_pkg::action::Move_Feedback>()
{
  return "action_pkg/action/Move_Feedback";
}

template<>
struct has_fixed_size<action_pkg::action::Move_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<action_pkg::action::Move_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<action_pkg::action::Move_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "action_pkg/action/detail/move__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_pkg::action::Move_SendGoal_Request>()
{
  return "action_pkg::action::Move_SendGoal_Request";
}

template<>
inline const char * name<action_pkg::action::Move_SendGoal_Request>()
{
  return "action_pkg/action/Move_SendGoal_Request";
}

template<>
struct has_fixed_size<action_pkg::action::Move_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<action_pkg::action::Move_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<action_pkg::action::Move_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<action_pkg::action::Move_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<action_pkg::action::Move_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_pkg::action::Move_SendGoal_Response>()
{
  return "action_pkg::action::Move_SendGoal_Response";
}

template<>
inline const char * name<action_pkg::action::Move_SendGoal_Response>()
{
  return "action_pkg/action/Move_SendGoal_Response";
}

template<>
struct has_fixed_size<action_pkg::action::Move_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<action_pkg::action::Move_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<action_pkg::action::Move_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_pkg::action::Move_SendGoal>()
{
  return "action_pkg::action::Move_SendGoal";
}

template<>
inline const char * name<action_pkg::action::Move_SendGoal>()
{
  return "action_pkg/action/Move_SendGoal";
}

template<>
struct has_fixed_size<action_pkg::action::Move_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<action_pkg::action::Move_SendGoal_Request>::value &&
    has_fixed_size<action_pkg::action::Move_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<action_pkg::action::Move_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<action_pkg::action::Move_SendGoal_Request>::value &&
    has_bounded_size<action_pkg::action::Move_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<action_pkg::action::Move_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<action_pkg::action::Move_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<action_pkg::action::Move_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_pkg::action::Move_GetResult_Request>()
{
  return "action_pkg::action::Move_GetResult_Request";
}

template<>
inline const char * name<action_pkg::action::Move_GetResult_Request>()
{
  return "action_pkg/action/Move_GetResult_Request";
}

template<>
struct has_fixed_size<action_pkg::action::Move_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<action_pkg::action::Move_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<action_pkg::action::Move_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "action_pkg/action/detail/move__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_pkg::action::Move_GetResult_Response>()
{
  return "action_pkg::action::Move_GetResult_Response";
}

template<>
inline const char * name<action_pkg::action::Move_GetResult_Response>()
{
  return "action_pkg/action/Move_GetResult_Response";
}

template<>
struct has_fixed_size<action_pkg::action::Move_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<action_pkg::action::Move_Result>::value> {};

template<>
struct has_bounded_size<action_pkg::action::Move_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<action_pkg::action::Move_Result>::value> {};

template<>
struct is_message<action_pkg::action::Move_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_pkg::action::Move_GetResult>()
{
  return "action_pkg::action::Move_GetResult";
}

template<>
inline const char * name<action_pkg::action::Move_GetResult>()
{
  return "action_pkg/action/Move_GetResult";
}

template<>
struct has_fixed_size<action_pkg::action::Move_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<action_pkg::action::Move_GetResult_Request>::value &&
    has_fixed_size<action_pkg::action::Move_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<action_pkg::action::Move_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<action_pkg::action::Move_GetResult_Request>::value &&
    has_bounded_size<action_pkg::action::Move_GetResult_Response>::value
  >
{
};

template<>
struct is_service<action_pkg::action::Move_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<action_pkg::action::Move_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<action_pkg::action::Move_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "action_pkg/action/detail/move__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_pkg::action::Move_FeedbackMessage>()
{
  return "action_pkg::action::Move_FeedbackMessage";
}

template<>
inline const char * name<action_pkg::action::Move_FeedbackMessage>()
{
  return "action_pkg/action/Move_FeedbackMessage";
}

template<>
struct has_fixed_size<action_pkg::action::Move_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<action_pkg::action::Move_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<action_pkg::action::Move_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<action_pkg::action::Move_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<action_pkg::action::Move_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<action_pkg::action::Move>
  : std::true_type
{
};

template<>
struct is_action_goal<action_pkg::action::Move_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<action_pkg::action::Move_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<action_pkg::action::Move_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // ACTION_PKG__ACTION__DETAIL__MOVE__TRAITS_HPP_
