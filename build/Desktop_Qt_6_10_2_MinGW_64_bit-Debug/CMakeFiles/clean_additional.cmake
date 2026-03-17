# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Practica2_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Practica2_autogen.dir\\ParseCache.txt"
  "Practica2_autogen"
  )
endif()
