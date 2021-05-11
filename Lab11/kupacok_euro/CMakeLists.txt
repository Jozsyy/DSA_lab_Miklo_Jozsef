cmake_minimum_required(VERSION 3.17)
project(kupacok_euro C)

set(CMAKE_C_STANDARD 99)

add_executable(kupacok_euro main.c heap.c heap.h linked_list.c linked_list.h)