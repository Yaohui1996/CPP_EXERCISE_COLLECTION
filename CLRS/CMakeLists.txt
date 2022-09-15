cmake_minimum_required(VERSION 3.16)
project(CLRS CXX)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
add_library(Graph STATIC ${CMAKE_CURRENT_SOURCE_DIR}/src/Graph.cpp)
target_include_directories(Graph PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_executable(test_graph test_graph.cpp)
target_link_libraries(test_graph PUBLIC Graph)

add_library(SortAlgorithm STATIC ${CMAKE_CURRENT_SOURCE_DIR}/src/SortAlgorithm.cpp)
target_include_directories(SortAlgorithm PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_executable(test_sort test_sort.cpp)
target_link_libraries(test_sort PUBLIC SortAlgorithm Utils)
target_include_directories(test_sort PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../utils/include)
