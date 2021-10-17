project(06-09)
add_executable(06-09 factMain.cc fact.cc)
target_include_directories(06-09 PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/Chapter6.h)
