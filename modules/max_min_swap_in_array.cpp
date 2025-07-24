//
// Created by AnasJ on 16/07/2025.
//

#include "max_min_swap_in_array.h"
#include <iostream>

void max_min_swap_in_array(int arr[], int const arr_size)
{
    int indexMax = 0;
    int indexMin = 0;
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < arr_size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            indexMax = i;
        }
        if (arr[i] < min)
        {
            min = arr[i];
            indexMin = i;
        }
    }
    std::swap(arr[indexMax], arr[indexMin]);
    std::cout << "Array after max and min swap: ";

    for (int i = 0; i < arr_size; i++)
    {
        std::cout << arr[i] << " ";
    }
}