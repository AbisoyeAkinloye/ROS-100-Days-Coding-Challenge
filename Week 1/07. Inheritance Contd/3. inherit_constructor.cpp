#include <iostream>
#include "3a. includes.h"

int main(int argc, char** argv){

    Engineer engr("Abisoye Akinloye", 22, "Oyo state, Ogbomoso");
    std::cout << engr << std::endl;

    Engineer engr1("Abisoye Akinloye", 22, "Oyo state, Ogbomoso",4);
    std::cout << engr1 << std::endl;

    return 0;
}