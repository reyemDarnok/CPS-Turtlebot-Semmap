// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from semmap_interfaces:msg/EmergencyStop.idl
// generated code does not contain a copyright notice

#ifndef SEMMAP_INTERFACES__MSG__DETAIL__EMERGENCY_STOP__STRUCT_HPP_
#define SEMMAP_INTERFACES__MSG__DETAIL__EMERGENCY_STOP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__semmap_interfaces__msg__EmergencyStop __attribute__((deprecated))
#else
# define DEPRECATED__semmap_interfaces__msg__EmergencyStop __declspec(deprecated)
#endif

namespace semmap_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EmergencyStop_
{
  using Type = EmergencyStop_<ContainerAllocator>;

  explicit EmergencyStop_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cause = 0;
      this->solvable_by_backup = false;
    }
  }

  explicit EmergencyStop_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cause = 0;
      this->solvable_by_backup = false;
    }
  }

  // field types and members
  using _cause_type =
    uint8_t;
  _cause_type cause;
  using _solvable_by_backup_type =
    bool;
  _solvable_by_backup_type solvable_by_backup;

  // setters for named parameter idiom
  Type & set__cause(
    const uint8_t & _arg)
  {
    this->cause = _arg;
    return *this;
  }
  Type & set__solvable_by_backup(
    const bool & _arg)
  {
    this->solvable_by_backup = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    semmap_interfaces::msg::EmergencyStop_<ContainerAllocator> *;
  using ConstRawPtr =
    const semmap_interfaces::msg::EmergencyStop_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<semmap_interfaces::msg::EmergencyStop_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<semmap_interfaces::msg::EmergencyStop_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      semmap_interfaces::msg::EmergencyStop_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<semmap_interfaces::msg::EmergencyStop_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      semmap_interfaces::msg::EmergencyStop_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<semmap_interfaces::msg::EmergencyStop_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<semmap_interfaces::msg::EmergencyStop_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<semmap_interfaces::msg::EmergencyStop_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__semmap_interfaces__msg__EmergencyStop
    std::shared_ptr<semmap_interfaces::msg::EmergencyStop_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__semmap_interfaces__msg__EmergencyStop
    std::shared_ptr<semmap_interfaces::msg::EmergencyStop_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EmergencyStop_ & other) const
  {
    if (this->cause != other.cause) {
      return false;
    }
    if (this->solvable_by_backup != other.solvable_by_backup) {
      return false;
    }
    return true;
  }
  bool operator!=(const EmergencyStop_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EmergencyStop_

// alias to use template instance with default allocator
using EmergencyStop =
  semmap_interfaces::msg::EmergencyStop_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace semmap_interfaces

#endif  // SEMMAP_INTERFACES__MSG__DETAIL__EMERGENCY_STOP__STRUCT_HPP_
