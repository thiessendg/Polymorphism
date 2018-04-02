//
// Created by David on 01-Apr-2018.
//

#ifndef POLYMORPHISM_DOG_H
#define POLYMORPHISM_DOG_H

#include "Animal.h"

class Dog : public Animal {
public:
    Dog();
    virtual ~Dog();
    void speak();
    void showHappiness();
};

#endif //POLYMORPHISM_DOG_H
