//
// Created by David on 01-Apr-2018.
//

#ifndef POLYMORPHISM_CAT_H
#define POLYMORPHISM_CAT_H

#include "Animal.h"

class Cat : public Animal {
public:
    Cat() = default;
    ~Cat() final = default;
    void speak() override;
    void showHappiness() override;
};

#endif //POLYMORPHISM_CAT_H
