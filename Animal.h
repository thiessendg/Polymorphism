//
// Created by David on 01-Apr-2018.
//

#ifndef POLYMORPHISM_ANIMAL_H
#define POLYMORPHISM_ANIMAL_H

class Animal {
public:
    Animal();
    virtual ~Animal();
    virtual void speak() = 0;
    virtual void showHappiness() = 0;
};

#endif //POLYMORPHISM_ANIMAL_H
