// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from semmap_interfaces:msg/InvalidateMap.idl
// generated code does not contain a copyright notice

#ifndef SEMMAP_INTERFACES__MSG__DETAIL__INVALIDATE_MAP__STRUCT_HPP_
#define SEMMAP_INTERFACES__MSG__DETAIL__INVALIDATE_MAP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__semmap_interfaces__msg__InvalidateMap __attribute__((deprecated))
#else
# define DEPRECATED__semmap_interfaces__msg__InvalidateMap __declspec(deprecated)
#endif

namespace semmap_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct InvalidateMap_
{
  using Type = InvalidateMap_<ContainerAllocator>;

  explicit InvalidateMap_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reason = 0;
    }
  }

  explicit InvalidateMap_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reason = 0;
    }
  }

  // field types and members
  using _reason_type =
    uint8_t;
  _reason_type reason;

  // setters for named parameter idiom
  Type & set__reason(
    const uint8_t & _arg)
  {
    this->reason = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    semmap_interfaces::msg::InvalidateMap_<ContainerAllocator> *;
  using ConstRawPtr =
    const semmap_interfaces::msg::InvalidateMap_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<semmap_interfaces::msg::InvalidateMap_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<semmap_interfaces::msg::InvalidateMap_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      semmap_interfaces::msg::InvalidateMap_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<semmap_interfaces::msg::InvalidateMap_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      semmap_interfaces::msg::InvalidateMap_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<semmap_interfaces::msg::InvalidateMap_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<semmap_interfaces::msg::InvalidateMap_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<semmap_interfaces::msg::InvalidateMap_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__semmap_interfaces__msg__InvalidateMap
    std::shared_ptr<semmap_interfaces::msg::InvalidateMap_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__semmap_interfaces__msg__InvalidateMap
    std::shared_ptr<semmap_interfaces::msg::InvalidateMap_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InvalidateMap_ & other) const
  {
    if (this->reason != other.reason) {
      return false;
    }
    return true;
  }
  bool operator!=(const InvalidateMap_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InvalidateMap_

// alias to use template instance with default allocator
using InvalidateMap =
  semmap_interfaces::msg::InvalidateMap_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace semmap_interfaces

#endif  // SEMMAP_INTERFACES__MSG__DETAIL__INVALIDATE_MAP__STRUCT_HPP_
