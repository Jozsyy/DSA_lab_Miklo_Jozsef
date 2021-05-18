cmake_minimum_required(VERSION 3.17)
project(Hash_table C)

set(CMAKE_C_STANDARD 99)

add_executable(Hash_table main.c HashTable.c HashTable.h)