// Copyright Lily Liu All rights reserved.
//
// Created by: Lily Liu
// Created on: Oct 2021
// This program will calculate area of triangle

#include <iostream>
#include <string>

void CalculateArea(float length, float height) {
    // This function will calculate area of triangle
    float areaTriangle;
    areaTriangle = (length * height)/ 2;

    std::cout << "The area of the triangle is "
    << areaTriangle << " cm²" <<std::endl;
}

int main() {
    // this is he main function
    float lengthUser;
    float heightUser;
    std::string lengthUserString;
    std::string heightUserString;

    // input
    std::cout << "Enter the base length of the triangle (cm) : ";
    std::cin >> lengthUserString;
    std::cout << "Enter the height of the triangle (cm) : ";
    std::cin >> heightUserString;

    try {
        lengthUser = std::stof(lengthUserString);
        heightUser = std::stof(heightUserString);
        // call functions
        CalculateArea(lengthUser, heightUser);
    } catch (std::invalid_argument) {
        std::cout << "Invalid input" <<std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
