// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from semmap_interfaces:msg/Location.idl
// generated code does not contain a copyright notice

#ifndef SEMMAP_INTERFACES__MSG__DETAIL__LOCATION__BUILDER_HPP_
#define SEMMAP_INTERFACES__MSG__DETAIL__LOCATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "semmap_interfaces/msg/detail/location__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace semmap_interfaces
{

namespace msg
{

namespace builder
{

class Init_Location_y
{
public:
  explicit Init_Location_y(::semmap_interfaces::msg::Location & msg)
  : msg_(msg)
  {}
  ::semmap_interfaces::msg::Location y(::semmap_interfaces::msg::Location::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::semmap_interfaces::msg::Location msg_;
};

class Init_Location_x
{
public:
  explicit Init_Location_x(::semmap_interfaces::msg::Location & msg)
  : msg_(msg)
  {}
  Init_Location_y x(::semmap_interfaces::msg::Location::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Location_y(msg_);
  }

private:
  ::semmap_interfaces::msg::Location msg_;
};

class Init_Location_orientation
{
public:
  Init_Location_orientation()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Location_x orientation(::semmap_interfaces::msg::Location::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_Location_x(msg_);
  }

private:
  ::semmap_interfaces::msg::Location msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::semmap_interfaces::msg::Location>()
{
  return semmap_interfaces::msg::builder::Init_Location_orientation();
}

}  // namespace semmap_interfaces

#endif  // SEMMAP_INTERFACES__MSG__DETAIL__LOCATION__BUILDER_HPP_
