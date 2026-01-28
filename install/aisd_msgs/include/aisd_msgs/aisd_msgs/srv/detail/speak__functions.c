// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aisd_msgs:srv/Speak.idl
// generated code does not contain a copyright notice
#include "aisd_msgs/srv/detail/speak__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `words`
#include "rosidl_runtime_c/string_functions.h"

bool
aisd_msgs__srv__Speak_Request__init(aisd_msgs__srv__Speak_Request * msg)
{
  if (!msg) {
    return false;
  }
  // words
  if (!rosidl_runtime_c__String__init(&msg->words)) {
    aisd_msgs__srv__Speak_Request__fini(msg);
    return false;
  }
  return true;
}

void
aisd_msgs__srv__Speak_Request__fini(aisd_msgs__srv__Speak_Request * msg)
{
  if (!msg) {
    return;
  }
  // words
  rosidl_runtime_c__String__fini(&msg->words);
}

bool
aisd_msgs__srv__Speak_Request__are_equal(const aisd_msgs__srv__Speak_Request * lhs, const aisd_msgs__srv__Speak_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // words
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->words), &(rhs->words)))
  {
    return false;
  }
  return true;
}

bool
aisd_msgs__srv__Speak_Request__copy(
  const aisd_msgs__srv__Speak_Request * input,
  aisd_msgs__srv__Speak_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // words
  if (!rosidl_runtime_c__String__copy(
      &(input->words), &(output->words)))
  {
    return false;
  }
  return true;
}

aisd_msgs__srv__Speak_Request *
aisd_msgs__srv__Speak_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aisd_msgs__srv__Speak_Request * msg = (aisd_msgs__srv__Speak_Request *)allocator.allocate(sizeof(aisd_msgs__srv__Speak_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aisd_msgs__srv__Speak_Request));
  bool success = aisd_msgs__srv__Speak_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aisd_msgs__srv__Speak_Request__destroy(aisd_msgs__srv__Speak_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aisd_msgs__srv__Speak_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aisd_msgs__srv__Speak_Request__Sequence__init(aisd_msgs__srv__Speak_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aisd_msgs__srv__Speak_Request * data = NULL;

  if (size) {
    data = (aisd_msgs__srv__Speak_Request *)allocator.zero_allocate(size, sizeof(aisd_msgs__srv__Speak_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aisd_msgs__srv__Speak_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aisd_msgs__srv__Speak_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
aisd_msgs__srv__Speak_Request__Sequence__fini(aisd_msgs__srv__Speak_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      aisd_msgs__srv__Speak_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

aisd_msgs__srv__Speak_Request__Sequence *
aisd_msgs__srv__Speak_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aisd_msgs__srv__Speak_Request__Sequence * array = (aisd_msgs__srv__Speak_Request__Sequence *)allocator.allocate(sizeof(aisd_msgs__srv__Speak_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aisd_msgs__srv__Speak_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aisd_msgs__srv__Speak_Request__Sequence__destroy(aisd_msgs__srv__Speak_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aisd_msgs__srv__Speak_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aisd_msgs__srv__Speak_Request__Sequence__are_equal(const aisd_msgs__srv__Speak_Request__Sequence * lhs, const aisd_msgs__srv__Speak_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aisd_msgs__srv__Speak_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aisd_msgs__srv__Speak_Request__Sequence__copy(
  const aisd_msgs__srv__Speak_Request__Sequence * input,
  aisd_msgs__srv__Speak_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aisd_msgs__srv__Speak_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aisd_msgs__srv__Speak_Request * data =
      (aisd_msgs__srv__Speak_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aisd_msgs__srv__Speak_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aisd_msgs__srv__Speak_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aisd_msgs__srv__Speak_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `response`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
aisd_msgs__srv__Speak_Response__init(aisd_msgs__srv__Speak_Response * msg)
{
  if (!msg) {
    return false;
  }
  // response
  if (!rosidl_runtime_c__String__init(&msg->response)) {
    aisd_msgs__srv__Speak_Response__fini(msg);
    return false;
  }
  return true;
}

void
aisd_msgs__srv__Speak_Response__fini(aisd_msgs__srv__Speak_Response * msg)
{
  if (!msg) {
    return;
  }
  // response
  rosidl_runtime_c__String__fini(&msg->response);
}

bool
aisd_msgs__srv__Speak_Response__are_equal(const aisd_msgs__srv__Speak_Response * lhs, const aisd_msgs__srv__Speak_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // response
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
aisd_msgs__srv__Speak_Response__copy(
  const aisd_msgs__srv__Speak_Response * input,
  aisd_msgs__srv__Speak_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // response
  if (!rosidl_runtime_c__String__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

aisd_msgs__srv__Speak_Response *
aisd_msgs__srv__Speak_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aisd_msgs__srv__Speak_Response * msg = (aisd_msgs__srv__Speak_Response *)allocator.allocate(sizeof(aisd_msgs__srv__Speak_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aisd_msgs__srv__Speak_Response));
  bool success = aisd_msgs__srv__Speak_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aisd_msgs__srv__Speak_Response__destroy(aisd_msgs__srv__Speak_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aisd_msgs__srv__Speak_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aisd_msgs__srv__Speak_Response__Sequence__init(aisd_msgs__srv__Speak_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aisd_msgs__srv__Speak_Response * data = NULL;

  if (size) {
    data = (aisd_msgs__srv__Speak_Response *)allocator.zero_allocate(size, sizeof(aisd_msgs__srv__Speak_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aisd_msgs__srv__Speak_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aisd_msgs__srv__Speak_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
aisd_msgs__srv__Speak_Response__Sequence__fini(aisd_msgs__srv__Speak_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      aisd_msgs__srv__Speak_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

aisd_msgs__srv__Speak_Response__Sequence *
aisd_msgs__srv__Speak_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aisd_msgs__srv__Speak_Response__Sequence * array = (aisd_msgs__srv__Speak_Response__Sequence *)allocator.allocate(sizeof(aisd_msgs__srv__Speak_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aisd_msgs__srv__Speak_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aisd_msgs__srv__Speak_Response__Sequence__destroy(aisd_msgs__srv__Speak_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aisd_msgs__srv__Speak_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aisd_msgs__srv__Speak_Response__Sequence__are_equal(const aisd_msgs__srv__Speak_Response__Sequence * lhs, const aisd_msgs__srv__Speak_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aisd_msgs__srv__Speak_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aisd_msgs__srv__Speak_Response__Sequence__copy(
  const aisd_msgs__srv__Speak_Response__Sequence * input,
  aisd_msgs__srv__Speak_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aisd_msgs__srv__Speak_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aisd_msgs__srv__Speak_Response * data =
      (aisd_msgs__srv__Speak_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aisd_msgs__srv__Speak_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aisd_msgs__srv__Speak_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aisd_msgs__srv__Speak_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
