cmake_minimum_required(VERSION 3.21)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_EXPORT_COMPILE_COMMANDS True)

project(CPP_CONCURRENCY_IN_ACTION_SECOND_EDITION CXX)


add_executable(code-1.1 code-1.1.cpp)
add_executable(code-2.1 code-2.1.cpp)
add_executable(code-2.2 code-2.2.cpp)
add_executable(code-2.3 code-2.3.cpp)
