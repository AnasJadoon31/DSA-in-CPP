//
// Created by AnasJ on 21/07/2025.
//

#include "subarrays.h"
#include <iostream>

void print_subarrays(int const arr[], int const arr_size)
{
    for (int start = 0; start < arr_size; start++)
    {
        for (int end = start; end < arr_size; end++)
        {
            std::cout << "Subarray from index " << start << " to " << end << ": ";
            for (int i = start; i <= end; i++)
            {
                std::cout << arr[i] << " ";
            }
            std::cout << std::endl;
        }
    }
    std::cout << "Total subarrays: " << (arr_size * (arr_size + 1)) / 2 << std::endl;
}

int maximum_subarray_sum(int const arr[], int const arr_size)
{
    int max_sum = INT_MIN;
    for (int start = 0; start < arr_size; start++)
    {
        int current_sum = 0;
        for (int end = start; end < arr_size; end++)
        {
            current_sum += arr[end];
            max_sum = std::max(max_sum, current_sum);
        }
    }
    return max_sum;
}

/// Most Optimized for getting a maximum subarray sum if the array contains both positive and negative numbers
/// Won't work if the array contains only negative numbers
int kadane_algorithm(int const arr[], int const arr_size)
{
    //Initialize to the smallest possible integer, this will ensure that we can handle arrays with all negative numbers
    int max_sum = INT_MIN;
    for (int start = 0; start < arr_size; start++)
    {
        int current_sum = 0;
        for (int end = start; end < arr_size; end++)
        {
            current_sum = arr[end];
            max_sum = std::max(max_sum, current_sum);
            if (current_sum < 0)
                current_sum = 0; // Reset the current sum if it goes negative
        }
    }
    return max_sum;
}
