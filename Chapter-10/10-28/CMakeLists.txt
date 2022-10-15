project(10-28)
add_executable(10-28 10-28.cpp)
target_link_libraries(10-28 PUBLIC Utils)
target_include_directories(10-28 PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../../utils/include)
