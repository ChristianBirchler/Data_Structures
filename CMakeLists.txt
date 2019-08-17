cmake_minimum_required(VERSION 3.14)
project(DS C)

set(CMAKE_C_STANDARD 99)

add_executable(DS main.c singly_linked_list.c singly_linked_list.h stack.c stack.h)