// Copyright (c) 2022 Samuel Webster All rights reserved
//
// Created by Samuel Webster
// Created on February 2022
// This program calculates the perimeter of a square
//     with inputted side length

#include <iostream>
#include <list>

std::list<std::string> reorderList(std::list<std::string> inpt) {
    // I calculate perimeter of a square
    std::list<std::string> outpt;
    for (
        std::list<std::string>::iterator input_position = inpt.begin();
        input_position != inpt.end();
        input_position++
    ) {
        std::list<std::string>::iterator output_position = outpt.begin();
        while ((*output_position).length() > (*input_position).length()) {
            output_position++;
        }
        outpt.insert(output_position, *input_position);
    }
    return outpt;
}


int main() {
    // I am main, I manage input and output
    std::list<std::string> inpt;
    std::list<std::string> outpt;
    std::string inputtedString;

    // input & process
    while (true) {
        // I repeat until exit condition is inputted ("-Finish")
        std::cout << "Enter string: ";
        std::cin >> inputtedString;
        if (inputtedString == "-Finish") {
            break;
        } else {
            inpt.push_back(inputtedString);
        }
    }
    std::cout << std::endl;

    // call function
    outpt = reorderList(inpt);

    // output
    std::cout << "Input from longest to shortest is: ";
    for (std::string tempWord : outpt) {
        std::cout << tempWord;
        if (tempWord != outpt.back()) {
            std::cout << ", ";
        } else {
            std::cout << std::endl;
        }
    }
    std::cout << "\nDone." << std::endl;
}
