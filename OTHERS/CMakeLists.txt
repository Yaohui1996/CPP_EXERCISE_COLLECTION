cmake_minimum_required(VERSION 3.21)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_EXPORT_COMPILE_COMMANDS True)
project(OTHERS CXX)

add_subdirectory(test_openmp)

add_executable(test_std_any test_std_any.cpp)
add_executable(multi_thread multi_thread.cpp)
add_executable(txt2asci txt2asci.cpp)
add_executable(asci2txt asci2txt.cpp)
add_executable(test-df test_df.cpp)
add_executable(push-relabel PushRelabel.cpp)
