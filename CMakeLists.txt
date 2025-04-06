cmake_minimum_required(VERSION 3.21)

set(CMAKE_EXPORT_COMPILE_COMMANDS True)

message(STATUS "operating system: ${CMAKE_HOST_SYSTEM_NAME}-${CMAKE_HOST_SYSTEM_VERSION}")
if(CMAKE_HOST_WIN32)
    set(CMAKE_C_COMPILER "gcc")
    set(CMAKE_CXX_COMPILER "g++")
elseif(CMAKE_HOST_APPLE)
    # set(CMAKE_C_COMPILER "clang")
    # set(CMAKE_CXX_COMPILER "clang++")
elseif(CMAKE_HOST_UNIX)
    set(CMAKE_C_COMPILER "gcc")
    set(CMAKE_CXX_COMPILER "g++")
else()
    message(FATAL_ERROR "the operating system of this host is not supported!")
endif()


project(CPP_EXERCISE_COLLECTION)

add_subdirectory(DRAFTS)
add_subdirectory(CPP_TEMPLATES)
add_subdirectory(C_PROGRAMMING_A_MODERN_APPROACH_2ND)
add_subdirectory(OTHERS)
add_subdirectory(ACCELERATED_CPP)
add_subdirectory(PROGRAMMING_PEARLS_SECOND_EDITION)
add_subdirectory(CPP_CONCURRENCY_IN_ACTION_SECOND_EDITION)
add_subdirectory(LEETCODE)
add_subdirectory(CPP_HOW_TO_PROGRAM_NINTH)
add_subdirectory(CPP_PROGRAMMING_LANGUAGE_FOURTH)
add_subdirectory(CPP_PRIMER_FIFTH)

