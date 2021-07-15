cmake_minimum_required(VERSION 3.5)

project(CPP_Primer_5th_Exercise)

option(CPP_Primer_5th_Exercise_DEBUG "debug." ON)

if(CPP_Primer_5th_Exercise_DEBUG)
    message("当前处于Debug模式")
    set(CMAKE_BUILD_TYPE Debug)
    set(CMAKE_CXX_FLAGS "-Wall -Wextra -O0 -std=c++11")
else()
    message("当前处于Release模式")
    set(CMAKE_BUILD_TYPE Release)
    set(CMAKE_CXX_FLAGS "-Wall -Wextra -O2 -std=c++11")
endif()

# add_subdirectory(Chapter1)
# add_subdirectory(Chapter2)
# add_subdirectory(Chapter3)
# add_subdirectory(Chapter4)
# add_subdirectory(Chapter5)
# add_subdirectory(Chapter6)
# add_subdirectory(Chapter7)
# add_subdirectory(Chapter8)
# add_subdirectory(Chapter9)

# add_subdirectory(Chapter12)
# add_subdirectory(Chapter13)

add_library(cpp_primer_library STATIC 
    src/fact.cpp
)

target_include_directories(cpp_primer_library
    PUBLIC 
        ${PROJECT_SOURCE_DIR}/include
)

add_executable(Chapter_1 src/chapter_1.cpp)

target_link_libraries(Chapter_1
    PRIVATE 
        cpp_primer_library
)