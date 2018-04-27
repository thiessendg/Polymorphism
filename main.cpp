#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include <memory>

int main() {
    Dog myDog; //my dog object
    Cat myCat; //my cat object

    std::unique_ptr<Animal> upMyPet(&myDog); //ptr to Animal abstract class set to address of myDog
    upMyPet->speak(); //myDog speaks
    upMyPet->showHappiness(); //myDog shows how happy he is
    
    upMyPet.reset(&myCat);
    upMyPet->speak(); //myCat speaks
    upMyPet->showHappiness(); //myCat shows happiness
    
    upMyPet.reset(nullptr);

    return 0;
}