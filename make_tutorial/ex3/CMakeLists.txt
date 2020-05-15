cmake_minimum_required (VERSION 3.5.1)
project(make_example)

add_subdirectory(compute)
add_subdirectory(input)

include_directories(compute)
include_directories(input)

add_executable(calc main.c)
target_link_libraries(calc compute input)

add_executable(calc2 main2.c)
target_link_libraries(calc2 compute input)
