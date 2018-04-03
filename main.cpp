#include "Animal.h"
#include "Cat.h"
#include "Dog.h"

int main() {
    Dog myDog; //my dog object
    Cat myCat; //my cat object

    Animal *pMyPet = &myDog; //ptr to Animal abstract class set to address of myDog
    pMyPet->speak(); //myDog speaks
    pMyPet->showHappiness(); //myDog shows how happy he is

    pMyPet = &myCat; //re seat the Animal ptr to myCat
    pMyPet->speak(); //myCat speaks
    pMyPet->showHappiness(); //myCat shows happiness

    pMyPet = nullptr; //re seat the Animal ptr to the nullptr

    return 0;
}