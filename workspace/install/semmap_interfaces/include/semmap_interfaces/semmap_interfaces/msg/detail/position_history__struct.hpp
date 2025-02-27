// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from semmap_interfaces:msg/PositionHistory.idl
// generated code does not contain a copyright notice

#ifndef SEMMAP_INTERFACES__MSG__DETAIL__POSITION_HISTORY__STRUCT_HPP_
#define SEMMAP_INTERFACES__MSG__DETAIL__POSITION_HISTORY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__semmap_interfaces__msg__PositionHistory __attribute__((deprecated))
#else
# define DEPRECATED__semmap_interfaces__msg__PositionHistory __declspec(deprecated)
#endif

namespace semmap_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PositionHistory_
{
  using Type = PositionHistory_<ContainerAllocator>;

  explicit PositionHistory_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit PositionHistory_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _x_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _x_type x;
  using _y_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _y_type y;
  using _rotation_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _rotation_type rotation;
  using _timestamp_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _timestamp_type timestamp;

  // setters for named parameter idiom
  Type & set__x(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__rotation(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->rotation = _arg;
    return *this;
  }
  Type & set__timestamp(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    semmap_interfaces::msg::PositionHistory_<ContainerAllocator> *;
  using ConstRawPtr =
    const semmap_interfaces::msg::PositionHistory_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<semmap_interfaces::msg::PositionHistory_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<semmap_interfaces::msg::PositionHistory_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      semmap_interfaces::msg::PositionHistory_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<semmap_interfaces::msg::PositionHistory_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      semmap_interfaces::msg::PositionHistory_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<semmap_interfaces::msg::PositionHistory_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<semmap_interfaces::msg::PositionHistory_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<semmap_interfaces::msg::PositionHistory_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__semmap_interfaces__msg__PositionHistory
    std::shared_ptr<semmap_interfaces::msg::PositionHistory_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__semmap_interfaces__msg__PositionHistory
    std::shared_ptr<semmap_interfaces::msg::PositionHistory_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PositionHistory_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->rotation != other.rotation) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const PositionHistory_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PositionHistory_

// alias to use template instance with default allocator
using PositionHistory =
  semmap_interfaces::msg::PositionHistory_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace semmap_interfaces

#endif  // SEMMAP_INTERFACES__MSG__DETAIL__POSITION_HISTORY__STRUCT_HPP_
