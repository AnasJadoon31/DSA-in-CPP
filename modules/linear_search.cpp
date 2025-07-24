//
// Created by AnasJ on 16/07/2025.
//
#include "linear_search.h"

#include <vector>

int linear_search(int const arr[], int arr_size, int target)
{
    for (int i = 0; i < arr_size; i++)
    {
        if (arr[i] == target)
        {
            return i; // Return the index if the target is found
        }
    }
    return -1;
}

int linear_search_vector(const std::vector<int>& vec, int const target)
{
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == target)
        {
            return i; // Return the index if the target is found
        }
    }
    return -1; // Return -1 if the target is not found
}
