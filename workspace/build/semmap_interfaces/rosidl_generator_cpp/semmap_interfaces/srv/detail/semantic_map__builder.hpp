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

class Init_SemanticMap_Response_object_elevation
{
public:
  explicit Init_SemanticMap_Response_object_elevation(::semmap_interfaces::srv::SemanticMap_Response & msg)
  : msg_(msg)
  {}
  ::semmap_interfaces::srv::SemanticMap_Response object_elevation(::semmap_interfaces::srv::SemanticMap_Response::_object_elevation_type arg)
  {
    msg_.object_elevation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::semmap_interfaces::srv::SemanticMap_Response msg_;
};

class Init_SemanticMap_Response_object_y
{
public:
  explicit Init_SemanticMap_Response_object_y(::semmap_interfaces::srv::SemanticMap_Response & msg)
  : msg_(msg)
  {}
  Init_SemanticMap_Response_object_elevation object_y(::semmap_interfaces::srv::SemanticMap_Response::_object_y_type arg)
  {
    msg_.object_y = std::move(arg);
    return Init_SemanticMap_Response_object_elevation(msg_);
  }

private:
  ::semmap_interfaces::srv::SemanticMap_Response msg_;
};

class Init_SemanticMap_Response_object_x
{
public:
  explicit Init_SemanticMap_Response_object_x(::semmap_interfaces::srv::SemanticMap_Response & msg)
  : msg_(msg)
  {}
  Init_SemanticMap_Response_object_y object_x(::semmap_interfaces::srv::SemanticMap_Response::_object_x_type arg)
  {
    msg_.object_x = std::move(arg);
    return Init_SemanticMap_Response_object_y(msg_);
  }

private:
  ::semmap_interfaces::srv::SemanticMap_Response msg_;
};

class Init_SemanticMap_Response_object_tags
{
public:
  explicit Init_SemanticMap_Response_object_tags(::semmap_interfaces::srv::SemanticMap_Response & msg)
  : msg_(msg)
  {}
  Init_SemanticMap_Response_object_x object_tags(::semmap_interfaces::srv::SemanticMap_Response::_object_tags_type arg)
  {
    msg_.object_tags = std::move(arg);
    return Init_SemanticMap_Response_object_x(msg_);
  }

private:
  ::semmap_interfaces::srv::SemanticMap_Response msg_;
};

class Init_SemanticMap_Response_negative_y
{
public:
  explicit Init_SemanticMap_Response_negative_y(::semmap_interfaces::srv::SemanticMap_Response & msg)
  : msg_(msg)
  {}
  Init_SemanticMap_Response_object_tags negative_y(::semmap_interfaces::srv::SemanticMap_Response::_negative_y_type arg)
  {
    msg_.negative_y = std::move(arg);
    return Init_SemanticMap_Response_object_tags(msg_);
  }

private:
  ::semmap_interfaces::srv::SemanticMap_Response msg_;
};

class Init_SemanticMap_Response_positive_and0_y
{
public:
  explicit Init_SemanticMap_Response_positive_and0_y(::semmap_interfaces::srv::SemanticMap_Response & msg)
  : msg_(msg)
  {}
  Init_SemanticMap_Response_negative_y positive_and0_y(::semmap_interfaces::srv::SemanticMap_Response::_positive_and0_y_type arg)
  {
    msg_.positive_and0_y = std::move(arg);
    return Init_SemanticMap_Response_negative_y(msg_);
  }

private:
  ::semmap_interfaces::srv::SemanticMap_Response msg_;
};

class Init_SemanticMap_Response_negative_x
{
public:
  explicit Init_SemanticMap_Response_negative_x(::semmap_interfaces::srv::SemanticMap_Response & msg)
  : msg_(msg)
  {}
  Init_SemanticMap_Response_positive_and0_y negative_x(::semmap_interfaces::srv::SemanticMap_Response::_negative_x_type arg)
  {
    msg_.negative_x = std::move(arg);
    return Init_SemanticMap_Response_positive_and0_y(msg_);
  }

private:
  ::semmap_interfaces::srv::SemanticMap_Response msg_;
};

class Init_SemanticMap_Response_positive_and0_x
{
public:
  Init_SemanticMap_Response_positive_and0_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SemanticMap_Response_negative_x positive_and0_x(::semmap_interfaces::srv::SemanticMap_Response::_positive_and0_x_type arg)
  {
    msg_.positive_and0_x = std::move(arg);
    return Init_SemanticMap_Response_negative_x(msg_);
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
  return semmap_interfaces::srv::builder::Init_SemanticMap_Response_positive_and0_x();
}

}  // namespace semmap_interfaces

#endif  // SEMMAP_INTERFACES__SRV__DETAIL__SEMANTIC_MAP__BUILDER_HPP_
