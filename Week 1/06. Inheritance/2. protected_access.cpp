#include <iostream>
#include "2a. engineer.h"
#include "2b. engineer.cpp"
#include "2c. special.h"
#include "2d. special.cpp"

int main(int argc, char** argv){
    Engineer engr("Abisoye");
    std::cout << engr << std::endl; 

    // Inheritance: protected access specifier
    Special engineer("Chevron", 5);
    engineer.set_first_name("Akinloye").set_major("Turbine Operation and Maintenance");
    std::cout << engineer << std::endl;

    return 0;
}