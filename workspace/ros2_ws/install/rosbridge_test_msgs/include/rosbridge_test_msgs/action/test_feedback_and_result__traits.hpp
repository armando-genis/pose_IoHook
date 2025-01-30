// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rosbridge_test_msgs:action/TestFeedbackAndResult.idl
// generated code does not contain a copyright notice

#ifndef ROSBRIDGE_TEST_MSGS__ACTION__TEST_FEEDBACK_AND_RESULT__TRAITS_HPP_
#define ROSBRIDGE_TEST_MSGS__ACTION__TEST_FEEDBACK_AND_RESULT__TRAITS_HPP_

#include "rosbridge_test_msgs/action/test_feedback_and_result__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosbridge_test_msgs::action::TestFeedbackAndResult_Goal>()
{
  return "rosbridge_test_msgs::action::TestFeedbackAndResult_Goal";
}

template<>
struct has_fixed_size<rosbridge_test_msgs::action::TestFeedbackAndResult_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rosbridge_test_msgs::action::TestFeedbackAndResult_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rosbridge_test_msgs::action::TestFeedbackAndResult_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosbridge_test_msgs::action::TestFeedbackAndResult_Result>()
{
  return "rosbridge_test_msgs::action::TestFeedbackAndResult_Result";
}

template<>
struct has_fixed_size<rosbridge_test_msgs::action::TestFeedbackAndResult_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rosbridge_test_msgs::action::TestFeedbackAndResult_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rosbridge_test_msgs::action::TestFeedbackAndResult_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosbridge_test_msgs::action::TestFeedbackAndResult_Feedback>()
{
  return "rosbridge_test_msgs::action::TestFeedbackAndResult_Feedback";
}

template<>
struct has_fixed_size<rosbridge_test_msgs::action::TestFeedbackAndResult_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rosbridge_test_msgs::action::TestFeedbackAndResult_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rosbridge_test_msgs::action::TestFeedbackAndResult_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/uuid__traits.hpp"
// Member 'goal'
#include "rosbridge_test_msgs/action/test_feedback_and_result__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosbridge_test_msgs::action::TestFeedbackAndResult_SendGoal_Request>()
{
  return "rosbridge_test_msgs::action::TestFeedbackAndResult_SendGoal_Request";
}

template<>
struct has_fixed_size<rosbridge_test_msgs::action::TestFeedbackAndResult_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<rosbridge_test_msgs::action::TestFeedbackAndResult_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<rosbridge_test_msgs::action::TestFeedbackAndResult_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<rosbridge_test_msgs::action::TestFeedbackAndResult_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<rosbridge_test_msgs::action::TestFeedbackAndResult_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosbridge_test_msgs::action::TestFeedbackAndResult_SendGoal_Response>()
{
  return "rosbridge_test_msgs::action::TestFeedbackAndResult_SendGoal_Response";
}

template<>
struct has_fixed_size<rosbridge_test_msgs::action::TestFeedbackAndResult_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<rosbridge_test_msgs::action::TestFeedbackAndResult_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<rosbridge_test_msgs::action::TestFeedbackAndResult_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosbridge_test_msgs::action::TestFeedbackAndResult_SendGoal>()
{
  return "rosbridge_test_msgs::action::TestFeedbackAndResult_SendGoal";
}

template<>
struct has_fixed_size<rosbridge_test_msgs::action::TestFeedbackAndResult_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<rosbridge_test_msgs::action::TestFeedbackAndResult_SendGoal_Request>::value &&
    has_fixed_size<rosbridge_test_msgs::action::TestFeedbackAndResult_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<rosbridge_test_msgs::action::TestFeedbackAndResult_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<rosbridge_test_msgs::action::TestFeedbackAndResult_SendGoal_Request>::value &&
    has_bounded_size<rosbridge_test_msgs::action::TestFeedbackAndResult_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<rosbridge_test_msgs::action::TestFeedbackAndResult_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<rosbridge_test_msgs::action::TestFeedbackAndResult_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rosbridge_test_msgs::action::TestFeedbackAndResult_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosbridge_test_msgs::action::TestFeedbackAndResult_GetResult_Request>()
{
  return "rosbridge_test_msgs::action::TestFeedbackAndResult_GetResult_Request";
}

template<>
struct has_fixed_size<rosbridge_test_msgs::action::TestFeedbackAndResult_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<rosbridge_test_msgs::action::TestFeedbackAndResult_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<rosbridge_test_msgs::action::TestFeedbackAndResult_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "rosbridge_test_msgs/action/test_feedback_and_result__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosbridge_test_msgs::action::TestFeedbackAndResult_GetResult_Response>()
{
  return "rosbridge_test_msgs::action::TestFeedbackAndResult_GetResult_Response";
}

template<>
struct has_fixed_size<rosbridge_test_msgs::action::TestFeedbackAndResult_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<rosbridge_test_msgs::action::TestFeedbackAndResult_Result>::value> {};

template<>
struct has_bounded_size<rosbridge_test_msgs::action::TestFeedbackAndResult_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<rosbridge_test_msgs::action::TestFeedbackAndResult_Result>::value> {};

template<>
struct is_message<rosbridge_test_msgs::action::TestFeedbackAndResult_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosbridge_test_msgs::action::TestFeedbackAndResult_GetResult>()
{
  return "rosbridge_test_msgs::action::TestFeedbackAndResult_GetResult";
}

template<>
struct has_fixed_size<rosbridge_test_msgs::action::TestFeedbackAndResult_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<rosbridge_test_msgs::action::TestFeedbackAndResult_GetResult_Request>::value &&
    has_fixed_size<rosbridge_test_msgs::action::TestFeedbackAndResult_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<rosbridge_test_msgs::action::TestFeedbackAndResult_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<rosbridge_test_msgs::action::TestFeedbackAndResult_GetResult_Request>::value &&
    has_bounded_size<rosbridge_test_msgs::action::TestFeedbackAndResult_GetResult_Response>::value
  >
{
};

template<>
struct is_service<rosbridge_test_msgs::action::TestFeedbackAndResult_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<rosbridge_test_msgs::action::TestFeedbackAndResult_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rosbridge_test_msgs::action::TestFeedbackAndResult_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "rosbridge_test_msgs/action/test_feedback_and_result__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosbridge_test_msgs::action::TestFeedbackAndResult_FeedbackMessage>()
{
  return "rosbridge_test_msgs::action::TestFeedbackAndResult_FeedbackMessage";
}

template<>
struct has_fixed_size<rosbridge_test_msgs::action::TestFeedbackAndResult_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<rosbridge_test_msgs::action::TestFeedbackAndResult_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<rosbridge_test_msgs::action::TestFeedbackAndResult_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<rosbridge_test_msgs::action::TestFeedbackAndResult_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<rosbridge_test_msgs::action::TestFeedbackAndResult_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<rosbridge_test_msgs::action::TestFeedbackAndResult>
  : std::true_type
{
};

template<>
struct is_action_goal<rosbridge_test_msgs::action::TestFeedbackAndResult_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<rosbridge_test_msgs::action::TestFeedbackAndResult_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<rosbridge_test_msgs::action::TestFeedbackAndResult_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // ROSBRIDGE_TEST_MSGS__ACTION__TEST_FEEDBACK_AND_RESULT__TRAITS_HPP_
