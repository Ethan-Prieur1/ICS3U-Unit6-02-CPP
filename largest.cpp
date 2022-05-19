// Copyright (c) 2022 Ethan Prieur All rights reserved
//
// Created by: Ethan Prieur
// Created on: May 2022
// This program calculates the largest of a group of numbers

#include <random>
#include <array>
#include <iostream>


template<size_t N>
int TopNumber(std::array<int, N> array) {
    // this functions is to get largest number in an array

    int topNumber = 0;
    int maxi = 0;

    for (int counter = 0; counter < array.size(); counter++) {
        maxi = array[counter];
        if (topNumber < maxi) {
            topNumber = maxi;
        }
    }

    return topNumber;
}

main() {
    // this function uses an array

    std::array<int, 10> randomNumbers;
    int aSingleRandomNumber = 0;
    int biggestNumber = 0;


    // input
    std::cout << "The numbers are: ";
    for (int loop_counter = 0; loop_counter < 10; loop_counter++) {
        std::random_device rseed;
        std::mt19937 rgen(rseed());
        std::uniform_int_distribution<int> idist(1, 100);
        aSingleRandomNumber = idist(rgen);
        randomNumbers[loop_counter] = aSingleRandomNumber;
        std::cout << aSingleRandomNumber << ", ";
    }
    std::cout << " " << std::endl;

    biggestNumber = TopNumber(randomNumbers);

    std::cout << "The largest number generated is: "
    << biggestNumber << std::endl;

    std:: cout << "\nDone." << std::endl;
}
