cmake_minimum_required(VERSION 3.26)
project(lab_15 C)

set(CMAKE_C_STANDARD 11)

add_executable(lab_15 main.c
        libs/data_structures/matrix/matrix.h
        libs/data_structures/matrix/matrix.c
        lab16_solutions.c
        libs/util/util.h
        libs/util/util.c)
