# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\Qt_DLLmaker_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Qt_DLLmaker_autogen.dir\\ParseCache.txt"
  "Qt_DLLmaker_autogen"
  )
endif()
