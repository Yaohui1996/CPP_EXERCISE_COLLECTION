cmake_minimum_required(VERSION 3.16)

project(CPP_Primer_5th_Exercise CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_subdirectory(Chapter-01)
add_subdirectory(Chapter-02)
add_subdirectory(Chapter-03)
add_subdirectory(Chapter-04)
add_subdirectory(Chapter-05)
add_subdirectory(Chapter-06)
add_subdirectory(Chapter-07)
add_subdirectory(Chapter-08)
add_subdirectory(Chapter-09)
add_subdirectory(Chapter-10)
add_subdirectory(Chapter-12)
add_subdirectory(Chapter-13)
add_subdirectory(BookStoreProgram)
add_subdirectory(utils)


# add_library(Utils STATIC ${CMAKE_CURRENT_SOURCE_DIR}/utils/include/PrintUtils.h)
# target_include_directories(Utils PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include/)

