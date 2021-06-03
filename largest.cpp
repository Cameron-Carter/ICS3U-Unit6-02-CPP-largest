// Copyright (c) Cameron Carter All rights reserved
//
// Created by: Cameron Carter
// Created on: June 2021
// This program averages numbers

#include <iostream>
#include <random>
#include <array>


template<size_t N>
int FindLargest(std::array<int, N> numbers) {
    // This function prints the numbers and determines the largest one

    // Declaring largest
    int largest;

    for (
        int counter = 0;
        counter < numbers.size();
        counter++
    ) {
        if (counter == 0) {
            largest = numbers[counter];
        } else {
            if (numbers[counter] > largest) {
                largest = numbers[counter];
            }
        }
    }

    return largest;
}


main() {
    // This function averages random numbers

    // Declaring variables
    std::array<int, 10> randomNumbers;
    int generatedNumber;
    int largestNumber;

    // Process and Output
    for (
        int loopCounter = 0;
        loopCounter < randomNumbers.size();
        loopCounter++
    ) {
        std::random_device rseed;
        std::mt19937 rgen(rseed());  // mersenne_twister
        std::uniform_int_distribution<int> idist(1, 100);
        generatedNumber = idist(rgen);
        randomNumbers[loopCounter] = generatedNumber;
    }
    for (
        int loopCounter = 0;
        loopCounter < randomNumbers.size();
        loopCounter++
    ) {
        std::cout << "Random number " << loopCounter + 1 << " is "
        << randomNumbers[loopCounter] << "." << std::endl;
    }
    // Calls FindLargest
    largestNumber = FindLargest(randomNumbers);
    std::cout << "\nThe largest number is " << largestNumber << "."
    << std::endl;
    std::cout << "\nDone" << std::endl;
}
