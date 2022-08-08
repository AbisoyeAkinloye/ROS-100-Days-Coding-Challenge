#include "3b. person.h"
#include "3c. nurse.h"
#include <iostream>

Nurse::Nurse(){}

std::ostream& operator <<(std::ostream& out, const Nurse& nurse){
    out << "********* Nurse *********" << "\n Name:\t" << nurse.get_full_name() << "\n Age:\t" << nurse.get_age() << "\n Address:\t" << nurse.get_address() << "\n Certificate id: \t" << nurse.get_certificate_id() << std::endl;

    return out;
}

Nurse::~Nurse(){}