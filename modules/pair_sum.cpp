//
// Created by AnasJ on 24/07/2025.
//

#include "pair_sum.h"

#include <vector>

std::vector<int> pair_sum(std::vector<int> arr, int target) {
    std::vector<int> result;
    int left = 0, right = arr.size() - 1;

    while (left < right) {
        if (int current_sum = arr[left] + arr[right]; current_sum == target) {
            result.push_back(arr[left]);
            result.push_back(arr[right]);
            return result; // Return the first pair found
        } else if (current_sum < target) {
            left++;
        } else {
            right--;
        }
    }

    return result; // Return empty if no pair found
}
