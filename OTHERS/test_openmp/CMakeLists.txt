cmake_minimum_required(VERSION 3.21)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_EXPORT_COMPILE_COMMANDS True)
project(TEST_OMP CXX)

find_package(OpenMP REQUIRED)
message(STATUS "OpenMP libraries: ${OpenMP_CXX_LIBRARIES}")  # 检查 CMake 找到的库路径

# 手动覆盖库路径（适用于 macOS）
if(CMAKE_HOST_APPLE AND OpenMP_CXX_FOUND)
    add_executable(omp_multi_thread test_omp.cpp)
    target_link_libraries(omp_multi_thread PRIVATE OpenMP::OpenMP_CXX)
endif()
