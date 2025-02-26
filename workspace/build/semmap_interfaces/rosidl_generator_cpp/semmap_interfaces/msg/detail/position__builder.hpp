// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from semmap_interfaces:msg/Position.idl
// generated code does not contain a copyright notice

#ifndef SEMMAP_INTERFACES__MSG__DETAIL__POSITION__BUILDER_HPP_
#define SEMMAP_INTERFACES__MSG__DETAIL__POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "semmap_interfaces/msg/detail/position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace semmap_interfaces
{

namespace msg
{

namespace builder
{

class Init_Position_timestamp
{
public:
  explicit Init_Position_timestamp(::semmap_interfaces::msg::Position & msg)
  : msg_(msg)
  {}
  ::semmap_interfaces::msg::Position timestamp(::semmap_interfaces::msg::Position::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::semmap_interfaces::msg::Position msg_;
};

class Init_Position_rotation
{
public:
  explicit Init_Position_rotation(::semmap_interfaces::msg::Position & msg)
  : msg_(msg)
  {}
  Init_Position_timestamp rotation(::semmap_interfaces::msg::Position::_rotation_type arg)
  {
    msg_.rotation = std::move(arg);
    return Init_Position_timestamp(msg_);
  }

private:
  ::semmap_interfaces::msg::Position msg_;
};

class Init_Position_y
{
public:
  explicit Init_Position_y(::semmap_interfaces::msg::Position & msg)
  : msg_(msg)
  {}
  Init_Position_rotation y(::semmap_interfaces::msg::Position::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Position_rotation(msg_);
  }

private:
  ::semmap_interfaces::msg::Position msg_;
};

class Init_Position_x
{
public:
  Init_Position_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Position_y x(::semmap_interfaces::msg::Position::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Position_y(msg_);
  }

private:
  ::semmap_interfaces::msg::Position msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::semmap_interfaces::msg::Position>()
{
  return semmap_interfaces::msg::builder::Init_Position_x();
}

}  // namespace semmap_interfaces

#endif  // SEMMAP_INTERFACES__MSG__DETAIL__POSITION__BUILDER_HPP_
