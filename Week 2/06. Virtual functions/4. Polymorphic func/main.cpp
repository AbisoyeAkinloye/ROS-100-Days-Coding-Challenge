#include <iostream>
#include "includes.h"

int main(int argc, char** argv){

    Base* base_ptr = new Derived;
    auto value = base_ptr->get_value();
    std::cout << "Value: " << value << std::endl;

    delete base_ptr;

    return 0;
}