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
        modules/max_min_in_array.h
        handlers.h
        handlers.cpp
        modules/linear_search.h
        modules/linear_search.cpp
        modules/reverse_array.cpp
        modules/reverse_array.h
        modules/single_element_vector.cpp
        modules/single_element_vector.h
        modules/sum_and_product_of_array.cpp
        modules/sum_and_product_of_array.h
        modules/max_min_swap_in_array.cpp
        modules/max_min_swap_in_array.h
        modules/unique_array_value.cpp
        modules/unique_array_value.h
        modules/two_array_intersection.cpp
        modules/two_array_intersection.h
        modules/student.cpp
        modules/subarrays.cpp
        modules/subarrays.h
        modules/student.h
        modules/pair_sum.cpp
        modules/pair_sum.h
        modules/moorse_algorithm.cpp
        modules/moorse_algorithm.h)
