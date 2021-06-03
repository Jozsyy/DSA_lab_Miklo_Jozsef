cmake_minimum_required(VERSION 3.17)
project(linked_list_szavak C)

set(CMAKE_C_STANDARD 99)

add_executable(linked_list_szavak main.c linked_list.c linked_list.h)