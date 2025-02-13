cmake_minimum_required(VERSION 3.10)
set(CMAKE_C_STANDARD 23)
set(CMAKE_C_STANDARD_REQUIRED ON)

include_directories(.)
project(lox VERSION 1.0)
add_executable(lox main.c debug.c chunk.c memory.c value.c vm.c)
