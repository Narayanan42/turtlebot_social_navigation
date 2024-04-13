# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_turtlebot_simulations_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED turtlebot_simulations_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(turtlebot_simulations_FOUND FALSE)
  elseif(NOT turtlebot_simulations_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(turtlebot_simulations_FOUND FALSE)
  endif()
  return()
endif()
set(_turtlebot_simulations_CONFIG_INCLUDED TRUE)

# output package information
if(NOT turtlebot_simulations_FIND_QUIETLY)
  message(STATUS "Found turtlebot_simulations: 2.2.3 (${turtlebot_simulations_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'turtlebot_simulations' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${turtlebot_simulations_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(turtlebot_simulations_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${turtlebot_simulations_DIR}/${_extra}")
endforeach()