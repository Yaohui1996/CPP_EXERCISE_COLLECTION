cmake_minimum_required(VERSION 3.21)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_EXPORT_COMPILE_COMMANDS True)

project(CPP_HOW_TO_PROGRAM_NINTH CXX)

# include dir
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/library/include)

# add library
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/library/source LIBRARY_SRC_FILES)
add_library(COMMON_LIB STATIC ${LIBRARY_SRC_FILES})

# add exe
set(MAIN_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/exe)

add_executable(GRADE_BOOK_EXE ${MAIN_SOURCE_DIR}/GradeBookMain.cpp)
target_link_libraries(GRADE_BOOK_EXE PRIVATE COMMON_LIB)

add_executable(ACCOUNT_EXE ${MAIN_SOURCE_DIR}/AccountMain.cpp)
target_link_libraries(ACCOUNT_EXE PRIVATE COMMON_LIB)

add_executable(INVOICE_EXE ${MAIN_SOURCE_DIR}/InvoiceMain.cpp)
target_link_libraries(INVOICE_EXE PRIVATE COMMON_LIB)

add_executable(EMLOYEE_EXE ${MAIN_SOURCE_DIR}/EmloyeeMain.cpp)
target_link_libraries(EMLOYEE_EXE PRIVATE COMMON_LIB)
