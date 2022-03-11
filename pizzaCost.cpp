// Copyright (c) 2022 Hunter Connolly All rights reserved
//
// Created by: Hunter Connolly
// March 11, 2022
// This program asks the user for the diameter of their pizza
// It the calculates the total cost of the pizza including tax

#include <iostream>
#include <iomanip>


int main() {
    // declare constants
    const float LABOUR_COST = 2.00;
    const float RENTAL_COST = 2.25;
    const float INGRED_COST = 1.5;
    const float HST = 0.13;

    // declare variables
    float diameter, subtotal, total, tax;

    // get the diameter of the pizza from the user (input)
    std::cout << "What is the diameter of your pizza? (inches): ";
    std::cin >> diameter;

    // calculate the price of the pizza (process)
    subtotal = LABOUR_COST + RENTAL_COST + (INGRED_COST * diameter);
    tax = subtotal * HST;
    total = subtotal + tax;

    // display the circumference to the user (output)
    std::cout << "\n";
    std::cout << "The total price of the pizza is: $" << std::fixed <<\
    std::setprecision(2) << std::setfill('0') << total << "\n";
}
