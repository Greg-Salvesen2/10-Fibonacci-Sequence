//
//  main.cpp
//  10 Fibonacci Sequence
//
//  Created by Greg Salvesen on 11/15/16.
//  Copyright © 2016 DVS. All rights reserved.
//

#include <iostream>

// Calculates the fibonacci sequence to the nth term
void calculateFibonacci(int n) {
    // If n is 0 or less, return without printing anything, and if it's 1, print out the number 1 and return
    if(n <= 0) {
        return;
    } if(n == 1) {
        std::cout << "1" << std::endl;
        return;
    }
    // Initializes the first two numbers of the sequence and prints them out
    int first = 1;
    int second = 1;
    std::cout << first << " " << second << " ";
    for(int i = 2; i < n; i++) {
        // Create the new number by adding the two previous numbers
        int newNumber = first + second;
        // Sets the smaller of the two numbers to the new number
        if(first > second) {
            second = newNumber;
        } else {
            first = newNumber;
        }
        std::cout << newNumber << " ";
    }
    std::cout << std::endl;
}

int main(int argc, const char * argv[]) {
    std::cout << "This program will calculate the Fibonacci sequence." << std::endl;
    std::cout << "How many terms of the Fibonacci sequence should be calculated?: ";
    int termCount = 0;
    std::cin >> termCount;
    
    calculateFibonacci(termCount);
    
    return 0;
}
