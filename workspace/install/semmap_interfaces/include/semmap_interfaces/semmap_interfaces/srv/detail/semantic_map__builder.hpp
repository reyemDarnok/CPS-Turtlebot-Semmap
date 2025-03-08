// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from semmap_interfaces:srv/SemanticMap.idl
// generated code does not contain a copyright notice

#ifndef SEMMAP_INTERFACES__SRV__DETAIL__SEMANTIC_MAP__BUILDER_HPP_
#define SEMMAP_INTERFACES__SRV__DETAIL__SEMANTIC_MAP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "semmap_interfaces/srv/detail/semantic_map__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace semmap_interfaces
{

namespace srv
{

namespace builder
{

class Init_SemanticMap_Request_request_priority
{
public:
  Init_SemanticMap_Request_request_priority()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::semmap_interfaces::srv::SemanticMap_Request request_priority(::semmap_interfaces::srv::SemanticMap_Request::_request_priority_type arg)
  {
    msg_.request_priority = std::move(arg);
    return std::move(msg_);
  }

private:
  ::semmap_interfaces::srv::SemanticMap_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::semmap_interfaces::srv::SemanticMap_Request>()
{
  return semmap_interfaces::srv::builder::Init_SemanticMap_Request_request_priority();
}

}  // namespace semmap_interfaces


namespace semmap_interfaces
{

namespace srv
{

namespace builder
{

class Init_SemanticMap_Response_tag
{
public:
  explicit Init_SemanticMap_Response_tag(::semmap_interfaces::srv::SemanticMap_Response & msg)
  : msg_(msg)
  {}
  ::semmap_interfaces::srv::SemanticMap_Response tag(::semmap_interfaces::srv::SemanticMap_Response::_tag_type arg)
  {
    msg_.tag = std::move(arg);
    return std::move(msg_);
  }

private:
  ::semmap_interfaces::srv::SemanticMap_Response msg_;
};

class Init_SemanticMap_Response_elevation
{
public:
  explicit Init_SemanticMap_Response_elevation(::semmap_interfaces::srv::SemanticMap_Response & msg)
  : msg_(msg)
  {}
  Init_SemanticMap_Response_tag elevation(::semmap_interfaces::srv::SemanticMap_Response::_elevation_type arg)
  {
    msg_.elevation = std::move(arg);
    return Init_SemanticMap_Response_tag(msg_);
  }

private:
  ::semmap_interfaces::srv::SemanticMap_Response msg_;
};

class Init_SemanticMap_Response_y
{
public:
  explicit Init_SemanticMap_Response_y(::semmap_interfaces::srv::SemanticMap_Response & msg)
  : msg_(msg)
  {}
  Init_SemanticMap_Response_elevation y(::semmap_interfaces::srv::SemanticMap_Response::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_SemanticMap_Response_elevation(msg_);
  }

private:
  ::semmap_interfaces::srv::SemanticMap_Response msg_;
};

class Init_SemanticMap_Response_x
{
public:
  Init_SemanticMap_Response_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SemanticMap_Response_y x(::semmap_interfaces::srv::SemanticMap_Response::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_SemanticMap_Response_y(msg_);
  }

private:
  ::semmap_interfaces::srv::SemanticMap_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::semmap_interfaces::srv::SemanticMap_Response>()
{
  return semmap_interfaces::srv::builder::Init_SemanticMap_Response_x();
}

}  // namespace semmap_interfaces

#endif  // SEMMAP_INTERFACES__SRV__DETAIL__SEMANTIC_MAP__BUILDER_HPP_
