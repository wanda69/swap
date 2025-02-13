cmake_minimum_required(VERSION 3.30)
project(swap C)

set(CMAKE_C_STANDARD 23)

add_executable(swap swaptest.c
        swap.h
        swap.c
)
