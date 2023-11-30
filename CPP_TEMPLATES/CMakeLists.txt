cmake_minimum_required(VERSION 3.21)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_EXPORT_COMPILE_COMMANDS True)

project(CPP_TEMPLATES CXX)

add_executable(max ${CMAKE_CURRENT_SOURCE_DIR}/basics/max.cpp)
target_include_directories(max PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/basics)

add_executable(appendixB appendixB.cpp)

add_executable(max2 ${CMAKE_CURRENT_SOURCE_DIR}/basics/max2.cpp)

add_executable(max3 ${CMAKE_CURRENT_SOURCE_DIR}/basics/max3.cpp)

add_executable(max3a ${CMAKE_CURRENT_SOURCE_DIR}/basics/max3a.cpp)
