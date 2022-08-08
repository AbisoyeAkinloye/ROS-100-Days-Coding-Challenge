#include <iostream>
#include "3. includes.h"

int main(int argc, char** argv){
    Person person1("Abisoye Akinloye", 22, "No 2. Jafa's Compound");
    std::cout << person1 << std::endl;

    // Protected base access
    Nurse id_1;
    id_1.treat_unwell_person();
    std::cout << id_1 << std::endl;

    // Private base access specifier
    Engineer engr;
    engr.build_something();
    // engr.age = 45; // Compiler Error
    std::cout << engr << std::endl;

    return 0;
}