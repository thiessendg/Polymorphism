//
// Created by David on 01-Apr-2018.
//

#ifndef POLYMORPHISM_DOG_H
#define POLYMORPHISM_DOG_H

#include "Animal.h"

class Dog : public Animal {
public:
    Dog();
    ~Dog() final;
    void speak() override;
    void showHappiness() override;
};

#endif //POLYMORPHISM_DOG_H
