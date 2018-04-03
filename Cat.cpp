//
// Created by David on 01-Apr-2018.
//

#include "Cat.h"
#include <iostream>

Cat::Cat() = default;

Cat::~Cat() = default;

void Cat::speak() {
    std::cout << "Meow" << std::endl;
}

void Cat::showHappiness() {
    std::cout << "puuuuurrrrrr" << std::endl;
}