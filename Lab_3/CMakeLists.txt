cmake_minimum_required(VERSION 3.10)

project(test VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(
    "${CMAKE_CURRENT_SOURCE_DIR}/googletest"
    "googletest"
)

include_directories(${PROJECT_SOURCE_DIR}/include)

set(
    TEST_SOURCES
    tests/main_test.cpp
    tests/Pentagon_test.cpp
    tests/Rhombus_test.cpp
    tests/Trapezoid_test.cpp
    include/Figure.h
    include/Rhombus.h
    include/Trapezoid.h
    include/Pentagon.h
    src/Trapezoid.cpp
    src/Rhombus.cpp
    src/Pentagon.cpp
)

add_executable(
    tests
    ${TEST_SOURCES}
)

target_include_directories(
    tests PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/src"
    "${CMAKE_CURRENT_SOURCE_DIR}/googletest/googletest/include"
)

target_link_libraries(
    tests
    gtest 
    gtest_main
)

enable_testing()

add_test(NAME Rhombus_test COMMAND tests)
add_test(NAME Pentagon_test COMMAND tests)
add_test(NAME Trapezoid_test COMMAND tests)
add_test(NAME FigureTest COMMAND tests)


target_compile_options(
    tests PRIVATE
    -Wall
    -pedantic
)