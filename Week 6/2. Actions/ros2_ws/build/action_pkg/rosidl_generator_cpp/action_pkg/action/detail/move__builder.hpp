// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from action_pkg:action/Move.idl
// generated code does not contain a copyright notice

#ifndef ACTION_PKG__ACTION__DETAIL__MOVE__BUILDER_HPP_
#define ACTION_PKG__ACTION__DETAIL__MOVE__BUILDER_HPP_

#include "action_pkg/action/detail/move__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace action_pkg
{

namespace action
{

namespace builder
{

class Init_Move_Goal_distance
{
public:
  Init_Move_Goal_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::action_pkg::action::Move_Goal distance(::action_pkg::action::Move_Goal::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_pkg::action::Move_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_pkg::action::Move_Goal>()
{
  return action_pkg::action::builder::Init_Move_Goal_distance();
}

}  // namespace action_pkg


namespace action_pkg
{

namespace action
{

namespace builder
{

class Init_Move_Result_status
{
public:
  Init_Move_Result_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::action_pkg::action::Move_Result status(::action_pkg::action::Move_Result::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_pkg::action::Move_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_pkg::action::Move_Result>()
{
  return action_pkg::action::builder::Init_Move_Result_status();
}

}  // namespace action_pkg


namespace action_pkg
{

namespace action
{

namespace builder
{

class Init_Move_Feedback_current_distance
{
public:
  Init_Move_Feedback_current_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::action_pkg::action::Move_Feedback current_distance(::action_pkg::action::Move_Feedback::_current_distance_type arg)
  {
    msg_.current_distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_pkg::action::Move_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_pkg::action::Move_Feedback>()
{
  return action_pkg::action::builder::Init_Move_Feedback_current_distance();
}

}  // namespace action_pkg


namespace action_pkg
{

namespace action
{

namespace builder
{

class Init_Move_SendGoal_Request_goal
{
public:
  explicit Init_Move_SendGoal_Request_goal(::action_pkg::action::Move_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::action_pkg::action::Move_SendGoal_Request goal(::action_pkg::action::Move_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_pkg::action::Move_SendGoal_Request msg_;
};

class Init_Move_SendGoal_Request_goal_id
{
public:
  Init_Move_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_SendGoal_Request_goal goal_id(::action_pkg::action::Move_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Move_SendGoal_Request_goal(msg_);
  }

private:
  ::action_pkg::action::Move_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_pkg::action::Move_SendGoal_Request>()
{
  return action_pkg::action::builder::Init_Move_SendGoal_Request_goal_id();
}

}  // namespace action_pkg


namespace action_pkg
{

namespace action
{

namespace builder
{

class Init_Move_SendGoal_Response_stamp
{
public:
  explicit Init_Move_SendGoal_Response_stamp(::action_pkg::action::Move_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::action_pkg::action::Move_SendGoal_Response stamp(::action_pkg::action::Move_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_pkg::action::Move_SendGoal_Response msg_;
};

class Init_Move_SendGoal_Response_accepted
{
public:
  Init_Move_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_SendGoal_Response_stamp accepted(::action_pkg::action::Move_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Move_SendGoal_Response_stamp(msg_);
  }

private:
  ::action_pkg::action::Move_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_pkg::action::Move_SendGoal_Response>()
{
  return action_pkg::action::builder::Init_Move_SendGoal_Response_accepted();
}

}  // namespace action_pkg


namespace action_pkg
{

namespace action
{

namespace builder
{

class Init_Move_GetResult_Request_goal_id
{
public:
  Init_Move_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::action_pkg::action::Move_GetResult_Request goal_id(::action_pkg::action::Move_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_pkg::action::Move_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_pkg::action::Move_GetResult_Request>()
{
  return action_pkg::action::builder::Init_Move_GetResult_Request_goal_id();
}

}  // namespace action_pkg


namespace action_pkg
{

namespace action
{

namespace builder
{

class Init_Move_GetResult_Response_result
{
public:
  explicit Init_Move_GetResult_Response_result(::action_pkg::action::Move_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::action_pkg::action::Move_GetResult_Response result(::action_pkg::action::Move_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_pkg::action::Move_GetResult_Response msg_;
};

class Init_Move_GetResult_Response_status
{
public:
  Init_Move_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_GetResult_Response_result status(::action_pkg::action::Move_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Move_GetResult_Response_result(msg_);
  }

private:
  ::action_pkg::action::Move_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_pkg::action::Move_GetResult_Response>()
{
  return action_pkg::action::builder::Init_Move_GetResult_Response_status();
}

}  // namespace action_pkg


namespace action_pkg
{

namespace action
{

namespace builder
{

class Init_Move_FeedbackMessage_feedback
{
public:
  explicit Init_Move_FeedbackMessage_feedback(::action_pkg::action::Move_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::action_pkg::action::Move_FeedbackMessage feedback(::action_pkg::action::Move_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_pkg::action::Move_FeedbackMessage msg_;
};

class Init_Move_FeedbackMessage_goal_id
{
public:
  Init_Move_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_FeedbackMessage_feedback goal_id(::action_pkg::action::Move_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Move_FeedbackMessage_feedback(msg_);
  }

private:
  ::action_pkg::action::Move_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_pkg::action::Move_FeedbackMessage>()
{
  return action_pkg::action::builder::Init_Move_FeedbackMessage_goal_id();
}

}  // namespace action_pkg

#endif  // ACTION_PKG__ACTION__DETAIL__MOVE__BUILDER_HPP_
