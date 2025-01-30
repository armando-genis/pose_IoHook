// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rosbridge_test_msgs:action/TestMultipleGoalFields.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rosbridge_test_msgs/action/test_multiple_goal_fields__rosidl_typesupport_introspection_c.h"
#include "rosbridge_test_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rosbridge_test_msgs/action/test_multiple_goal_fields__functions.h"
#include "rosbridge_test_msgs/action/test_multiple_goal_fields__struct.h"


// Include directives for member types
// Member `string`
#include "rosidl_generator_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TestMultipleGoalFields_Goal__rosidl_typesupport_introspection_c__TestMultipleGoalFields_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rosbridge_test_msgs__action__TestMultipleGoalFields_Goal__init(message_memory);
}

void TestMultipleGoalFields_Goal__rosidl_typesupport_introspection_c__TestMultipleGoalFields_Goal_fini_function(void * message_memory)
{
  rosbridge_test_msgs__action__TestMultipleGoalFields_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TestMultipleGoalFields_Goal__rosidl_typesupport_introspection_c__TestMultipleGoalFields_Goal_message_member_array[4] = {
  {
    "int_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosbridge_test_msgs__action__TestMultipleGoalFields_Goal, int_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "float_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosbridge_test_msgs__action__TestMultipleGoalFields_Goal, float_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "string",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosbridge_test_msgs__action__TestMultipleGoalFields_Goal, string),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bool_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosbridge_test_msgs__action__TestMultipleGoalFields_Goal, bool_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TestMultipleGoalFields_Goal__rosidl_typesupport_introspection_c__TestMultipleGoalFields_Goal_message_members = {
  "rosbridge_test_msgs__action",  // message namespace
  "TestMultipleGoalFields_Goal",  // message name
  4,  // number of fields
  sizeof(rosbridge_test_msgs__action__TestMultipleGoalFields_Goal),
  TestMultipleGoalFields_Goal__rosidl_typesupport_introspection_c__TestMultipleGoalFields_Goal_message_member_array,  // message members
  TestMultipleGoalFields_Goal__rosidl_typesupport_introspection_c__TestMultipleGoalFields_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  TestMultipleGoalFields_Goal__rosidl_typesupport_introspection_c__TestMultipleGoalFields_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TestMultipleGoalFields_Goal__rosidl_typesupport_introspection_c__TestMultipleGoalFields_Goal_message_type_support_handle = {
  0,
  &TestMultipleGoalFields_Goal__rosidl_typesupport_introspection_c__TestMultipleGoalFields_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rosbridge_test_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosbridge_test_msgs, action, TestMultipleGoalFields_Goal)() {
  if (!TestMultipleGoalFields_Goal__rosidl_typesupport_introspection_c__TestMultipleGoalFields_Goal_message_type_support_handle.typesupport_identifier) {
    TestMultipleGoalFields_Goal__rosidl_typesupport_introspection_c__TestMultipleGoalFields_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TestMultipleGoalFields_Goal__rosidl_typesupport_introspection_c__TestMultipleGoalFields_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rosbridge_test_msgs/action/test_multiple_goal_fields__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosbridge_test_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rosbridge_test_msgs/action/test_multiple_goal_fields__functions.h"
// already included above
// #include "rosbridge_test_msgs/action/test_multiple_goal_fields__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void TestMultipleGoalFields_Result__rosidl_typesupport_introspection_c__TestMultipleGoalFields_Result_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rosbridge_test_msgs__action__TestMultipleGoalFields_Result__init(message_memory);
}

void TestMultipleGoalFields_Result__rosidl_typesupport_introspection_c__TestMultipleGoalFields_Result_fini_function(void * message_memory)
{
  rosbridge_test_msgs__action__TestMultipleGoalFields_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TestMultipleGoalFields_Result__rosidl_typesupport_introspection_c__TestMultipleGoalFields_Result_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosbridge_test_msgs__action__TestMultipleGoalFields_Result, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TestMultipleGoalFields_Result__rosidl_typesupport_introspection_c__TestMultipleGoalFields_Result_message_members = {
  "rosbridge_test_msgs__action",  // message namespace
  "TestMultipleGoalFields_Result",  // message name
  1,  // number of fields
  sizeof(rosbridge_test_msgs__action__TestMultipleGoalFields_Result),
  TestMultipleGoalFields_Result__rosidl_typesupport_introspection_c__TestMultipleGoalFields_Result_message_member_array,  // message members
  TestMultipleGoalFields_Result__rosidl_typesupport_introspection_c__TestMultipleGoalFields_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  TestMultipleGoalFields_Result__rosidl_typesupport_introspection_c__TestMultipleGoalFields_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TestMultipleGoalFields_Result__rosidl_typesupport_introspection_c__TestMultipleGoalFields_Result_message_type_support_handle = {
  0,
  &TestMultipleGoalFields_Result__rosidl_typesupport_introspection_c__TestMultipleGoalFields_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rosbridge_test_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosbridge_test_msgs, action, TestMultipleGoalFields_Result)() {
  if (!TestMultipleGoalFields_Result__rosidl_typesupport_introspection_c__TestMultipleGoalFields_Result_message_type_support_handle.typesupport_identifier) {
    TestMultipleGoalFields_Result__rosidl_typesupport_introspection_c__TestMultipleGoalFields_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TestMultipleGoalFields_Result__rosidl_typesupport_introspection_c__TestMultipleGoalFields_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rosbridge_test_msgs/action/test_multiple_goal_fields__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosbridge_test_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rosbridge_test_msgs/action/test_multiple_goal_fields__functions.h"
// already included above
// #include "rosbridge_test_msgs/action/test_multiple_goal_fields__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void TestMultipleGoalFields_Feedback__rosidl_typesupport_introspection_c__TestMultipleGoalFields_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rosbridge_test_msgs__action__TestMultipleGoalFields_Feedback__init(message_memory);
}

void TestMultipleGoalFields_Feedback__rosidl_typesupport_introspection_c__TestMultipleGoalFields_Feedback_fini_function(void * message_memory)
{
  rosbridge_test_msgs__action__TestMultipleGoalFields_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TestMultipleGoalFields_Feedback__rosidl_typesupport_introspection_c__TestMultipleGoalFields_Feedback_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosbridge_test_msgs__action__TestMultipleGoalFields_Feedback, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TestMultipleGoalFields_Feedback__rosidl_typesupport_introspection_c__TestMultipleGoalFields_Feedback_message_members = {
  "rosbridge_test_msgs__action",  // message namespace
  "TestMultipleGoalFields_Feedback",  // message name
  1,  // number of fields
  sizeof(rosbridge_test_msgs__action__TestMultipleGoalFields_Feedback),
  TestMultipleGoalFields_Feedback__rosidl_typesupport_introspection_c__TestMultipleGoalFields_Feedback_message_member_array,  // message members
  TestMultipleGoalFields_Feedback__rosidl_typesupport_introspection_c__TestMultipleGoalFields_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  TestMultipleGoalFields_Feedback__rosidl_typesupport_introspection_c__TestMultipleGoalFields_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TestMultipleGoalFields_Feedback__rosidl_typesupport_introspection_c__TestMultipleGoalFields_Feedback_message_type_support_handle = {
  0,
  &TestMultipleGoalFields_Feedback__rosidl_typesupport_introspection_c__TestMultipleGoalFields_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rosbridge_test_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosbridge_test_msgs, action, TestMultipleGoalFields_Feedback)() {
  if (!TestMultipleGoalFields_Feedback__rosidl_typesupport_introspection_c__TestMultipleGoalFields_Feedback_message_type_support_handle.typesupport_identifier) {
    TestMultipleGoalFields_Feedback__rosidl_typesupport_introspection_c__TestMultipleGoalFields_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TestMultipleGoalFields_Feedback__rosidl_typesupport_introspection_c__TestMultipleGoalFields_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rosbridge_test_msgs/action/test_multiple_goal_fields__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosbridge_test_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rosbridge_test_msgs/action/test_multiple_goal_fields__functions.h"
// already included above
// #include "rosbridge_test_msgs/action/test_multiple_goal_fields__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "rosbridge_test_msgs/action/test_multiple_goal_fields.h"
// Member `goal`
// already included above
// #include "rosbridge_test_msgs/action/test_multiple_goal_fields__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TestMultipleGoalFields_SendGoal_Request__rosidl_typesupport_introspection_c__TestMultipleGoalFields_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rosbridge_test_msgs__action__TestMultipleGoalFields_SendGoal_Request__init(message_memory);
}

void TestMultipleGoalFields_SendGoal_Request__rosidl_typesupport_introspection_c__TestMultipleGoalFields_SendGoal_Request_fini_function(void * message_memory)
{
  rosbridge_test_msgs__action__TestMultipleGoalFields_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TestMultipleGoalFields_SendGoal_Request__rosidl_typesupport_introspection_c__TestMultipleGoalFields_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosbridge_test_msgs__action__TestMultipleGoalFields_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosbridge_test_msgs__action__TestMultipleGoalFields_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TestMultipleGoalFields_SendGoal_Request__rosidl_typesupport_introspection_c__TestMultipleGoalFields_SendGoal_Request_message_members = {
  "rosbridge_test_msgs__action",  // message namespace
  "TestMultipleGoalFields_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(rosbridge_test_msgs__action__TestMultipleGoalFields_SendGoal_Request),
  TestMultipleGoalFields_SendGoal_Request__rosidl_typesupport_introspection_c__TestMultipleGoalFields_SendGoal_Request_message_member_array,  // message members
  TestMultipleGoalFields_SendGoal_Request__rosidl_typesupport_introspection_c__TestMultipleGoalFields_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  TestMultipleGoalFields_SendGoal_Request__rosidl_typesupport_introspection_c__TestMultipleGoalFields_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TestMultipleGoalFields_SendGoal_Request__rosidl_typesupport_introspection_c__TestMultipleGoalFields_SendGoal_Request_message_type_support_handle = {
  0,
  &TestMultipleGoalFields_SendGoal_Request__rosidl_typesupport_introspection_c__TestMultipleGoalFields_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rosbridge_test_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosbridge_test_msgs, action, TestMultipleGoalFields_SendGoal_Request)() {
  TestMultipleGoalFields_SendGoal_Request__rosidl_typesupport_introspection_c__TestMultipleGoalFields_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  TestMultipleGoalFields_SendGoal_Request__rosidl_typesupport_introspection_c__TestMultipleGoalFields_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosbridge_test_msgs, action, TestMultipleGoalFields_Goal)();
  if (!TestMultipleGoalFields_SendGoal_Request__rosidl_typesupport_introspection_c__TestMultipleGoalFields_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    TestMultipleGoalFields_SendGoal_Request__rosidl_typesupport_introspection_c__TestMultipleGoalFields_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TestMultipleGoalFields_SendGoal_Request__rosidl_typesupport_introspection_c__TestMultipleGoalFields_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rosbridge_test_msgs/action/test_multiple_goal_fields__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosbridge_test_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rosbridge_test_msgs/action/test_multiple_goal_fields__functions.h"
// already included above
// #include "rosbridge_test_msgs/action/test_multiple_goal_fields__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TestMultipleGoalFields_SendGoal_Response__rosidl_typesupport_introspection_c__TestMultipleGoalFields_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rosbridge_test_msgs__action__TestMultipleGoalFields_SendGoal_Response__init(message_memory);
}

void TestMultipleGoalFields_SendGoal_Response__rosidl_typesupport_introspection_c__TestMultipleGoalFields_SendGoal_Response_fini_function(void * message_memory)
{
  rosbridge_test_msgs__action__TestMultipleGoalFields_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TestMultipleGoalFields_SendGoal_Response__rosidl_typesupport_introspection_c__TestMultipleGoalFields_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosbridge_test_msgs__action__TestMultipleGoalFields_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosbridge_test_msgs__action__TestMultipleGoalFields_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TestMultipleGoalFields_SendGoal_Response__rosidl_typesupport_introspection_c__TestMultipleGoalFields_SendGoal_Response_message_members = {
  "rosbridge_test_msgs__action",  // message namespace
  "TestMultipleGoalFields_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(rosbridge_test_msgs__action__TestMultipleGoalFields_SendGoal_Response),
  TestMultipleGoalFields_SendGoal_Response__rosidl_typesupport_introspection_c__TestMultipleGoalFields_SendGoal_Response_message_member_array,  // message members
  TestMultipleGoalFields_SendGoal_Response__rosidl_typesupport_introspection_c__TestMultipleGoalFields_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  TestMultipleGoalFields_SendGoal_Response__rosidl_typesupport_introspection_c__TestMultipleGoalFields_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TestMultipleGoalFields_SendGoal_Response__rosidl_typesupport_introspection_c__TestMultipleGoalFields_SendGoal_Response_message_type_support_handle = {
  0,
  &TestMultipleGoalFields_SendGoal_Response__rosidl_typesupport_introspection_c__TestMultipleGoalFields_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rosbridge_test_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosbridge_test_msgs, action, TestMultipleGoalFields_SendGoal_Response)() {
  TestMultipleGoalFields_SendGoal_Response__rosidl_typesupport_introspection_c__TestMultipleGoalFields_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!TestMultipleGoalFields_SendGoal_Response__rosidl_typesupport_introspection_c__TestMultipleGoalFields_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    TestMultipleGoalFields_SendGoal_Response__rosidl_typesupport_introspection_c__TestMultipleGoalFields_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TestMultipleGoalFields_SendGoal_Response__rosidl_typesupport_introspection_c__TestMultipleGoalFields_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "rosbridge_test_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosbridge_test_msgs/action/test_multiple_goal_fields__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers rosbridge_test_msgs__action__test_multiple_goal_fields__rosidl_typesupport_introspection_c__TestMultipleGoalFields_SendGoal_service_members = {
  "rosbridge_test_msgs__action",  // service namespace
  "TestMultipleGoalFields_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // rosbridge_test_msgs__action__test_multiple_goal_fields__rosidl_typesupport_introspection_c__TestMultipleGoalFields_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // rosbridge_test_msgs__action__test_multiple_goal_fields__rosidl_typesupport_introspection_c__TestMultipleGoalFields_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t rosbridge_test_msgs__action__test_multiple_goal_fields__rosidl_typesupport_introspection_c__TestMultipleGoalFields_SendGoal_service_type_support_handle = {
  0,
  &rosbridge_test_msgs__action__test_multiple_goal_fields__rosidl_typesupport_introspection_c__TestMultipleGoalFields_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosbridge_test_msgs, action, TestMultipleGoalFields_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosbridge_test_msgs, action, TestMultipleGoalFields_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rosbridge_test_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosbridge_test_msgs, action, TestMultipleGoalFields_SendGoal)() {
  if (!rosbridge_test_msgs__action__test_multiple_goal_fields__rosidl_typesupport_introspection_c__TestMultipleGoalFields_SendGoal_service_type_support_handle.typesupport_identifier) {
    rosbridge_test_msgs__action__test_multiple_goal_fields__rosidl_typesupport_introspection_c__TestMultipleGoalFields_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)rosbridge_test_msgs__action__test_multiple_goal_fields__rosidl_typesupport_introspection_c__TestMultipleGoalFields_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosbridge_test_msgs, action, TestMultipleGoalFields_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosbridge_test_msgs, action, TestMultipleGoalFields_SendGoal_Response)()->data;
  }

  return &rosbridge_test_msgs__action__test_multiple_goal_fields__rosidl_typesupport_introspection_c__TestMultipleGoalFields_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "rosbridge_test_msgs/action/test_multiple_goal_fields__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosbridge_test_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rosbridge_test_msgs/action/test_multiple_goal_fields__functions.h"
// already included above
// #include "rosbridge_test_msgs/action/test_multiple_goal_fields__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TestMultipleGoalFields_GetResult_Request__rosidl_typesupport_introspection_c__TestMultipleGoalFields_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rosbridge_test_msgs__action__TestMultipleGoalFields_GetResult_Request__init(message_memory);
}

void TestMultipleGoalFields_GetResult_Request__rosidl_typesupport_introspection_c__TestMultipleGoalFields_GetResult_Request_fini_function(void * message_memory)
{
  rosbridge_test_msgs__action__TestMultipleGoalFields_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TestMultipleGoalFields_GetResult_Request__rosidl_typesupport_introspection_c__TestMultipleGoalFields_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosbridge_test_msgs__action__TestMultipleGoalFields_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TestMultipleGoalFields_GetResult_Request__rosidl_typesupport_introspection_c__TestMultipleGoalFields_GetResult_Request_message_members = {
  "rosbridge_test_msgs__action",  // message namespace
  "TestMultipleGoalFields_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(rosbridge_test_msgs__action__TestMultipleGoalFields_GetResult_Request),
  TestMultipleGoalFields_GetResult_Request__rosidl_typesupport_introspection_c__TestMultipleGoalFields_GetResult_Request_message_member_array,  // message members
  TestMultipleGoalFields_GetResult_Request__rosidl_typesupport_introspection_c__TestMultipleGoalFields_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  TestMultipleGoalFields_GetResult_Request__rosidl_typesupport_introspection_c__TestMultipleGoalFields_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TestMultipleGoalFields_GetResult_Request__rosidl_typesupport_introspection_c__TestMultipleGoalFields_GetResult_Request_message_type_support_handle = {
  0,
  &TestMultipleGoalFields_GetResult_Request__rosidl_typesupport_introspection_c__TestMultipleGoalFields_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rosbridge_test_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosbridge_test_msgs, action, TestMultipleGoalFields_GetResult_Request)() {
  TestMultipleGoalFields_GetResult_Request__rosidl_typesupport_introspection_c__TestMultipleGoalFields_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!TestMultipleGoalFields_GetResult_Request__rosidl_typesupport_introspection_c__TestMultipleGoalFields_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    TestMultipleGoalFields_GetResult_Request__rosidl_typesupport_introspection_c__TestMultipleGoalFields_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TestMultipleGoalFields_GetResult_Request__rosidl_typesupport_introspection_c__TestMultipleGoalFields_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rosbridge_test_msgs/action/test_multiple_goal_fields__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosbridge_test_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rosbridge_test_msgs/action/test_multiple_goal_fields__functions.h"
// already included above
// #include "rosbridge_test_msgs/action/test_multiple_goal_fields__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "rosbridge_test_msgs/action/test_multiple_goal_fields.h"
// Member `result`
// already included above
// #include "rosbridge_test_msgs/action/test_multiple_goal_fields__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TestMultipleGoalFields_GetResult_Response__rosidl_typesupport_introspection_c__TestMultipleGoalFields_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rosbridge_test_msgs__action__TestMultipleGoalFields_GetResult_Response__init(message_memory);
}

void TestMultipleGoalFields_GetResult_Response__rosidl_typesupport_introspection_c__TestMultipleGoalFields_GetResult_Response_fini_function(void * message_memory)
{
  rosbridge_test_msgs__action__TestMultipleGoalFields_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TestMultipleGoalFields_GetResult_Response__rosidl_typesupport_introspection_c__TestMultipleGoalFields_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosbridge_test_msgs__action__TestMultipleGoalFields_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosbridge_test_msgs__action__TestMultipleGoalFields_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TestMultipleGoalFields_GetResult_Response__rosidl_typesupport_introspection_c__TestMultipleGoalFields_GetResult_Response_message_members = {
  "rosbridge_test_msgs__action",  // message namespace
  "TestMultipleGoalFields_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(rosbridge_test_msgs__action__TestMultipleGoalFields_GetResult_Response),
  TestMultipleGoalFields_GetResult_Response__rosidl_typesupport_introspection_c__TestMultipleGoalFields_GetResult_Response_message_member_array,  // message members
  TestMultipleGoalFields_GetResult_Response__rosidl_typesupport_introspection_c__TestMultipleGoalFields_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  TestMultipleGoalFields_GetResult_Response__rosidl_typesupport_introspection_c__TestMultipleGoalFields_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TestMultipleGoalFields_GetResult_Response__rosidl_typesupport_introspection_c__TestMultipleGoalFields_GetResult_Response_message_type_support_handle = {
  0,
  &TestMultipleGoalFields_GetResult_Response__rosidl_typesupport_introspection_c__TestMultipleGoalFields_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rosbridge_test_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosbridge_test_msgs, action, TestMultipleGoalFields_GetResult_Response)() {
  TestMultipleGoalFields_GetResult_Response__rosidl_typesupport_introspection_c__TestMultipleGoalFields_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosbridge_test_msgs, action, TestMultipleGoalFields_Result)();
  if (!TestMultipleGoalFields_GetResult_Response__rosidl_typesupport_introspection_c__TestMultipleGoalFields_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    TestMultipleGoalFields_GetResult_Response__rosidl_typesupport_introspection_c__TestMultipleGoalFields_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TestMultipleGoalFields_GetResult_Response__rosidl_typesupport_introspection_c__TestMultipleGoalFields_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "rosbridge_test_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosbridge_test_msgs/action/test_multiple_goal_fields__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers rosbridge_test_msgs__action__test_multiple_goal_fields__rosidl_typesupport_introspection_c__TestMultipleGoalFields_GetResult_service_members = {
  "rosbridge_test_msgs__action",  // service namespace
  "TestMultipleGoalFields_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // rosbridge_test_msgs__action__test_multiple_goal_fields__rosidl_typesupport_introspection_c__TestMultipleGoalFields_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // rosbridge_test_msgs__action__test_multiple_goal_fields__rosidl_typesupport_introspection_c__TestMultipleGoalFields_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t rosbridge_test_msgs__action__test_multiple_goal_fields__rosidl_typesupport_introspection_c__TestMultipleGoalFields_GetResult_service_type_support_handle = {
  0,
  &rosbridge_test_msgs__action__test_multiple_goal_fields__rosidl_typesupport_introspection_c__TestMultipleGoalFields_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosbridge_test_msgs, action, TestMultipleGoalFields_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosbridge_test_msgs, action, TestMultipleGoalFields_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rosbridge_test_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosbridge_test_msgs, action, TestMultipleGoalFields_GetResult)() {
  if (!rosbridge_test_msgs__action__test_multiple_goal_fields__rosidl_typesupport_introspection_c__TestMultipleGoalFields_GetResult_service_type_support_handle.typesupport_identifier) {
    rosbridge_test_msgs__action__test_multiple_goal_fields__rosidl_typesupport_introspection_c__TestMultipleGoalFields_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)rosbridge_test_msgs__action__test_multiple_goal_fields__rosidl_typesupport_introspection_c__TestMultipleGoalFields_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosbridge_test_msgs, action, TestMultipleGoalFields_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosbridge_test_msgs, action, TestMultipleGoalFields_GetResult_Response)()->data;
  }

  return &rosbridge_test_msgs__action__test_multiple_goal_fields__rosidl_typesupport_introspection_c__TestMultipleGoalFields_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "rosbridge_test_msgs/action/test_multiple_goal_fields__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosbridge_test_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rosbridge_test_msgs/action/test_multiple_goal_fields__functions.h"
// already included above
// #include "rosbridge_test_msgs/action/test_multiple_goal_fields__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "rosbridge_test_msgs/action/test_multiple_goal_fields.h"
// Member `feedback`
// already included above
// #include "rosbridge_test_msgs/action/test_multiple_goal_fields__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TestMultipleGoalFields_FeedbackMessage__rosidl_typesupport_introspection_c__TestMultipleGoalFields_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rosbridge_test_msgs__action__TestMultipleGoalFields_FeedbackMessage__init(message_memory);
}

void TestMultipleGoalFields_FeedbackMessage__rosidl_typesupport_introspection_c__TestMultipleGoalFields_FeedbackMessage_fini_function(void * message_memory)
{
  rosbridge_test_msgs__action__TestMultipleGoalFields_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TestMultipleGoalFields_FeedbackMessage__rosidl_typesupport_introspection_c__TestMultipleGoalFields_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosbridge_test_msgs__action__TestMultipleGoalFields_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosbridge_test_msgs__action__TestMultipleGoalFields_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TestMultipleGoalFields_FeedbackMessage__rosidl_typesupport_introspection_c__TestMultipleGoalFields_FeedbackMessage_message_members = {
  "rosbridge_test_msgs__action",  // message namespace
  "TestMultipleGoalFields_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(rosbridge_test_msgs__action__TestMultipleGoalFields_FeedbackMessage),
  TestMultipleGoalFields_FeedbackMessage__rosidl_typesupport_introspection_c__TestMultipleGoalFields_FeedbackMessage_message_member_array,  // message members
  TestMultipleGoalFields_FeedbackMessage__rosidl_typesupport_introspection_c__TestMultipleGoalFields_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  TestMultipleGoalFields_FeedbackMessage__rosidl_typesupport_introspection_c__TestMultipleGoalFields_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TestMultipleGoalFields_FeedbackMessage__rosidl_typesupport_introspection_c__TestMultipleGoalFields_FeedbackMessage_message_type_support_handle = {
  0,
  &TestMultipleGoalFields_FeedbackMessage__rosidl_typesupport_introspection_c__TestMultipleGoalFields_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rosbridge_test_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosbridge_test_msgs, action, TestMultipleGoalFields_FeedbackMessage)() {
  TestMultipleGoalFields_FeedbackMessage__rosidl_typesupport_introspection_c__TestMultipleGoalFields_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  TestMultipleGoalFields_FeedbackMessage__rosidl_typesupport_introspection_c__TestMultipleGoalFields_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosbridge_test_msgs, action, TestMultipleGoalFields_Feedback)();
  if (!TestMultipleGoalFields_FeedbackMessage__rosidl_typesupport_introspection_c__TestMultipleGoalFields_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    TestMultipleGoalFields_FeedbackMessage__rosidl_typesupport_introspection_c__TestMultipleGoalFields_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TestMultipleGoalFields_FeedbackMessage__rosidl_typesupport_introspection_c__TestMultipleGoalFields_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
