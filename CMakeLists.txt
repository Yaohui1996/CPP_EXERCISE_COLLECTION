cmake_minimum_required(VERSION 3.21)

set(CMAKE_EXPORT_COMPILE_COMMANDS True)
set(CMAKE_C_COMPILER "/opt/homebrew/bin/gcc-14")
set(CMAKE_CXX_COMPILER "/opt/homebrew/bin/g++-14")

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

