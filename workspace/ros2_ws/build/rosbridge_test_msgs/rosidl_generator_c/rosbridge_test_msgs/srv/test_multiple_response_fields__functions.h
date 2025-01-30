// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosbridge_test_msgs:srv/TestMultipleResponseFields.idl
// generated code does not contain a copyright notice

#ifndef ROSBRIDGE_TEST_MSGS__SRV__TEST_MULTIPLE_RESPONSE_FIELDS__FUNCTIONS_H_
#define ROSBRIDGE_TEST_MSGS__SRV__TEST_MULTIPLE_RESPONSE_FIELDS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "rosbridge_test_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "rosbridge_test_msgs/srv/test_multiple_response_fields__struct.h"

/// Initialize srv/TestMultipleResponseFields message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rosbridge_test_msgs__srv__TestMultipleResponseFields_Request
 * )) before or use
 * rosbridge_test_msgs__srv__TestMultipleResponseFields_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__srv__TestMultipleResponseFields_Request__init(rosbridge_test_msgs__srv__TestMultipleResponseFields_Request * msg);

/// Finalize srv/TestMultipleResponseFields message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__srv__TestMultipleResponseFields_Request__fini(rosbridge_test_msgs__srv__TestMultipleResponseFields_Request * msg);

/// Create srv/TestMultipleResponseFields message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rosbridge_test_msgs__srv__TestMultipleResponseFields_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
rosbridge_test_msgs__srv__TestMultipleResponseFields_Request *
rosbridge_test_msgs__srv__TestMultipleResponseFields_Request__create();

/// Destroy srv/TestMultipleResponseFields message.
/**
 * It calls
 * rosbridge_test_msgs__srv__TestMultipleResponseFields_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__srv__TestMultipleResponseFields_Request__destroy(rosbridge_test_msgs__srv__TestMultipleResponseFields_Request * msg);


/// Initialize array of srv/TestMultipleResponseFields messages.
/**
 * It allocates the memory for the number of elements and calls
 * rosbridge_test_msgs__srv__TestMultipleResponseFields_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__srv__TestMultipleResponseFields_Request__Sequence__init(rosbridge_test_msgs__srv__TestMultipleResponseFields_Request__Sequence * array, size_t size);

/// Finalize array of srv/TestMultipleResponseFields messages.
/**
 * It calls
 * rosbridge_test_msgs__srv__TestMultipleResponseFields_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__srv__TestMultipleResponseFields_Request__Sequence__fini(rosbridge_test_msgs__srv__TestMultipleResponseFields_Request__Sequence * array);

/// Create array of srv/TestMultipleResponseFields messages.
/**
 * It allocates the memory for the array and calls
 * rosbridge_test_msgs__srv__TestMultipleResponseFields_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
rosbridge_test_msgs__srv__TestMultipleResponseFields_Request__Sequence *
rosbridge_test_msgs__srv__TestMultipleResponseFields_Request__Sequence__create(size_t size);

/// Destroy array of srv/TestMultipleResponseFields messages.
/**
 * It calls
 * rosbridge_test_msgs__srv__TestMultipleResponseFields_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__srv__TestMultipleResponseFields_Request__Sequence__destroy(rosbridge_test_msgs__srv__TestMultipleResponseFields_Request__Sequence * array);

/// Initialize srv/TestMultipleResponseFields message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rosbridge_test_msgs__srv__TestMultipleResponseFields_Response
 * )) before or use
 * rosbridge_test_msgs__srv__TestMultipleResponseFields_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__srv__TestMultipleResponseFields_Response__init(rosbridge_test_msgs__srv__TestMultipleResponseFields_Response * msg);

/// Finalize srv/TestMultipleResponseFields message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__srv__TestMultipleResponseFields_Response__fini(rosbridge_test_msgs__srv__TestMultipleResponseFields_Response * msg);

/// Create srv/TestMultipleResponseFields message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rosbridge_test_msgs__srv__TestMultipleResponseFields_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
rosbridge_test_msgs__srv__TestMultipleResponseFields_Response *
rosbridge_test_msgs__srv__TestMultipleResponseFields_Response__create();

/// Destroy srv/TestMultipleResponseFields message.
/**
 * It calls
 * rosbridge_test_msgs__srv__TestMultipleResponseFields_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__srv__TestMultipleResponseFields_Response__destroy(rosbridge_test_msgs__srv__TestMultipleResponseFields_Response * msg);


/// Initialize array of srv/TestMultipleResponseFields messages.
/**
 * It allocates the memory for the number of elements and calls
 * rosbridge_test_msgs__srv__TestMultipleResponseFields_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__srv__TestMultipleResponseFields_Response__Sequence__init(rosbridge_test_msgs__srv__TestMultipleResponseFields_Response__Sequence * array, size_t size);

/// Finalize array of srv/TestMultipleResponseFields messages.
/**
 * It calls
 * rosbridge_test_msgs__srv__TestMultipleResponseFields_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__srv__TestMultipleResponseFields_Response__Sequence__fini(rosbridge_test_msgs__srv__TestMultipleResponseFields_Response__Sequence * array);

/// Create array of srv/TestMultipleResponseFields messages.
/**
 * It allocates the memory for the array and calls
 * rosbridge_test_msgs__srv__TestMultipleResponseFields_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
rosbridge_test_msgs__srv__TestMultipleResponseFields_Response__Sequence *
rosbridge_test_msgs__srv__TestMultipleResponseFields_Response__Sequence__create(size_t size);

/// Destroy array of srv/TestMultipleResponseFields messages.
/**
 * It calls
 * rosbridge_test_msgs__srv__TestMultipleResponseFields_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__srv__TestMultipleResponseFields_Response__Sequence__destroy(rosbridge_test_msgs__srv__TestMultipleResponseFields_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // ROSBRIDGE_TEST_MSGS__SRV__TEST_MULTIPLE_RESPONSE_FIELDS__FUNCTIONS_H_
