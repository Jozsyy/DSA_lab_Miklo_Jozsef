cmake_minimum_required(VERSION 3.17)
project(Queue C)

set(CMAKE_C_STANDARD 99)

add_executable(Queue main.c functions.c functions.h)