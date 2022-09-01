// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_interfaces:srv/ComputeRectangleArea.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__COMPUTE_RECTANGLE_AREA__STRUCT_HPP_
#define CUSTOM_INTERFACES__SRV__DETAIL__COMPUTE_RECTANGLE_AREA__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_interfaces__srv__ComputeRectangleArea_Request __attribute__((deprecated))
#else
# define DEPRECATED__custom_interfaces__srv__ComputeRectangleArea_Request __declspec(deprecated)
#endif

namespace custom_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ComputeRectangleArea_Request_
{
  using Type = ComputeRectangleArea_Request_<ContainerAllocator>;

  explicit ComputeRectangleArea_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->length = 0.0;
      this->breadth = 0.0;
    }
  }

  explicit ComputeRectangleArea_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->length = 0.0;
      this->breadth = 0.0;
    }
  }

  // field types and members
  using _length_type =
    double;
  _length_type length;
  using _breadth_type =
    double;
  _breadth_type breadth;

  // setters for named parameter idiom
  Type & set__length(
    const double & _arg)
  {
    this->length = _arg;
    return *this;
  }
  Type & set__breadth(
    const double & _arg)
  {
    this->breadth = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interfaces::srv::ComputeRectangleArea_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interfaces::srv::ComputeRectangleArea_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interfaces::srv::ComputeRectangleArea_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interfaces::srv::ComputeRectangleArea_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::srv::ComputeRectangleArea_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::srv::ComputeRectangleArea_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::srv::ComputeRectangleArea_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::srv::ComputeRectangleArea_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interfaces::srv::ComputeRectangleArea_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interfaces::srv::ComputeRectangleArea_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interfaces__srv__ComputeRectangleArea_Request
    std::shared_ptr<custom_interfaces::srv::ComputeRectangleArea_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interfaces__srv__ComputeRectangleArea_Request
    std::shared_ptr<custom_interfaces::srv::ComputeRectangleArea_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ComputeRectangleArea_Request_ & other) const
  {
    if (this->length != other.length) {
      return false;
    }
    if (this->breadth != other.breadth) {
      return false;
    }
    return true;
  }
  bool operator!=(const ComputeRectangleArea_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ComputeRectangleArea_Request_

// alias to use template instance with default allocator
using ComputeRectangleArea_Request =
  custom_interfaces::srv::ComputeRectangleArea_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custom_interfaces


#ifndef _WIN32
# define DEPRECATED__custom_interfaces__srv__ComputeRectangleArea_Response __attribute__((deprecated))
#else
# define DEPRECATED__custom_interfaces__srv__ComputeRectangleArea_Response __declspec(deprecated)
#endif

namespace custom_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ComputeRectangleArea_Response_
{
  using Type = ComputeRectangleArea_Response_<ContainerAllocator>;

  explicit ComputeRectangleArea_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->area = 0.0;
    }
  }

  explicit ComputeRectangleArea_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->area = 0.0;
    }
  }

  // field types and members
  using _area_type =
    double;
  _area_type area;

  // setters for named parameter idiom
  Type & set__area(
    const double & _arg)
  {
    this->area = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interfaces::srv::ComputeRectangleArea_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interfaces::srv::ComputeRectangleArea_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interfaces::srv::ComputeRectangleArea_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interfaces::srv::ComputeRectangleArea_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::srv::ComputeRectangleArea_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::srv::ComputeRectangleArea_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::srv::ComputeRectangleArea_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::srv::ComputeRectangleArea_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interfaces::srv::ComputeRectangleArea_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interfaces::srv::ComputeRectangleArea_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interfaces__srv__ComputeRectangleArea_Response
    std::shared_ptr<custom_interfaces::srv::ComputeRectangleArea_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interfaces__srv__ComputeRectangleArea_Response
    std::shared_ptr<custom_interfaces::srv::ComputeRectangleArea_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ComputeRectangleArea_Response_ & other) const
  {
    if (this->area != other.area) {
      return false;
    }
    return true;
  }
  bool operator!=(const ComputeRectangleArea_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ComputeRectangleArea_Response_

// alias to use template instance with default allocator
using ComputeRectangleArea_Response =
  custom_interfaces::srv::ComputeRectangleArea_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custom_interfaces

namespace custom_interfaces
{

namespace srv
{

struct ComputeRectangleArea
{
  using Request = custom_interfaces::srv::ComputeRectangleArea_Request;
  using Response = custom_interfaces::srv::ComputeRectangleArea_Response;
};

}  // namespace srv

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__COMPUTE_RECTANGLE_AREA__STRUCT_HPP_
