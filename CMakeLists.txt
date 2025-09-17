cmake_minimum_required(VERSION 3.12)
project(oop_01)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(oop_01_main
    src/time_converter.cpp
    main.cpp
)

enable_testing()
find_package(GTest REQUIRED)

add_executable(oop_01_test
    src/time_converter.cpp
    test/test_time_converter.cpp
)

target_link_libraries(oop_01_test GTest::gtest GTest::gtest_main)
add_test(NAME OOP01Test COMMAND oop_01_test)
