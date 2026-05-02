cmake_minimum_required(VERSION 4.2)
project(HashmapV2 C)

set(CMAKE_C_STANDARD 23)

add_library(HashmapV2 STATIC hashmap.c)
