cmake_minimum_required(VERSION 3.31)
project(embeddedEnvironment)

set(CMAKE_CXX_STANDARD 20)

add_executable(embeddedEnvironment main.cpp
        modules/ncr.cpp
        modules/ncr.h
        modules/sod.h
        modules/sod.cpp
        modules/prime.h
        modules/prime.cpp
        modules/fib.h
        modules/fib.cpp
        modules/decimal_to_binary.h
        modules/decimal_to_binary.cpp
        modules/binary_to_decimal.h
        modules/binary_to_decimal.cpp
        modules/reverse_integer.cpp
        modules/reverse_integer.h
        modules/power_of_two.cpp
        modules/power_of_two.h
        modules/max_min_in_array.cpp
        modules/max_min_in_array.h)
