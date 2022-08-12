// Polymorphism at different levels
#include <iostream>
#include "includes.h"

int main(int argc, char** argv){
    // animal polymorphism
    Dog dog1("dark gray","dog1");
    Cat cat1("black stripes", "cat1");
    Pigeon pigeon1("white", "pigeon1");
    Crow crow1("black", "crow1");

    Animal* animals[]{&dog1, &pigeon1, &cat1, &crow1};

    for (const auto& animal : animals){
        animal->breathe();
    }

    std::cout << "\n------------ Feline -------------" << std::endl;

    // Felline polymorphism

    Dog dog2 {"dark gray", "dog2"};
    Cat cat2 {"black stripes", "cat2"};

    Feline* felines[]{&dog2, &cat2};

    for (const auto& felline : felines){
        felline->run();
    }

    std::cout << "\n------------ Bird -------------" << std::endl;

    // Birds polymorphism

    Pigeon pigeon2("white", "pigeon1");
    Crow crow2("black", "crow1");

    Bird* birds[]{&pigeon2, &crow2};

    for (const auto& bird : birds){
        bird->fly();
    }


    return 0;
}
