cmake_minimum_required(VERSION 3.17)
project(parcialis C)

set(CMAKE_C_STANDARD 99)

add_executable(parcialis main.c queue.c queue.h linked_list.c linked_list.h)