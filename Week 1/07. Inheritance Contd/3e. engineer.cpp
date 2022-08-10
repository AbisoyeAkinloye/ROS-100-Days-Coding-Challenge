#include "3b. person.h"
#include "3d. engineer.h"
#include <iostream>

Engineer::Engineer(std::string_view fullname, int age, std::string_view address, int contract_count) : Person (fullname, age, address), contract_count{contract_count}{
    std::cout << "Custom constructor called for Engineer..." << std::endl;
}

std::ostream& operator <<(std::ostream& out, const Engineer& engr){
    out << "********* Engineer Biodata *********\n" << "\n Name:\t" << engr.get_full_name() << "\n Age:\t" << engr.get_age() << "\n Address:\t" << engr.get_address() << "\n Contract count:\t" << engr.get_contract_count() << std::endl;

    return out;
}
