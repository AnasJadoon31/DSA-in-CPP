//
// Created by AnasJ on 16/07/2025.
//
#include "sum_and_product_of_array.h"
#include <iostream>

void sum_and_product_of_array(int const arr[], int const arr_size)
{
    int sum = 0, product = 1;

    for (int i = 0; i < arr_size; i++)
    {
        sum += arr[i];
        product *= arr[i];
    }
    std::cout << "Sum of array elements: " << sum << std::endl;
    std::cout << "Product of array elements: " << product << std::endl;
}
