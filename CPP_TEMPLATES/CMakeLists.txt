cmake_minimum_required(VERSION 3.21)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_EXPORT_COMPILE_COMMANDS True)

project(CPP_TEMPLATES CXX)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/basics/max.cpp)

add_executable(max ${CMAKE_CURRENT_SOURCE_DIR}/basics/max.cpp)

add_executable(test-max ${CMAKE_CURRENT_SOURCE_DIR}/basics/test_max.cpp)

add_executable(appendixB appendixB.cpp)

add_executable(max2 ${CMAKE_CURRENT_SOURCE_DIR}/basics/max2.cpp)

add_executable(max3 ${CMAKE_CURRENT_SOURCE_DIR}/basics/max3.cpp)

add_executable(max3a ${CMAKE_CURRENT_SOURCE_DIR}/basics/max3a.cpp)

add_executable(max4 ${CMAKE_CURRENT_SOURCE_DIR}/basics/max4.cpp)

add_executable(stack1test ${CMAKE_CURRENT_SOURCE_DIR}/basics/stack1test.cpp)


add_executable(stack2test ${CMAKE_CURRENT_SOURCE_DIR}/basics/stack2test.cpp)

add_executable(stack3test ${CMAKE_CURRENT_SOURCE_DIR}/basics/stack3test.cpp)

add_executable(stack4test ${CMAKE_CURRENT_SOURCE_DIR}/basics/stack4test.cpp)

add_executable(printcolltest ${CMAKE_CURRENT_SOURCE_DIR}/basics/printcolltest.cpp)

