// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from semmap_interfaces:msg/PositionHistory.idl
// generated code does not contain a copyright notice

#ifndef SEMMAP_INTERFACES__MSG__DETAIL__POSITION_HISTORY__BUILDER_HPP_
#define SEMMAP_INTERFACES__MSG__DETAIL__POSITION_HISTORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "semmap_interfaces/msg/detail/position_history__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace semmap_interfaces
{

namespace msg
{

namespace builder
{

class Init_PositionHistory_timestamp
{
public:
  explicit Init_PositionHistory_timestamp(::semmap_interfaces::msg::PositionHistory & msg)
  : msg_(msg)
  {}
  ::semmap_interfaces::msg::PositionHistory timestamp(::semmap_interfaces::msg::PositionHistory::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::semmap_interfaces::msg::PositionHistory msg_;
};

class Init_PositionHistory_rotation
{
public:
  explicit Init_PositionHistory_rotation(::semmap_interfaces::msg::PositionHistory & msg)
  : msg_(msg)
  {}
  Init_PositionHistory_timestamp rotation(::semmap_interfaces::msg::PositionHistory::_rotation_type arg)
  {
    msg_.rotation = std::move(arg);
    return Init_PositionHistory_timestamp(msg_);
  }

private:
  ::semmap_interfaces::msg::PositionHistory msg_;
};

class Init_PositionHistory_y
{
public:
  explicit Init_PositionHistory_y(::semmap_interfaces::msg::PositionHistory & msg)
  : msg_(msg)
  {}
  Init_PositionHistory_rotation y(::semmap_interfaces::msg::PositionHistory::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_PositionHistory_rotation(msg_);
  }

private:
  ::semmap_interfaces::msg::PositionHistory msg_;
};

class Init_PositionHistory_x
{
public:
  Init_PositionHistory_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PositionHistory_y x(::semmap_interfaces::msg::PositionHistory::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_PositionHistory_y(msg_);
  }

private:
  ::semmap_interfaces::msg::PositionHistory msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::semmap_interfaces::msg::PositionHistory>()
{
  return semmap_interfaces::msg::builder::Init_PositionHistory_x();
}

}  // namespace semmap_interfaces

#endif  // SEMMAP_INTERFACES__MSG__DETAIL__POSITION_HISTORY__BUILDER_HPP_
