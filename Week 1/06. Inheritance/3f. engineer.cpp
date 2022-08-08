#include "3b. person.h"
#include "3e. engineer.h"
#include <iostream>

Engineer::Engineer(){}

std::ostream& operator <<(std::ostream& out, const Engineer& engr){
    out << "********* Person Biodata *********" << "\n Name:\t" << engr.get_full_name() << "\n Age:\t" << engr.get_age() << "\n Address:\t" << engr.get_address() << std::endl;

    return out;
}

Engineer::~Engineer(){}