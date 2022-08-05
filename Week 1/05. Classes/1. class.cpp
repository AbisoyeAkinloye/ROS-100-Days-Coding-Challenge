#include <iostream>
#include "1a. cylinder.h"
#include "1b. constants.h"

int main(int argc, char** argv){
    Cylinder cylinder1; // object: instantiation of class

    std::cout << "Volume: " << cylinder1.volume() << std::endl;

    return 0;
}