cmake_minimum_required(VERSION 3.21)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_EXPORT_COMPILE_COMMANDS True)

project(OPENMP_EXE CXX)

# # include dir
# include_directories(${CMAKE_CURRENT_SOURCE_DIR})


# add library
# file(GLOB_RECURSE SRC_LIST ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)
# add_library(LEETCODE_SOLUTION STATIC ${SRC_LIST})



add_executable(fig1-1 fig1-1.cpp)

# # OpenMP 
# find_package(OpenMP)
# if(OpenMP_CXX_FOUND)
#     message("OPENMP FOUND")
#     target_link_libraries(fig1-1 PUBLIC OpenMP::OpenMP_CXX ${OpenCV_LIBS})
# endif()
