cmake_minimum_required(VERSION 3.24)
project(HEAP C)

set(CMAKE_C_STANDARD 11)

add_executable(HEAP main.c Heap.h Heap.c)
