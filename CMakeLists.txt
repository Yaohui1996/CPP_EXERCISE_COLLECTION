cmake_minimum_required(VERSION 3.5)

project(CPP_Primer_5th_Exercise)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_FLAGS_DEBUG "-O0 -g -std=c++11")
set(CMAKE_CXX_FLAGS_RELEASE "-Wall -O3 -g -std=c++11")

add_subdirectory(Chapter-01)
add_subdirectory(Chapter-02)
add_subdirectory(Chapter-03)
add_subdirectory(Chapter-04)
add_subdirectory(Chapter-05)
add_subdirectory(Chapter-06)
add_subdirectory(Chapter-07)
add_subdirectory(Chapter-08)
add_subdirectory(Chapter-09)
add_subdirectory(Chapter-12)
add_subdirectory(Chapter-13)
