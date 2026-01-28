// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aisd_msgs:msg/Hand.idl
// generated code does not contain a copyright notice
#include "aisd_msgs/msg/detail/hand__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
aisd_msgs__msg__Hand__init(aisd_msgs__msg__Hand * msg)
{
  if (!msg) {
    return false;
  }
  // xpinky
  // xindex
  return true;
}

void
aisd_msgs__msg__Hand__fini(aisd_msgs__msg__Hand * msg)
{
  if (!msg) {
    return;
  }
  // xpinky
  // xindex
}

bool
aisd_msgs__msg__Hand__are_equal(const aisd_msgs__msg__Hand * lhs, const aisd_msgs__msg__Hand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // xpinky
  if (lhs->xpinky != rhs->xpinky) {
    return false;
  }
  // xindex
  if (lhs->xindex != rhs->xindex) {
    return false;
  }
  return true;
}

bool
aisd_msgs__msg__Hand__copy(
  const aisd_msgs__msg__Hand * input,
  aisd_msgs__msg__Hand * output)
{
  if (!input || !output) {
    return false;
  }
  // xpinky
  output->xpinky = input->xpinky;
  // xindex
  output->xindex = input->xindex;
  return true;
}

aisd_msgs__msg__Hand *
aisd_msgs__msg__Hand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aisd_msgs__msg__Hand * msg = (aisd_msgs__msg__Hand *)allocator.allocate(sizeof(aisd_msgs__msg__Hand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aisd_msgs__msg__Hand));
  bool success = aisd_msgs__msg__Hand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aisd_msgs__msg__Hand__destroy(aisd_msgs__msg__Hand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aisd_msgs__msg__Hand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aisd_msgs__msg__Hand__Sequence__init(aisd_msgs__msg__Hand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aisd_msgs__msg__Hand * data = NULL;

  if (size) {
    data = (aisd_msgs__msg__Hand *)allocator.zero_allocate(size, sizeof(aisd_msgs__msg__Hand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aisd_msgs__msg__Hand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aisd_msgs__msg__Hand__fini(&data[i - 1]);
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
aisd_msgs__msg__Hand__Sequence__fini(aisd_msgs__msg__Hand__Sequence * array)
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
      aisd_msgs__msg__Hand__fini(&array->data[i]);
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

aisd_msgs__msg__Hand__Sequence *
aisd_msgs__msg__Hand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aisd_msgs__msg__Hand__Sequence * array = (aisd_msgs__msg__Hand__Sequence *)allocator.allocate(sizeof(aisd_msgs__msg__Hand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aisd_msgs__msg__Hand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aisd_msgs__msg__Hand__Sequence__destroy(aisd_msgs__msg__Hand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aisd_msgs__msg__Hand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aisd_msgs__msg__Hand__Sequence__are_equal(const aisd_msgs__msg__Hand__Sequence * lhs, const aisd_msgs__msg__Hand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aisd_msgs__msg__Hand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aisd_msgs__msg__Hand__Sequence__copy(
  const aisd_msgs__msg__Hand__Sequence * input,
  aisd_msgs__msg__Hand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aisd_msgs__msg__Hand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aisd_msgs__msg__Hand * data =
      (aisd_msgs__msg__Hand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aisd_msgs__msg__Hand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aisd_msgs__msg__Hand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aisd_msgs__msg__Hand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
