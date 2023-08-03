cmake_minimum_required(VERSION 3.26)
project(hw2 C)

set(CMAKE_C_STANDARD 17)

add_executable(hw2 source/scheduler.c
        source/user.c)
