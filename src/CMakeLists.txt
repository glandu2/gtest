cmake_minimum_required(VERSION 2.8.12)

set(SOURCE_FILES
  gtest.cc
  gtest-death-test.cc
  gtest-filepath.cc
  gtest-port.cc
  gtest-printers.cc
  gtest-test-part.cc
  gtest-typed-test.cc

  ../include/gtest/global.h
  ../include/gtest/gtest-death-test.h
  ../include/gtest/gtest.h
  ../include/gtest/gtest-message.h
  ../include/gtest/gtest-param-test.h
  ../include/gtest/gtest_pred_impl.h
  ../include/gtest/gtest-printers.h
  ../include/gtest/gtest_prod.h
  ../include/gtest/gtest-spi.h
  ../include/gtest/gtest-test-part.h
  ../include/gtest/gtest-typed-test.h
)

add_library(${TARGET_NAME} ${SOURCE_FILES})
target_include_directories(${TARGET_NAME} PUBLIC "../include" PRIVATE "../")
if(BUILD_SHARED_LIBS)
  target_compile_definitions(${TARGET_NAME}
    PRIVATE GTEST_CREATE_SHARED_LIBRARY
    INTERFACE GTEST_LINKED_AS_SHARED_LIBRARY
  )
endif()
