// Copyright (c) 2022 Emmanuel All rights reserved.

// Created by : Emmanuel
// Created on : Oct 2022
// This program is a number guessing game
// Using if, then and else statements.

#include <iostream>
#include <random>

int main() {
    // creating variables
    int randomNumber;
    int guessNumber;

    // generating random number
    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(0, 9);
    randomNumber = idist(rgen);

    // input
    std::cout << "Guess a number from 0 - 9: ";
    std::cin >> guessNumber;

    // process and output
    if (randomNumber == guessNumber) {
        std::cout << "\nYou  guessed correctly.";
    } else {
        std::cout << "\nIncorrect, the number was: "
        << randomNumber << ".";
    }

    std::cout << "\n\n\nDone.\n";
}
