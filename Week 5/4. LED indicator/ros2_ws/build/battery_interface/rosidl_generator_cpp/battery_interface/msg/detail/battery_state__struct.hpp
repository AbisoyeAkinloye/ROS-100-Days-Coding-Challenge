// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from battery_interface:msg/BatteryState.idl
// generated code does not contain a copyright notice

#ifndef BATTERY_INTERFACE__MSG__DETAIL__BATTERY_STATE__STRUCT_HPP_
#define BATTERY_INTERFACE__MSG__DETAIL__BATTERY_STATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__battery_interface__msg__BatteryState __attribute__((deprecated))
#else
# define DEPRECATED__battery_interface__msg__BatteryState __declspec(deprecated)
#endif

namespace battery_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BatteryState_
{
  using Type = BatteryState_<ContainerAllocator>;

  explicit BatteryState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->battery_state = 0ll;
    }
  }

  explicit BatteryState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    battery_interface::msg::BatteryState_<ContainerAllocator> *;
  using ConstRawPtr =
    const battery_interface::msg::BatteryState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<battery_interface::msg::BatteryState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<battery_interface::msg::BatteryState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      battery_interface::msg::BatteryState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<battery_interface::msg::BatteryState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      battery_interface::msg::BatteryState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<battery_interface::msg::BatteryState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<battery_interface::msg::BatteryState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<battery_interface::msg::BatteryState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__battery_interface__msg__BatteryState
    std::shared_ptr<battery_interface::msg::BatteryState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__battery_interface__msg__BatteryState
    std::shared_ptr<battery_interface::msg::BatteryState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BatteryState_ & other) const
  {
    if (this->battery_state != other.battery_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const BatteryState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BatteryState_

// alias to use template instance with default allocator
using BatteryState =
  battery_interface::msg::BatteryState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace battery_interface

#endif  // BATTERY_INTERFACE__MSG__DETAIL__BATTERY_STATE__STRUCT_HPP_
