//
// Created by AnasJ on 16/07/2025.
//

#include "unique_array_value.h"

#include <iostream>

void unique_array_value(int const arr[], int const arr_size)
{
    int unique_count = 0;
    for (int i = 0; i < arr_size; i++)
    {
        bool is_unique = true;
        for (int j = 0; j < arr_size; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                is_unique = false;
                break;
            }
        }
        if (is_unique)
        {
            std::cout << arr[i] << " ";
            unique_count++;
        }
    }
    if (unique_count == 0)
    {
        std::cout << "No unique values found." << std::endl;
    }
}
