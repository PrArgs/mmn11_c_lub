cmake_minimum_required(VERSION 3.21)
project(tmp C)

set(CMAKE_C_STANDARD 90)

include_directories(.)

add_executable(tmp
        my_set.c
        my_set.h)