# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_inference_webcam_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED inference_webcam_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(inference_webcam_FOUND FALSE)
  elseif(NOT inference_webcam_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(inference_webcam_FOUND FALSE)
  endif()
  return()
endif()
set(_inference_webcam_CONFIG_INCLUDED TRUE)

# output package information
if(NOT inference_webcam_FIND_QUIETLY)
  message(STATUS "Found inference_webcam: 0.0.0 (${inference_webcam_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'inference_webcam' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(inference_webcam_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${inference_webcam_DIR}/${_extra}")
endforeach()
