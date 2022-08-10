#include "2b. person.h"
#include "2d. engineer.h"
#include <iostream>

Engineer::Engineer(){
    std::cout << "Default constructor for Engineer called..." << std::endl;
}

Engineer::Engineer(std::string_view fullname, int age, std::string_view address, int contract_count) : Person (fullname, age, address), contract_count{contract_count}{
    std::cout << "Custom constructor called for Engineer..." << std::endl;
}

Engineer::Engineer(const Engineer& source) : Person {source}, contract_count {source.contract_count} {
    std::cout << "Copy constructor called for Engineer..." << std::endl;
}

std::ostream& operator <<(std::ostream& out, const Engineer& engr){
    out << "********* Engineer Biodata *********\n" << "\n Name:\t" << engr.get_full_name() << "\n Age:\t" << engr.get_age() << "\n Address:\t" << engr.get_address() << "\n Contract count:\t" << engr.get_contract_count() << std::endl;

    return out;
}

Engineer::~Engineer(){}