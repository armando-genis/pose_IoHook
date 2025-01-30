// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosbridge_test_msgs:action/TestGoalOnly.idl
// generated code does not contain a copyright notice

#ifndef ROSBRIDGE_TEST_MSGS__ACTION__TEST_GOAL_ONLY__FUNCTIONS_H_
#define ROSBRIDGE_TEST_MSGS__ACTION__TEST_GOAL_ONLY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "rosbridge_test_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "rosbridge_test_msgs/action/test_goal_only__struct.h"

/// Initialize action/TestGoalOnly message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rosbridge_test_msgs__action__TestGoalOnly_Goal
 * )) before or use
 * rosbridge_test_msgs__action__TestGoalOnly_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__action__TestGoalOnly_Goal__init(rosbridge_test_msgs__action__TestGoalOnly_Goal * msg);

/// Finalize action/TestGoalOnly message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__action__TestGoalOnly_Goal__fini(rosbridge_test_msgs__action__TestGoalOnly_Goal * msg);

/// Create action/TestGoalOnly message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rosbridge_test_msgs__action__TestGoalOnly_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
rosbridge_test_msgs__action__TestGoalOnly_Goal *
rosbridge_test_msgs__action__TestGoalOnly_Goal__create();

/// Destroy action/TestGoalOnly message.
/**
 * It calls
 * rosbridge_test_msgs__action__TestGoalOnly_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__action__TestGoalOnly_Goal__destroy(rosbridge_test_msgs__action__TestGoalOnly_Goal * msg);


/// Initialize array of action/TestGoalOnly messages.
/**
 * It allocates the memory for the number of elements and calls
 * rosbridge_test_msgs__action__TestGoalOnly_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__action__TestGoalOnly_Goal__Sequence__init(rosbridge_test_msgs__action__TestGoalOnly_Goal__Sequence * array, size_t size);

/// Finalize array of action/TestGoalOnly messages.
/**
 * It calls
 * rosbridge_test_msgs__action__TestGoalOnly_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__action__TestGoalOnly_Goal__Sequence__fini(rosbridge_test_msgs__action__TestGoalOnly_Goal__Sequence * array);

/// Create array of action/TestGoalOnly messages.
/**
 * It allocates the memory for the array and calls
 * rosbridge_test_msgs__action__TestGoalOnly_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
rosbridge_test_msgs__action__TestGoalOnly_Goal__Sequence *
rosbridge_test_msgs__action__TestGoalOnly_Goal__Sequence__create(size_t size);

/// Destroy array of action/TestGoalOnly messages.
/**
 * It calls
 * rosbridge_test_msgs__action__TestGoalOnly_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__action__TestGoalOnly_Goal__Sequence__destroy(rosbridge_test_msgs__action__TestGoalOnly_Goal__Sequence * array);

/// Initialize action/TestGoalOnly message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rosbridge_test_msgs__action__TestGoalOnly_Result
 * )) before or use
 * rosbridge_test_msgs__action__TestGoalOnly_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__action__TestGoalOnly_Result__init(rosbridge_test_msgs__action__TestGoalOnly_Result * msg);

/// Finalize action/TestGoalOnly message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__action__TestGoalOnly_Result__fini(rosbridge_test_msgs__action__TestGoalOnly_Result * msg);

/// Create action/TestGoalOnly message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rosbridge_test_msgs__action__TestGoalOnly_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
rosbridge_test_msgs__action__TestGoalOnly_Result *
rosbridge_test_msgs__action__TestGoalOnly_Result__create();

/// Destroy action/TestGoalOnly message.
/**
 * It calls
 * rosbridge_test_msgs__action__TestGoalOnly_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__action__TestGoalOnly_Result__destroy(rosbridge_test_msgs__action__TestGoalOnly_Result * msg);


/// Initialize array of action/TestGoalOnly messages.
/**
 * It allocates the memory for the number of elements and calls
 * rosbridge_test_msgs__action__TestGoalOnly_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__action__TestGoalOnly_Result__Sequence__init(rosbridge_test_msgs__action__TestGoalOnly_Result__Sequence * array, size_t size);

/// Finalize array of action/TestGoalOnly messages.
/**
 * It calls
 * rosbridge_test_msgs__action__TestGoalOnly_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__action__TestGoalOnly_Result__Sequence__fini(rosbridge_test_msgs__action__TestGoalOnly_Result__Sequence * array);

/// Create array of action/TestGoalOnly messages.
/**
 * It allocates the memory for the array and calls
 * rosbridge_test_msgs__action__TestGoalOnly_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
rosbridge_test_msgs__action__TestGoalOnly_Result__Sequence *
rosbridge_test_msgs__action__TestGoalOnly_Result__Sequence__create(size_t size);

/// Destroy array of action/TestGoalOnly messages.
/**
 * It calls
 * rosbridge_test_msgs__action__TestGoalOnly_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__action__TestGoalOnly_Result__Sequence__destroy(rosbridge_test_msgs__action__TestGoalOnly_Result__Sequence * array);

/// Initialize action/TestGoalOnly message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rosbridge_test_msgs__action__TestGoalOnly_Feedback
 * )) before or use
 * rosbridge_test_msgs__action__TestGoalOnly_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__action__TestGoalOnly_Feedback__init(rosbridge_test_msgs__action__TestGoalOnly_Feedback * msg);

/// Finalize action/TestGoalOnly message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__action__TestGoalOnly_Feedback__fini(rosbridge_test_msgs__action__TestGoalOnly_Feedback * msg);

/// Create action/TestGoalOnly message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rosbridge_test_msgs__action__TestGoalOnly_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
rosbridge_test_msgs__action__TestGoalOnly_Feedback *
rosbridge_test_msgs__action__TestGoalOnly_Feedback__create();

/// Destroy action/TestGoalOnly message.
/**
 * It calls
 * rosbridge_test_msgs__action__TestGoalOnly_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__action__TestGoalOnly_Feedback__destroy(rosbridge_test_msgs__action__TestGoalOnly_Feedback * msg);


/// Initialize array of action/TestGoalOnly messages.
/**
 * It allocates the memory for the number of elements and calls
 * rosbridge_test_msgs__action__TestGoalOnly_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__action__TestGoalOnly_Feedback__Sequence__init(rosbridge_test_msgs__action__TestGoalOnly_Feedback__Sequence * array, size_t size);

/// Finalize array of action/TestGoalOnly messages.
/**
 * It calls
 * rosbridge_test_msgs__action__TestGoalOnly_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__action__TestGoalOnly_Feedback__Sequence__fini(rosbridge_test_msgs__action__TestGoalOnly_Feedback__Sequence * array);

/// Create array of action/TestGoalOnly messages.
/**
 * It allocates the memory for the array and calls
 * rosbridge_test_msgs__action__TestGoalOnly_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
rosbridge_test_msgs__action__TestGoalOnly_Feedback__Sequence *
rosbridge_test_msgs__action__TestGoalOnly_Feedback__Sequence__create(size_t size);

/// Destroy array of action/TestGoalOnly messages.
/**
 * It calls
 * rosbridge_test_msgs__action__TestGoalOnly_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__action__TestGoalOnly_Feedback__Sequence__destroy(rosbridge_test_msgs__action__TestGoalOnly_Feedback__Sequence * array);

/// Initialize action/TestGoalOnly message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rosbridge_test_msgs__action__TestGoalOnly_SendGoal_Request
 * )) before or use
 * rosbridge_test_msgs__action__TestGoalOnly_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__action__TestGoalOnly_SendGoal_Request__init(rosbridge_test_msgs__action__TestGoalOnly_SendGoal_Request * msg);

/// Finalize action/TestGoalOnly message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__action__TestGoalOnly_SendGoal_Request__fini(rosbridge_test_msgs__action__TestGoalOnly_SendGoal_Request * msg);

/// Create action/TestGoalOnly message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rosbridge_test_msgs__action__TestGoalOnly_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
rosbridge_test_msgs__action__TestGoalOnly_SendGoal_Request *
rosbridge_test_msgs__action__TestGoalOnly_SendGoal_Request__create();

/// Destroy action/TestGoalOnly message.
/**
 * It calls
 * rosbridge_test_msgs__action__TestGoalOnly_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__action__TestGoalOnly_SendGoal_Request__destroy(rosbridge_test_msgs__action__TestGoalOnly_SendGoal_Request * msg);


/// Initialize array of action/TestGoalOnly messages.
/**
 * It allocates the memory for the number of elements and calls
 * rosbridge_test_msgs__action__TestGoalOnly_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__action__TestGoalOnly_SendGoal_Request__Sequence__init(rosbridge_test_msgs__action__TestGoalOnly_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/TestGoalOnly messages.
/**
 * It calls
 * rosbridge_test_msgs__action__TestGoalOnly_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__action__TestGoalOnly_SendGoal_Request__Sequence__fini(rosbridge_test_msgs__action__TestGoalOnly_SendGoal_Request__Sequence * array);

/// Create array of action/TestGoalOnly messages.
/**
 * It allocates the memory for the array and calls
 * rosbridge_test_msgs__action__TestGoalOnly_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
rosbridge_test_msgs__action__TestGoalOnly_SendGoal_Request__Sequence *
rosbridge_test_msgs__action__TestGoalOnly_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/TestGoalOnly messages.
/**
 * It calls
 * rosbridge_test_msgs__action__TestGoalOnly_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__action__TestGoalOnly_SendGoal_Request__Sequence__destroy(rosbridge_test_msgs__action__TestGoalOnly_SendGoal_Request__Sequence * array);

/// Initialize action/TestGoalOnly message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rosbridge_test_msgs__action__TestGoalOnly_SendGoal_Response
 * )) before or use
 * rosbridge_test_msgs__action__TestGoalOnly_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__action__TestGoalOnly_SendGoal_Response__init(rosbridge_test_msgs__action__TestGoalOnly_SendGoal_Response * msg);

/// Finalize action/TestGoalOnly message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__action__TestGoalOnly_SendGoal_Response__fini(rosbridge_test_msgs__action__TestGoalOnly_SendGoal_Response * msg);

/// Create action/TestGoalOnly message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rosbridge_test_msgs__action__TestGoalOnly_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
rosbridge_test_msgs__action__TestGoalOnly_SendGoal_Response *
rosbridge_test_msgs__action__TestGoalOnly_SendGoal_Response__create();

/// Destroy action/TestGoalOnly message.
/**
 * It calls
 * rosbridge_test_msgs__action__TestGoalOnly_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__action__TestGoalOnly_SendGoal_Response__destroy(rosbridge_test_msgs__action__TestGoalOnly_SendGoal_Response * msg);


/// Initialize array of action/TestGoalOnly messages.
/**
 * It allocates the memory for the number of elements and calls
 * rosbridge_test_msgs__action__TestGoalOnly_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__action__TestGoalOnly_SendGoal_Response__Sequence__init(rosbridge_test_msgs__action__TestGoalOnly_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/TestGoalOnly messages.
/**
 * It calls
 * rosbridge_test_msgs__action__TestGoalOnly_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__action__TestGoalOnly_SendGoal_Response__Sequence__fini(rosbridge_test_msgs__action__TestGoalOnly_SendGoal_Response__Sequence * array);

/// Create array of action/TestGoalOnly messages.
/**
 * It allocates the memory for the array and calls
 * rosbridge_test_msgs__action__TestGoalOnly_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
rosbridge_test_msgs__action__TestGoalOnly_SendGoal_Response__Sequence *
rosbridge_test_msgs__action__TestGoalOnly_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/TestGoalOnly messages.
/**
 * It calls
 * rosbridge_test_msgs__action__TestGoalOnly_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__action__TestGoalOnly_SendGoal_Response__Sequence__destroy(rosbridge_test_msgs__action__TestGoalOnly_SendGoal_Response__Sequence * array);

/// Initialize action/TestGoalOnly message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rosbridge_test_msgs__action__TestGoalOnly_GetResult_Request
 * )) before or use
 * rosbridge_test_msgs__action__TestGoalOnly_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__action__TestGoalOnly_GetResult_Request__init(rosbridge_test_msgs__action__TestGoalOnly_GetResult_Request * msg);

/// Finalize action/TestGoalOnly message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__action__TestGoalOnly_GetResult_Request__fini(rosbridge_test_msgs__action__TestGoalOnly_GetResult_Request * msg);

/// Create action/TestGoalOnly message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rosbridge_test_msgs__action__TestGoalOnly_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
rosbridge_test_msgs__action__TestGoalOnly_GetResult_Request *
rosbridge_test_msgs__action__TestGoalOnly_GetResult_Request__create();

/// Destroy action/TestGoalOnly message.
/**
 * It calls
 * rosbridge_test_msgs__action__TestGoalOnly_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__action__TestGoalOnly_GetResult_Request__destroy(rosbridge_test_msgs__action__TestGoalOnly_GetResult_Request * msg);


/// Initialize array of action/TestGoalOnly messages.
/**
 * It allocates the memory for the number of elements and calls
 * rosbridge_test_msgs__action__TestGoalOnly_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__action__TestGoalOnly_GetResult_Request__Sequence__init(rosbridge_test_msgs__action__TestGoalOnly_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/TestGoalOnly messages.
/**
 * It calls
 * rosbridge_test_msgs__action__TestGoalOnly_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__action__TestGoalOnly_GetResult_Request__Sequence__fini(rosbridge_test_msgs__action__TestGoalOnly_GetResult_Request__Sequence * array);

/// Create array of action/TestGoalOnly messages.
/**
 * It allocates the memory for the array and calls
 * rosbridge_test_msgs__action__TestGoalOnly_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
rosbridge_test_msgs__action__TestGoalOnly_GetResult_Request__Sequence *
rosbridge_test_msgs__action__TestGoalOnly_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/TestGoalOnly messages.
/**
 * It calls
 * rosbridge_test_msgs__action__TestGoalOnly_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__action__TestGoalOnly_GetResult_Request__Sequence__destroy(rosbridge_test_msgs__action__TestGoalOnly_GetResult_Request__Sequence * array);

/// Initialize action/TestGoalOnly message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rosbridge_test_msgs__action__TestGoalOnly_GetResult_Response
 * )) before or use
 * rosbridge_test_msgs__action__TestGoalOnly_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__action__TestGoalOnly_GetResult_Response__init(rosbridge_test_msgs__action__TestGoalOnly_GetResult_Response * msg);

/// Finalize action/TestGoalOnly message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__action__TestGoalOnly_GetResult_Response__fini(rosbridge_test_msgs__action__TestGoalOnly_GetResult_Response * msg);

/// Create action/TestGoalOnly message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rosbridge_test_msgs__action__TestGoalOnly_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
rosbridge_test_msgs__action__TestGoalOnly_GetResult_Response *
rosbridge_test_msgs__action__TestGoalOnly_GetResult_Response__create();

/// Destroy action/TestGoalOnly message.
/**
 * It calls
 * rosbridge_test_msgs__action__TestGoalOnly_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__action__TestGoalOnly_GetResult_Response__destroy(rosbridge_test_msgs__action__TestGoalOnly_GetResult_Response * msg);


/// Initialize array of action/TestGoalOnly messages.
/**
 * It allocates the memory for the number of elements and calls
 * rosbridge_test_msgs__action__TestGoalOnly_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__action__TestGoalOnly_GetResult_Response__Sequence__init(rosbridge_test_msgs__action__TestGoalOnly_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/TestGoalOnly messages.
/**
 * It calls
 * rosbridge_test_msgs__action__TestGoalOnly_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__action__TestGoalOnly_GetResult_Response__Sequence__fini(rosbridge_test_msgs__action__TestGoalOnly_GetResult_Response__Sequence * array);

/// Create array of action/TestGoalOnly messages.
/**
 * It allocates the memory for the array and calls
 * rosbridge_test_msgs__action__TestGoalOnly_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
rosbridge_test_msgs__action__TestGoalOnly_GetResult_Response__Sequence *
rosbridge_test_msgs__action__TestGoalOnly_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/TestGoalOnly messages.
/**
 * It calls
 * rosbridge_test_msgs__action__TestGoalOnly_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__action__TestGoalOnly_GetResult_Response__Sequence__destroy(rosbridge_test_msgs__action__TestGoalOnly_GetResult_Response__Sequence * array);

/// Initialize action/TestGoalOnly message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rosbridge_test_msgs__action__TestGoalOnly_FeedbackMessage
 * )) before or use
 * rosbridge_test_msgs__action__TestGoalOnly_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__action__TestGoalOnly_FeedbackMessage__init(rosbridge_test_msgs__action__TestGoalOnly_FeedbackMessage * msg);

/// Finalize action/TestGoalOnly message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__action__TestGoalOnly_FeedbackMessage__fini(rosbridge_test_msgs__action__TestGoalOnly_FeedbackMessage * msg);

/// Create action/TestGoalOnly message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rosbridge_test_msgs__action__TestGoalOnly_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
rosbridge_test_msgs__action__TestGoalOnly_FeedbackMessage *
rosbridge_test_msgs__action__TestGoalOnly_FeedbackMessage__create();

/// Destroy action/TestGoalOnly message.
/**
 * It calls
 * rosbridge_test_msgs__action__TestGoalOnly_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__action__TestGoalOnly_FeedbackMessage__destroy(rosbridge_test_msgs__action__TestGoalOnly_FeedbackMessage * msg);


/// Initialize array of action/TestGoalOnly messages.
/**
 * It allocates the memory for the number of elements and calls
 * rosbridge_test_msgs__action__TestGoalOnly_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__action__TestGoalOnly_FeedbackMessage__Sequence__init(rosbridge_test_msgs__action__TestGoalOnly_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/TestGoalOnly messages.
/**
 * It calls
 * rosbridge_test_msgs__action__TestGoalOnly_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__action__TestGoalOnly_FeedbackMessage__Sequence__fini(rosbridge_test_msgs__action__TestGoalOnly_FeedbackMessage__Sequence * array);

/// Create array of action/TestGoalOnly messages.
/**
 * It allocates the memory for the array and calls
 * rosbridge_test_msgs__action__TestGoalOnly_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
rosbridge_test_msgs__action__TestGoalOnly_FeedbackMessage__Sequence *
rosbridge_test_msgs__action__TestGoalOnly_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/TestGoalOnly messages.
/**
 * It calls
 * rosbridge_test_msgs__action__TestGoalOnly_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__action__TestGoalOnly_FeedbackMessage__Sequence__destroy(rosbridge_test_msgs__action__TestGoalOnly_FeedbackMessage__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // ROSBRIDGE_TEST_MSGS__ACTION__TEST_GOAL_ONLY__FUNCTIONS_H_
