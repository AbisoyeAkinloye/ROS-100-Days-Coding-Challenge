#include <iostream>
#include "2a. includes.h"

int main(int argc, char** argv){

    Engineer engr("Abisoye Akinloye", 22, "Oyo State, Nigeria", 5);
    std::cout << engr << std::endl;

    // compilier will automatically create a constructor copy
    Engineer engr2(engr);
    std::cout << engr2 << std::endl;


    // MechEngineer mech("Abisoye Akinloye", 22, "Oyo State, Nigeria", 5, "Manufacturing");
    // // std::cout << mech << std::endl;

    // MechEngineer mech2(mech);
    // std::cout << mech2 << std::endl;
   
    return 0;
}