cmake_minimum_required (VERSION 3.5.1)
project(make_example)

# FILE(GLOB MyCSources *.c)

add_executable(calc compute.c input.c main.c)