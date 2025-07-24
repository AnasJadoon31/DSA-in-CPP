//
// Created by AnasJ on 16/07/2025.
//
#include "reverse_array.h"

#include <filesystem>
#include <iostream>

void reverse_array(int arr[], int const array_size)
{
    int start = 0, end = array_size - 1;
    while (start < end)
    {
        std::swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void reverse_vector(std::vector<int>& vec)
{
    int start = 0, end = static_cast<int>(vec.size()) - 1;
    while (start < end)
    {
        std::swap(vec[start], vec[end]);
        start++;
        end--;
    }
    std::cout << "Reversed vector: ";
    for (int const val : vec)
    {
        std::cout << val << " ";
    }
}
