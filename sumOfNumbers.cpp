// Copyright (c) 2025 Reid MacLean All rights reserved.
//
// Created by: Reid MacLean
// Created on: March 2025
// This program calculates the sum of numbers from 0 to n

#include <cmath>
#include <iostream>

int main() {
    double user_number;

    // Ask the user to enter a positive integer
    std::cout << "Enter a positive integer: ";
    std::cin >> user_number;

    // Handle non-numeric input (e.g. "Reid")
    if (std::cin.fail()) {
        std::cin.clear();  // Clear error flags
        char bad_input[50];
        std::cin >> bad_input;
        std::cout << bad_input << " is not an integer." << std::endl;
        return 0;
    }

    // Check if number has decimals
    if (floor(user_number) != user_number) {
        std::cout << user_number << " is not an integer." << std::endl;
        return 0;
    }

    // Convert to int using C++-style cast (cpplint-approved)
    int number = static_cast<int>(user_number);

    // Check for negative input
    if (number < 0) {
        std::cout << number << " is not a positive number." << std::endl;
        return 0;
    }

    // Special case: 0
    if (number == 0) {
        std::cout << "The sum of numbers from 0 to " << number
                  << " is: 0" << std::endl;
        return 0;
    }

    // Calculate sum from 0 to number
    int sum_of_numbers = 0;
    for (int i = 0; i <= number; ++i) {
        sum_of_numbers += i;
    }

    // Output result
    std::cout << "The sum of numbers from 0 to " << number
              << " is: " << sum_of_numbers << std::endl;

    return 0;
}
