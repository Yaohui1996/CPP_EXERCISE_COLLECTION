cmake_minimum_required(VERSION 3.21)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_EXPORT_COMPILE_COMMANDS True)

project(CPP_Primer_5th_Exercise CXX)

add_library(PrintUtils STATIC ${CMAKE_CURRENT_SOURCE_DIR}/Utils/src/PrintUtils.cpp)
target_include_directories(PrintUtils PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/Utils/include)

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
add_subdirectory(Chapter-15)
add_subdirectory(BookStoreProgram)


add_executable(draft-12-01 Drafts/draft-12-01.cpp)
target_include_directories(draft-12-01 PUBLIC Headers)

add_executable(ex-01-01 Exercise/01-01.cpp)
add_executable(ex-01-02 Exercise/01-02.cpp)
add_executable(ex-01-03 Exercise/01-03.cpp)
add_executable(ex-01-04 Exercise/01-04.cpp)
add_executable(ex-01-05 Exercise/01-05.cpp)
add_executable(ex-01-06 Exercise/01-06.cpp)
add_executable(ex-01-07 Exercise/01-07.cpp)
add_executable(ex-01-08 Exercise/01-08.cpp)
add_executable(ex-01-09 Exercise/01-09.cpp)
add_executable(ex-01-10 Exercise/01-10.cpp)
add_executable(ex-01-11 Exercise/01-11.cpp)
add_executable(ex-01-12 Exercise/01-12.cpp)
add_executable(ex-01-13 Exercise/01-13.cpp)
add_executable(ex-01-14 Exercise/01-14.cpp)
add_executable(ex-01-15 Exercise/01-15.cpp)
add_executable(ex-01-16 Exercise/01-16.cpp)
add_executable(ex-01-17 Exercise/01-17.cpp)
add_executable(ex-01-18 Exercise/01-18.cpp)
add_executable(ex-01-19 Exercise/01-19.cpp)
add_executable(ex-01-20 Exercise/01-20.cpp)
target_include_directories(ex-01-20 PUBLIC Headers)
add_executable(ex-01-21 Exercise/01-21.cpp)
target_include_directories(ex-01-21 PUBLIC Headers)
add_executable(ex-01-22 Exercise/01-22.cpp)
target_include_directories(ex-01-22 PUBLIC Headers)
add_executable(ex-01-23 Exercise/01-23.cpp)
target_include_directories(ex-01-23 PUBLIC Headers)
add_executable(ex-01-24 Exercise/01-24.cpp)
target_include_directories(ex-01-24 PUBLIC Headers)
add_executable(ex-01-25 Exercise/01-25.cpp)
target_include_directories(ex-01-25 PUBLIC Headers)

add_executable(ex-02-01 Exercise/02-01.cpp)
add_executable(ex-02-02 Exercise/02-02.cpp)
add_executable(ex-02-03 Exercise/02-03.cpp)
add_executable(ex-02-04 Exercise/02-04.cpp)
add_executable(ex-02-05 Exercise/02-05.cpp)
add_executable(ex-02-06 Exercise/02-06.cpp)
add_executable(ex-02-07 Exercise/02-07.cpp)
add_executable(ex-02-08 Exercise/02-08.cpp)
add_executable(ex-02-09 Exercise/02-09.cpp)
add_executable(ex-02-10 Exercise/02-10.cpp)
add_executable(ex-02-11 Exercise/02-11.cpp)
add_executable(ex-02-12 Exercise/02-12.cpp)
add_executable(ex-02-13 Exercise/02-13.cpp)
add_executable(ex-02-14 Exercise/02-14.cpp)
add_executable(ex-02-15 Exercise/02-15.cpp)
add_executable(ex-02-16 Exercise/02-16.cpp)
add_executable(ex-02-17 Exercise/02-17.cpp)
add_executable(ex-02-18 Exercise/02-18.cpp)
add_executable(ex-02-19 Exercise/02-19.cpp)
add_executable(ex-02-20 Exercise/02-20.cpp)
add_executable(ex-02-21 Exercise/02-21.cpp)
add_executable(ex-02-22 Exercise/02-22.cpp)
add_executable(ex-02-23 Exercise/02-23.cpp)
add_executable(ex-02-24 Exercise/02-24.cpp)
add_executable(ex-02-25 Exercise/02-25.cpp)
add_executable(ex-02-26 Exercise/02-26.cpp)
add_executable(ex-02-27 Exercise/02-27.cpp)
add_executable(ex-02-28 Exercise/02-28.cpp)
add_executable(ex-02-29 Exercise/02-29.cpp)
add_executable(ex-02-30 Exercise/02-30.cpp)
add_executable(ex-02-31 Exercise/02-31.cpp)
add_executable(ex-02-32 Exercise/02-32.cpp)
add_executable(ex-02-33 Exercise/02-33.cpp)
add_executable(ex-02-34 Exercise/02-34.cpp)
add_executable(ex-02-35 Exercise/02-35.cpp)
add_executable(ex-02-36 Exercise/02-36.cpp)
add_executable(ex-02-37 Exercise/02-37.cpp)
add_executable(ex-02-38 Exercise/02-38.cpp)
add_executable(ex-02-39 Exercise/02-39.cpp)
add_executable(ex-02-40 Exercise/02-40.cpp)
add_executable(ex-02-41 Exercise/02-41.cpp)
add_executable(ex-02-42 Exercise/02-42.cpp)

add_executable(ex-12-01 Exercise/12-01.cpp)
target_include_directories(ex-12-01 PUBLIC Headers)
add_executable(ex-12-02 Exercise/12-02.cpp)
target_include_directories(ex-12-02 PUBLIC Headers)
add_executable(ex-12-03 Exercise/12-03.cpp)
target_include_directories(ex-12-03 PUBLIC Headers)
add_executable(ex-12-04 Exercise/12-04.cpp)
add_executable(ex-12-05 Exercise/12-05.cpp)
target_include_directories(ex-12-05 PUBLIC Headers)

add_executable(ex-13-01 Exercise/13-01.cpp)
add_executable(ex-13-02 Exercise/13-02.cpp)

set(SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/source)
add_executable(exercise-01-01 ${SOURCE_DIR}/exercise_01_01.cpp)
add_executable(exercise-01-02 ${SOURCE_DIR}/exercise_01_02.cpp)
add_executable(exercise-01-03 ${SOURCE_DIR}/exercise_01_03.cpp)
add_executable(exercise-01-04 ${SOURCE_DIR}/exercise_01_04.cpp)
add_executable(exercise-01-05 ${SOURCE_DIR}/exercise_01_05.cpp)
add_executable(exercise-01-06 ${SOURCE_DIR}/exercise_01_06.cpp)
add_executable(exercise-01-07 ${SOURCE_DIR}/exercise_01_07.cpp)

add_executable(15_01 ${SOURCE_DIR}/15_01.cpp)
