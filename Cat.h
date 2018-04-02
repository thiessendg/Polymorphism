//
// Created by David on 01-Apr-2018.
//

#ifndef POLYMORPHISM_CAT_H
#define POLYMORPHISM_CAT_H

#include "Animal.h"

class Cat : public Animal {
public:
    Cat();
    virtual ~Cat();
    void speak();
    void showHappiness();
};

#endif //POLYMORPHISM_CAT_H
