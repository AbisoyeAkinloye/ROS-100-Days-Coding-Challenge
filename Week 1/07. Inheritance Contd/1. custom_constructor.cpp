#include <iostream>
#include "1a. includes.h"

int main(int argc, char** argv){
    Person someone("Abisoye Akinloye", 22, "Oyo State, Nigeria"); 
    std::cout << someone << std::endl;

    Engineer engr("Abisoye Akinloye", 22, "Oyo State, Nigeria", 5);
    std::cout << engr << std::endl;

    MechEngineer mech("Abisoye Akinloye", 22, "Oyo State, Nigeria", 2, "Power plants");
    std::cout << mech << std::endl;

    return 0;
}