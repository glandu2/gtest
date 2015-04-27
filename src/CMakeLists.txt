cmake_minimum_required(VERSION 2.8)

set(SOURCE_FILES
  gtest-all.cc
  ../include/gtest.h
  ../include/global.h
)

add_library(${TARGET_NAME} ${SOURCE_FILES})
