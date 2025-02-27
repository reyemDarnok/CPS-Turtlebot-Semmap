// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from semmap_interfaces:msg/SlamMap.idl
// generated code does not contain a copyright notice

#ifndef SEMMAP_INTERFACES__MSG__DETAIL__SLAM_MAP__STRUCT_HPP_
#define SEMMAP_INTERFACES__MSG__DETAIL__SLAM_MAP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__semmap_interfaces__msg__SlamMap __attribute__((deprecated))
#else
# define DEPRECATED__semmap_interfaces__msg__SlamMap __declspec(deprecated)
#endif

namespace semmap_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SlamMap_
{
  using Type = SlamMap_<ContainerAllocator>;

  explicit SlamMap_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit SlamMap_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _positive_and0_x_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _positive_and0_x_type positive_and0_x;
  using _negative_x_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _negative_x_type negative_x;
  using _positive_and0_y_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _positive_and0_y_type positive_and0_y;
  using _negative_y_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _negative_y_type negative_y;

  // setters for named parameter idiom
  Type & set__positive_and0_x(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->positive_and0_x = _arg;
    return *this;
  }
  Type & set__negative_x(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->negative_x = _arg;
    return *this;
  }
  Type & set__positive_and0_y(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->positive_and0_y = _arg;
    return *this;
  }
  Type & set__negative_y(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->negative_y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    semmap_interfaces::msg::SlamMap_<ContainerAllocator> *;
  using ConstRawPtr =
    const semmap_interfaces::msg::SlamMap_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<semmap_interfaces::msg::SlamMap_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<semmap_interfaces::msg::SlamMap_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      semmap_interfaces::msg::SlamMap_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<semmap_interfaces::msg::SlamMap_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      semmap_interfaces::msg::SlamMap_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<semmap_interfaces::msg::SlamMap_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<semmap_interfaces::msg::SlamMap_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<semmap_interfaces::msg::SlamMap_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__semmap_interfaces__msg__SlamMap
    std::shared_ptr<semmap_interfaces::msg::SlamMap_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__semmap_interfaces__msg__SlamMap
    std::shared_ptr<semmap_interfaces::msg::SlamMap_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SlamMap_ & other) const
  {
    if (this->positive_and0_x != other.positive_and0_x) {
      return false;
    }
    if (this->negative_x != other.negative_x) {
      return false;
    }
    if (this->positive_and0_y != other.positive_and0_y) {
      return false;
    }
    if (this->negative_y != other.negative_y) {
      return false;
    }
    return true;
  }
  bool operator!=(const SlamMap_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SlamMap_

// alias to use template instance with default allocator
using SlamMap =
  semmap_interfaces::msg::SlamMap_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace semmap_interfaces

#endif  // SEMMAP_INTERFACES__MSG__DETAIL__SLAM_MAP__STRUCT_HPP_
