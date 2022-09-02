// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_interfaces:srv/SetLed.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__SET_LED__STRUCT_HPP_
#define CUSTOM_INTERFACES__SRV__DETAIL__SET_LED__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_interfaces__srv__SetLed_Request __attribute__((deprecated))
#else
# define DEPRECATED__custom_interfaces__srv__SetLed_Request __declspec(deprecated)
#endif

namespace custom_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetLed_Request_
{
  using Type = SetLed_Request_<ContainerAllocator>;

  explicit SetLed_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->battery_state = 0ll;
    }
  }

  explicit SetLed_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->battery_state = 0ll;
    }
  }

  // field types and members
  using _battery_state_type =
    int64_t;
  _battery_state_type battery_state;

  // setters for named parameter idiom
  Type & set__battery_state(
    const int64_t & _arg)
  {
    this->battery_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interfaces::srv::SetLed_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interfaces::srv::SetLed_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interfaces::srv::SetLed_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interfaces::srv::SetLed_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::srv::SetLed_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::srv::SetLed_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::srv::SetLed_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::srv::SetLed_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interfaces::srv::SetLed_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interfaces::srv::SetLed_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interfaces__srv__SetLed_Request
    std::shared_ptr<custom_interfaces::srv::SetLed_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interfaces__srv__SetLed_Request
    std::shared_ptr<custom_interfaces::srv::SetLed_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetLed_Request_ & other) const
  {
    if (this->battery_state != other.battery_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetLed_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetLed_Request_

// alias to use template instance with default allocator
using SetLed_Request =
  custom_interfaces::srv::SetLed_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custom_interfaces


#ifndef _WIN32
# define DEPRECATED__custom_interfaces__srv__SetLed_Response __attribute__((deprecated))
#else
# define DEPRECATED__custom_interfaces__srv__SetLed_Response __declspec(deprecated)
#endif

namespace custom_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetLed_Response_
{
  using Type = SetLed_Response_<ContainerAllocator>;

  explicit SetLed_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit SetLed_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _led_state_type =
    std::vector<int64_t, typename ContainerAllocator::template rebind<int64_t>::other>;
  _led_state_type led_state;
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__led_state(
    const std::vector<int64_t, typename ContainerAllocator::template rebind<int64_t>::other> & _arg)
  {
    this->led_state = _arg;
    return *this;
  }
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interfaces::srv::SetLed_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interfaces::srv::SetLed_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interfaces::srv::SetLed_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interfaces::srv::SetLed_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::srv::SetLed_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::srv::SetLed_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::srv::SetLed_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::srv::SetLed_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interfaces::srv::SetLed_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interfaces::srv::SetLed_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interfaces__srv__SetLed_Response
    std::shared_ptr<custom_interfaces::srv::SetLed_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interfaces__srv__SetLed_Response
    std::shared_ptr<custom_interfaces::srv::SetLed_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetLed_Response_ & other) const
  {
    if (this->led_state != other.led_state) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetLed_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetLed_Response_

// alias to use template instance with default allocator
using SetLed_Response =
  custom_interfaces::srv::SetLed_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custom_interfaces

namespace custom_interfaces
{

namespace srv
{

struct SetLed
{
  using Request = custom_interfaces::srv::SetLed_Request;
  using Response = custom_interfaces::srv::SetLed_Response;
};

}  // namespace srv

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__SET_LED__STRUCT_HPP_
