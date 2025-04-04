// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from uuv_world_ros_plugins_msgs:srv/SetCurrentModel.idl
// generated code does not contain a copyright notice
#include "uuv_world_ros_plugins_msgs/srv/detail/set_current_model__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Request__init(uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Request * msg)
{
  if (!msg) {
    return false;
  }
  // mean
  // min
  // max
  // noise
  // mu
  return true;
}

void
uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Request__fini(uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Request * msg)
{
  if (!msg) {
    return;
  }
  // mean
  // min
  // max
  // noise
  // mu
}

bool
uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Request__are_equal(const uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Request * lhs, const uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mean
  if (lhs->mean != rhs->mean) {
    return false;
  }
  // min
  if (lhs->min != rhs->min) {
    return false;
  }
  // max
  if (lhs->max != rhs->max) {
    return false;
  }
  // noise
  if (lhs->noise != rhs->noise) {
    return false;
  }
  // mu
  if (lhs->mu != rhs->mu) {
    return false;
  }
  return true;
}

bool
uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Request__copy(
  const uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Request * input,
  uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // mean
  output->mean = input->mean;
  // min
  output->min = input->min;
  // max
  output->max = input->max;
  // noise
  output->noise = input->noise;
  // mu
  output->mu = input->mu;
  return true;
}

uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Request *
uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Request * msg = (uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Request *)allocator.allocate(sizeof(uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Request));
  bool success = uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Request__destroy(uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Request__Sequence__init(uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Request * data = NULL;

  if (size) {
    data = (uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Request *)allocator.zero_allocate(size, sizeof(uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Request__fini(&data[i - 1]);
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
uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Request__Sequence__fini(uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Request__Sequence * array)
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
      uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Request__fini(&array->data[i]);
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

uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Request__Sequence *
uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Request__Sequence * array = (uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Request__Sequence *)allocator.allocate(sizeof(uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Request__Sequence__destroy(uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Request__Sequence__are_equal(const uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Request__Sequence * lhs, const uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Request__Sequence__copy(
  const uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Request__Sequence * input,
  uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Request * data =
      (uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Response__init(uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Response__fini(uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Response__are_equal(const uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Response * lhs, const uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Response__copy(
  const uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Response * input,
  uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Response *
uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Response * msg = (uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Response *)allocator.allocate(sizeof(uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Response));
  bool success = uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Response__destroy(uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Response__Sequence__init(uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Response * data = NULL;

  if (size) {
    data = (uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Response *)allocator.zero_allocate(size, sizeof(uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Response__fini(&data[i - 1]);
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
uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Response__Sequence__fini(uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Response__Sequence * array)
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
      uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Response__fini(&array->data[i]);
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

uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Response__Sequence *
uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Response__Sequence * array = (uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Response__Sequence *)allocator.allocate(sizeof(uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Response__Sequence__destroy(uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Response__Sequence__are_equal(const uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Response__Sequence * lhs, const uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Response__Sequence__copy(
  const uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Response__Sequence * input,
  uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Response * data =
      (uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
