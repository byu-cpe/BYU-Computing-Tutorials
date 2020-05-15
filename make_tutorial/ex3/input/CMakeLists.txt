FILE(GLOB MyCSources *.c)

include_directories(../compute)
add_library(input ${MyCSources})