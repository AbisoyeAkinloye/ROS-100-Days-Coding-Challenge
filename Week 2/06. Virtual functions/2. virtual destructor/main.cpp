#include <iostream>
#include "includes.h"

int main(int argc, char* argv[]){

    // Dog dog1;
    // Destructor: Dog, Feline, Animal

    Animal* animal_ptr = new Dog;
    delete animal_ptr; 
    
    // Only animal destructor called if the destructor isn't declared as virtual function.

    // Adding virtual to the destructor

    return 0;
}