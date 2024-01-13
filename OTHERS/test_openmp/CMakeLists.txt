cmake_minimum_required(VERSION 3.21)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_EXPORT_COMPILE_COMMANDS True)
project(TEST-OMP CXX)

find_package(OpenMP COMPONENTS REQUIRED)

add_executable(omp_multi_thread test_omp.cpp)
target_link_libraries(omp_multi_thread PRIVATE OpenMP::OpenMP_CXX)
