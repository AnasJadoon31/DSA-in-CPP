//
// Created by AnasJ on 15/07/2025.
//
#include "max_min_in_array.h"

#include <iostream>

void max_min_in_array(int const arr[], int const arr_size) {
    int max = arr[0];
    int min = arr[0];
    int indexMax = 0;
    int indexMin = 0;
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
    std::cout << "Max is " << max << " found at index: " << indexMax << std::endl;
    std::cout << "Min is " << min << " found at index: " << indexMin << std::endl;

}

void min_in_array(int const arr[], int const arr_size) {
    int min = arr[0];
    int index = 0;
    for (int i = 0; i < arr_size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            index = i;
        }
    }

}