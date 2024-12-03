cmake_minimum_required(VERSION 3.10)

project(DungeonEditor VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(${PROJECT_SOURCE_DIR}/include)

set(SOURCES
    src/main.cpp
    src/NPC.cpp
    src/NPCFactory.cpp
    src/BattleVisitor.cpp
    src/Observer.cpp
    src/Princess.cpp
    src/Dragon.cpp
    src/Knight.cpp
    src/Logger.cpp
)

set(HEADERS
    include/NPC.h
    include/NPCFactory.h
    include/BattleVisitor.h
    include/Observer.h
    include/Princess.h
    include/Dragon.h
    include/Knight.h
    include/Logger.h
)

add_executable(dungeon_editor ${SOURCES} ${HEADERS})

target_compile_options(dungeon_editor PRIVATE -Wall -pedantic)

target_include_directories(dungeon_editor PRIVATE ${PROJECT_SOURCE_DIR}/include)

add_subdirectory(googletest)

enable_testing()

set(TEST_SOURCES
    tests/main_test.cpp
    tests/NPCFactoryTest.cpp
    tests/NPCTest.cpp
    tests/BattleVisitorTest.cpp
)

list(REMOVE_ITEM SOURCES src/main.cpp)

add_executable(tests ${TEST_SOURCES} ${SOURCES} ${HEADERS})

target_link_libraries(tests gtest gtest_main)

target_include_directories(tests PRIVATE ${PROJECT_SOURCE_DIR}/include ${PROJECT_SOURCE_DIR}/googletest/googletest/include)

add_test(NAME BattleVisitorTest COMMAND tests)
add_test(NAME NPCFactoryTest COMMAND tests)
add_test(NAME NPCTest COMMAND tests)