cmake_minimum_required(VERSION 3.21)

project(DRAFTS-C C)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_STANDARD 99)


add_executable(hello-world helloworld.c)
add_executable(print-format print_format.c)
add_executable(test_negative_65 test_negative_65.c)
