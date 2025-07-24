#include <iostream>

#include "handlers.h"

int main() {
    std::cout << "Welcome to the DSA series!" << std::endl;
    std::cout << "Please select a task to perform:" << std::endl;
    std::cout << "1. Sum of digits" << std::endl;
    std::cout << "2. nCr" << std::endl;
    std::cout << "3. Prime Number Checking" << std::endl;
    std::cout << "4. Prime List" << std::endl;
    std::cout << "5. Fibonacci" << std::endl;
    std::cout << "6. Decimal to Binary" << std::endl;
    std::cout << "7. Binary to Decimal" << std::endl;
    std::cout << "8. Binary Operations" << std::endl;
    std::cout << "9. Reverse Integer" << std::endl;
    std::cout << "10. Find if number is power of 2" << std::endl;
    std::cout << "11. Max and Min in Array" << std::endl;
    std::cout << "12. Linear Search in Array" << std::endl;
    std::cout << "13. Reverse the Array" << std::endl;
    std::cout << "14. Single Element Vector" << std::endl;
    std::cout << "15. Sum and Product of Array" << std::endl;
    std::cout << "16. Swap Max and Min of Array" << std::endl;
    std::cout << "17. Unique Array Values" << std::endl;
    std::cout << "18. Two Array Intersection" << std::endl;
    std::cout << "19. Linear Search in Vector" << std::endl;
    std::cout << "20. Reverse Vector" << std::endl;
    std::cout << "21. Print all subarrays" << std::endl;
    std::cout << "22. Student Question" << std::endl;
    std::cout << "23. Maximum subarray sum" << std::endl;
    std::cout << "24. Pair Sum" << std::endl;
    std::cout << "25. Majority Element (Moorse Algorithm)" << std::endl;


    int task;
    std::cin >> task;
    switch (task) {
        case 1:
            handle_sum_of_digits();
            break;
        case 2:
            handle_calculate_nCr();
            break;
        case 3:
            handle_prime_number_checking();
            break;
        case 4:
            handle_prime_list();
            break;
        case 5:
            handle_fib();
            break;
        case 6:
            handle_decimal_to_binary();
            break;
        case 7:
            handle_binary_to_decimal();
            break;
        case 8:
            handle_bitwise_operations();
            break;
        case 9:
            handle_reverse_integer();
            break;
        case 10:
            handle_power_of_two();
            break;
        case 11:
            handle_max_min_in_array();
            break;
        case 12:
            handle_linear_search();
            break;
        case 13:
            handle_reverse_array();
            break;
        case 14:
            handle_single_element_vector();
            break;
        case 15:
            handle_sum_and_product_of_array();
            break;
        case 16:
            handle_max_min_swap_in_array();
            break;
        case 17:
            handle_unique_array_values();
            break;
        case 18:
            handle_two_array_intersection();
            break;
        case 19:
            handle_linear_search_vector();
            break;
        case 20:
            handle_reverse_vector();
            break;
        case 21:
            handle_print_all_subarrays();
            break;
        case 22:
            handle_student_question();
            break;
        case 23:
            handle_maximum_subarray_sum();
            break;
        case 24:
            handle_pair_sum();
            break;
        case 25:
            handle_moorse_algorithm();
            break;
        default:
            std::cout << "Invalid task" << std::endl;
            break;
    }
}
