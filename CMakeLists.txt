cmake_minimum_required(VERSION 3.30)
project(ArrayDemo C)

set(CMAKE_C_STANDARD 23)

add_executable(ArrayDemo main.c
        arraytools.c
        arraytools.h
)
