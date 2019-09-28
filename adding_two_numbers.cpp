// Copyright (c) 2019 Wajd Mariam All rights reserved.
//
// Created by: Wajd Mariam
// Created on:September 2019
// This program calculates the sum of two numbers

#include <iostream>
#include <iomanip>
// This program collects two numbers from the user and adds them together

int main() {
     // The variables I'm using
     float Number1;
     float Number2;
     float sum;

    // input
    std::cout <<"Enter the first number:";
    std::cin >> Number1;
    std::cout <<"Enter the second number:";
    std::cin >> Number2;

    // process
    sum = Number1 + Number2;

    // output
    std::cout <<""<< std::endl;
    std::cout << "The sum of the two numbers is: "  << sum << std::endl;
}
