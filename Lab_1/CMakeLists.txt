cmake_minimum_required(VERSION 3.10)
project(Lab_1_OOP VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

add_subdirectory(
  "${CMAKE_CURRENT_SOURCE_DIR}/googletest"
  "googletest"
)

set(
  SOURCES
  box_capacity.h
  box_capacity.cpp
  test.cpp
)

add_executable(
  Lab_1_OOP
  ${SOURCES}
)

target_include_directories(
  Lab_1_OOP PRIVATE
  # "${CMAKE_CURRENT_SOURCE_DIR}"
  "${CMAKE_CURRENT_SOURCE_DIR}/googletest/googletest/include"
)

target_link_libraries(
  Lab_1_OOP
  gtest
  gtest_main
)

enable_testing()

add_test(NAME BoxCapacityTest COMMAND Lab_1_OOP)

target_compile_options(
  Lab_1_OOP PRIVATE
  -Wall
  -pedantic
  -O2
)