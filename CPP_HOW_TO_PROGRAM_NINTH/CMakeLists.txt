cmake_minimum_required(VERSION 3.21)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_EXPORT_COMPILE_COMMANDS True)

project(CPP_HOW_TO_PROGRAM_NINTH CXX)

add_library(GRADE_BOOK_LIB STATIC source/GradeBook.cpp)
target_include_directories(GRADE_BOOK_LIB PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_executable(GRADE_BOOK_EXE source/GradeBookMain.cpp)
target_include_directories(GRADE_BOOK_EXE PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(GRADE_BOOK_EXE GRADE_BOOK_LIB)

add_library(ACCOUNT_LIB STATIC source/Account.cpp)
target_include_directories(ACCOUNT_LIB PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_executable(ACCOUNT_EXE source/GradeBookMain.cpp)
target_include_directories(ACCOUNT_EXE PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(ACCOUNT_EXE ACCOUNT_LIB)



