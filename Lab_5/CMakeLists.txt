cmake_minimum_required(VERSION 3.10)

project(test VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(
    "${CMAKE_CURRENT_SOURCE_DIR}/googletest"
    "googletest"
)

# include_directories(${PROJECT_SOURCE_DIR}/include)

set(
    TEST_SOURCES
    # src/main.cpp
    tests/main_test.cpp
    tests/StackIteratorTest.cpp
    tests/StackTest.cpp
    tests/CustomMemoryResourceTest.cpp
    include/ComplexType.h
    include/Stack.h
    include/Node.h
    include/StackIterator.h
    include/CustomMemoryResource.h
    src/CustomMemoryResource.cpp
    src/StackIterator.cpp
    src/Stack.cpp
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

add_test(NAME CustomMemoryResourceTest COMMAND tests)
add_test(NAME StackTest COMMAND tests)
add_test(NAME StackIteratorTest COMMAND tests)


target_compile_options(
    tests PRIVATE
    -Wall
    -pedantic
)