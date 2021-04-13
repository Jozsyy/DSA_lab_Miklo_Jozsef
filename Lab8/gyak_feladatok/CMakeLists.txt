cmake_minimum_required(VERSION 3.17)
project(gyak_feladatok C)

set(CMAKE_C_STANDARD 99)

add_executable(gyak_feladatok main.c tomb.c tomb.h stack.c stack.h linked_list.c linked_list.h)