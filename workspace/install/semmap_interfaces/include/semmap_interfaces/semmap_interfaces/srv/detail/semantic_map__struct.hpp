// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from semmap_interfaces:srv/SemanticMap.idl
// generated code does not contain a copyright notice

#ifndef SEMMAP_INTERFACES__SRV__DETAIL__SEMANTIC_MAP__STRUCT_HPP_
#define SEMMAP_INTERFACES__SRV__DETAIL__SEMANTIC_MAP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__semmap_interfaces__srv__SemanticMap_Request __attribute__((deprecated))
#else
# define DEPRECATED__semmap_interfaces__srv__SemanticMap_Request __declspec(deprecated)
#endif

namespace semmap_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SemanticMap_Request_
{
  using Type = SemanticMap_Request_<ContainerAllocator>;

  explicit SemanticMap_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->request_priority = 0;
    }
  }

  explicit SemanticMap_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->request_priority = 0;
    }
  }

  // field types and members
  using _request_priority_type =
    uint8_t;
  _request_priority_type request_priority;

  // setters for named parameter idiom
  Type & set__request_priority(
    const uint8_t & _arg)
  {
    this->request_priority = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    semmap_interfaces::srv::SemanticMap_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const semmap_interfaces::srv::SemanticMap_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<semmap_interfaces::srv::SemanticMap_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<semmap_interfaces::srv::SemanticMap_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      semmap_interfaces::srv::SemanticMap_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<semmap_interfaces::srv::SemanticMap_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      semmap_interfaces::srv::SemanticMap_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<semmap_interfaces::srv::SemanticMap_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<semmap_interfaces::srv::SemanticMap_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<semmap_interfaces::srv::SemanticMap_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__semmap_interfaces__srv__SemanticMap_Request
    std::shared_ptr<semmap_interfaces::srv::SemanticMap_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__semmap_interfaces__srv__SemanticMap_Request
    std::shared_ptr<semmap_interfaces::srv::SemanticMap_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SemanticMap_Request_ & other) const
  {
    if (this->request_priority != other.request_priority) {
      return false;
    }
    return true;
  }
  bool operator!=(const SemanticMap_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SemanticMap_Request_

// alias to use template instance with default allocator
using SemanticMap_Request =
  semmap_interfaces::srv::SemanticMap_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace semmap_interfaces


#ifndef _WIN32
# define DEPRECATED__semmap_interfaces__srv__SemanticMap_Response __attribute__((deprecated))
#else
# define DEPRECATED__semmap_interfaces__srv__SemanticMap_Response __declspec(deprecated)
#endif

namespace semmap_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SemanticMap_Response_
{
  using Type = SemanticMap_Response_<ContainerAllocator>;

  explicit SemanticMap_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit SemanticMap_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  using _object_tags_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _object_tags_type object_tags;
  using _object_x_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _object_x_type object_x;
  using _object_y_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _object_y_type object_y;
  using _object_elevation_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _object_elevation_type object_elevation;

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
  Type & set__object_tags(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->object_tags = _arg;
    return *this;
  }
  Type & set__object_x(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->object_x = _arg;
    return *this;
  }
  Type & set__object_y(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->object_y = _arg;
    return *this;
  }
  Type & set__object_elevation(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->object_elevation = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    semmap_interfaces::srv::SemanticMap_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const semmap_interfaces::srv::SemanticMap_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<semmap_interfaces::srv::SemanticMap_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<semmap_interfaces::srv::SemanticMap_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      semmap_interfaces::srv::SemanticMap_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<semmap_interfaces::srv::SemanticMap_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      semmap_interfaces::srv::SemanticMap_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<semmap_interfaces::srv::SemanticMap_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<semmap_interfaces::srv::SemanticMap_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<semmap_interfaces::srv::SemanticMap_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__semmap_interfaces__srv__SemanticMap_Response
    std::shared_ptr<semmap_interfaces::srv::SemanticMap_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__semmap_interfaces__srv__SemanticMap_Response
    std::shared_ptr<semmap_interfaces::srv::SemanticMap_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SemanticMap_Response_ & other) const
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
    if (this->object_tags != other.object_tags) {
      return false;
    }
    if (this->object_x != other.object_x) {
      return false;
    }
    if (this->object_y != other.object_y) {
      return false;
    }
    if (this->object_elevation != other.object_elevation) {
      return false;
    }
    return true;
  }
  bool operator!=(const SemanticMap_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SemanticMap_Response_

// alias to use template instance with default allocator
using SemanticMap_Response =
  semmap_interfaces::srv::SemanticMap_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace semmap_interfaces

namespace semmap_interfaces
{

namespace srv
{

struct SemanticMap
{
  using Request = semmap_interfaces::srv::SemanticMap_Request;
  using Response = semmap_interfaces::srv::SemanticMap_Response;
};

}  // namespace srv

}  // namespace semmap_interfaces

#endif  // SEMMAP_INTERFACES__SRV__DETAIL__SEMANTIC_MAP__STRUCT_HPP_
