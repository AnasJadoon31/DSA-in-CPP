//
// Created by AnasJ on 24/07/2025.
//

#include "moorse_algorithm.h"

/**
 * Finds the majority element in the given array using the Moore's Voting Algorithm.
 * The majority element is the element that appears more than floor(n/2) times,
 * where n is the size of the input array. Assumes the array always has a majority element.
 *
 * @param arr A vector of integers, representing the input array.
 *            It is expected to have at least one majority element.
 * @return The majority element present in the provided array.
 */

int moorse_algorithm(std::vector<int> arr) {
    int frequency = 0;
    int answer = arr[0];

    for (int const i : arr) {
        if (frequency == 0) answer = i;
        if (answer == i) frequency++;
        else frequency--;
    }
    return answer;
}
