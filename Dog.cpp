//
// Created by David on 01-Apr-2018.
//

#include "Dog.h"
#include <iostream>

Dog::Dog()
{
}

Dog::~Dog()
{
}

void Dog::speak()
{
    std::cout << "Woof" << std::endl;
}

void Dog::showHappiness()
{
    std::cout << "wagging tail" << std::endl;
}