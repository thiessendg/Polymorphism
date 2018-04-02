//#include <iostream>
#include "Animal.h"
#include "Cat.h"
#include "Dog.h"

int main() {
//    std::cout << "Hello, World!" << std::endl;
    Dog myDog;
    Cat myCat;

    Animal *pMyPet = &myDog;
    pMyPet->speak();
    pMyPet->showHappiness();

    pMyPet = &myCat;
    pMyPet->speak();
    pMyPet->showHappiness();

    pMyPet = nullptr;

    return 0;
}