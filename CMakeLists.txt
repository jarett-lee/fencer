
cmake_minimum_required (VERSION 2.6)

project (Fencer)
set (Fencer_VERSION_MAJOR 0)
set (Fencer_VERSION_MINOR 0)
set (Fencer_VERSION_PATCH 0)

# header file to pass CMake settings to the source code
configure_file (
  "${PROJECT_SOURCE_DIR}/FencerConfig.h.in"
  "${PROJECT_BINARY_DIR}/FencerConfig.h"
  )

include_directories("${PROJECT_BINARY_DIR}")

# add the executable
add_executable(Fencer fencer.cxx)
