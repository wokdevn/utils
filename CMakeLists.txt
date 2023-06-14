cmake_minimum_required(VERSION 3.15)
project(Util C)

set(CMAKE_C_STANDARD 99)

add_executable(Util src/main.c src/radix_convert.c head/radix_convert.h src/revert_string.c head/revert_string.h)