project(10-27)
add_executable(10-27 10-27.cpp)
target_link_libraries(10-27 PUBLIC Utils)
target_include_directories(10-27 PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../../utils/include)
