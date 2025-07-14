cmake_minimum_required(VERSION 3.31)
project(embeddedEnvironment)

set(CMAKE_CXX_STANDARD 20)

add_executable(embeddedEnvironment main.cpp
        ncr.cpp
        ncr.h
        sod.h
        sod.cpp
        prime.h
        prime.cpp
        fib.h
        fib.cpp
        decimal_to_binary.h
        decimal_to_binary.cpp
        binary_to_decimal.h
        binary_to_decimal.cpp)
