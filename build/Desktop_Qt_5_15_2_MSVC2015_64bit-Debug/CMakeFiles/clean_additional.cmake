# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\CameraCapture_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\CameraCapture_autogen.dir\\ParseCache.txt"
  "CameraCapture_autogen"
  )
endif()
