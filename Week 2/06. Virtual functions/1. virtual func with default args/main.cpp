#include <iostream>
#include "includes.h"

int main(int argc, char** argv){

    // Base ptr: Uses polymorphism
    Base* base_ptr1 = new Derived;
    double result = base_ptr1->add();
    std::cout << "Result (base ptr): " << result << std::endl;

    std::cout << "--------------------" << std::endl;

    // Base ref: Uses polymorphism
    Derived derived1;
    Base& base_ptr2 = derived1;
    result = base_ptr2.add();
    std::cout << "Result (base ref): " << result << std::endl;

    std::cout << "--------------------" << std::endl;

    // Raw object
    Base base;
    result = base.add();
    std::cout << "Raw result: " << result << std::endl;

    std::cout << "--------------------" << std::endl;

    Derived derived;
    result = derived.add();
    std::cout << "Result (Direct object): " << result << std::endl;    

    return 0;
}