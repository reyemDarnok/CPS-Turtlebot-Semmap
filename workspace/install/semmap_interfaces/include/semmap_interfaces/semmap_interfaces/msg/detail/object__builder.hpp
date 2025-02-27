// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from semmap_interfaces:msg/Object.idl
// generated code does not contain a copyright notice

#ifndef SEMMAP_INTERFACES__MSG__DETAIL__OBJECT__BUILDER_HPP_
#define SEMMAP_INTERFACES__MSG__DETAIL__OBJECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "semmap_interfaces/msg/detail/object__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace semmap_interfaces
{

namespace msg
{

namespace builder
{

class Init_Object_tag
{
public:
  explicit Init_Object_tag(::semmap_interfaces::msg::Object & msg)
  : msg_(msg)
  {}
  ::semmap_interfaces::msg::Object tag(::semmap_interfaces::msg::Object::_tag_type arg)
  {
    msg_.tag = std::move(arg);
    return std::move(msg_);
  }

private:
  ::semmap_interfaces::msg::Object msg_;
};

class Init_Object_elevation
{
public:
  explicit Init_Object_elevation(::semmap_interfaces::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_tag elevation(::semmap_interfaces::msg::Object::_elevation_type arg)
  {
    msg_.elevation = std::move(arg);
    return Init_Object_tag(msg_);
  }

private:
  ::semmap_interfaces::msg::Object msg_;
};

class Init_Object_angle
{
public:
  explicit Init_Object_angle(::semmap_interfaces::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_elevation angle(::semmap_interfaces::msg::Object::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return Init_Object_elevation(msg_);
  }

private:
  ::semmap_interfaces::msg::Object msg_;
};

class Init_Object_distance
{
public:
  Init_Object_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Object_angle distance(::semmap_interfaces::msg::Object::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return Init_Object_angle(msg_);
  }

private:
  ::semmap_interfaces::msg::Object msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::semmap_interfaces::msg::Object>()
{
  return semmap_interfaces::msg::builder::Init_Object_distance();
}

}  // namespace semmap_interfaces

#endif  // SEMMAP_INTERFACES__MSG__DETAIL__OBJECT__BUILDER_HPP_
