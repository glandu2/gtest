cmake_minimum_required(VERSION 2.8)
project(gtest)

set(TARGET_NAME gtest)

if(BUILD_SHARED_LIBS)
  add_definitions(-DGTEST_CREATE_SHARED_LIBRARY=1)
endif()

set(GTEST_INCLUDE "${CMAKE_CURRENT_LIST_DIR}/include" CACHE STRING "gtest include directory")
include_directories("${CMAKE_CURRENT_LIST_DIR}/include")
add_subdirectory("${CMAKE_CURRENT_LIST_DIR}/src" src)
