project(BookStoreProgram)

add_executable(BookStoreProgram ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp)

target_include_directories(BookStoreProgram PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include/)
