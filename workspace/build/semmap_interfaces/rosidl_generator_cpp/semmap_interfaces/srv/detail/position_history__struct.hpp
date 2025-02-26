// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from semmap_interfaces:srv/PositionHistory.idl
// generated code does not contain a copyright notice

#ifndef SEMMAP_INTERFACES__SRV__DETAIL__POSITION_HISTORY__STRUCT_HPP_
#define SEMMAP_INTERFACES__SRV__DETAIL__POSITION_HISTORY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__semmap_interfaces__srv__PositionHistory_Request __attribute__((deprecated))
#else
# define DEPRECATED__semmap_interfaces__srv__PositionHistory_Request __declspec(deprecated)
#endif

namespace semmap_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PositionHistory_Request_
{
  using Type = PositionHistory_Request_<ContainerAllocator>;

  explicit PositionHistory_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit PositionHistory_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    semmap_interfaces::srv::PositionHistory_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const semmap_interfaces::srv::PositionHistory_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<semmap_interfaces::srv::PositionHistory_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<semmap_interfaces::srv::PositionHistory_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      semmap_interfaces::srv::PositionHistory_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<semmap_interfaces::srv::PositionHistory_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      semmap_interfaces::srv::PositionHistory_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<semmap_interfaces::srv::PositionHistory_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<semmap_interfaces::srv::PositionHistory_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<semmap_interfaces::srv::PositionHistory_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__semmap_interfaces__srv__PositionHistory_Request
    std::shared_ptr<semmap_interfaces::srv::PositionHistory_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__semmap_interfaces__srv__PositionHistory_Request
    std::shared_ptr<semmap_interfaces::srv::PositionHistory_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PositionHistory_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const PositionHistory_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PositionHistory_Request_

// alias to use template instance with default allocator
using PositionHistory_Request =
  semmap_interfaces::srv::PositionHistory_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace semmap_interfaces


#ifndef _WIN32
# define DEPRECATED__semmap_interfaces__srv__PositionHistory_Response __attribute__((deprecated))
#else
# define DEPRECATED__semmap_interfaces__srv__PositionHistory_Response __declspec(deprecated)
#endif

namespace semmap_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PositionHistory_Response_
{
  using Type = PositionHistory_Response_<ContainerAllocator>;

  explicit PositionHistory_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit PositionHistory_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    semmap_interfaces::srv::PositionHistory_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const semmap_interfaces::srv::PositionHistory_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<semmap_interfaces::srv::PositionHistory_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<semmap_interfaces::srv::PositionHistory_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      semmap_interfaces::srv::PositionHistory_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<semmap_interfaces::srv::PositionHistory_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      semmap_interfaces::srv::PositionHistory_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<semmap_interfaces::srv::PositionHistory_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<semmap_interfaces::srv::PositionHistory_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<semmap_interfaces::srv::PositionHistory_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__semmap_interfaces__srv__PositionHistory_Response
    std::shared_ptr<semmap_interfaces::srv::PositionHistory_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__semmap_interfaces__srv__PositionHistory_Response
    std::shared_ptr<semmap_interfaces::srv::PositionHistory_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PositionHistory_Response_ & other) const
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
  bool operator!=(const PositionHistory_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PositionHistory_Response_

// alias to use template instance with default allocator
using PositionHistory_Response =
  semmap_interfaces::srv::PositionHistory_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace semmap_interfaces

namespace semmap_interfaces
{

namespace srv
{

struct PositionHistory
{
  using Request = semmap_interfaces::srv::PositionHistory_Request;
  using Response = semmap_interfaces::srv::PositionHistory_Response;
};

}  // namespace srv

}  // namespace semmap_interfaces

#endif  // SEMMAP_INTERFACES__SRV__DETAIL__POSITION_HISTORY__STRUCT_HPP_
