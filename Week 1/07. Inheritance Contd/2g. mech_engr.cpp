#include "1f. mech_engr.h"
#include "1d. engineer.h"
#include <iostream>

MechEngineer::MechEngineer(){
    std::cout << "Default constructor called for Mechanical Engineer..." << std::endl;
}

MechEngineer::MechEngineer(std::string_view fullname, int age, std::string_view address, int contract_count, std::string_view speciality): Engineer(fullname, age, address, contract_count), speciality {speciality}{
    std::cout << "Custom constructor called for Mechanical Engineering..." << std::endl;
}

// Copy constructor
MechEngineer::MechEngineer(const MechEngineer& source) : Engineer (source), speciality {source.speciality}{
    std::cout << "Copy constructor for Mechanical Engineer is called..." << std::endl;
}

std::ostream& operator <<(std::ostream& out, const MechEngineer& mech){
    
    out << "********* Mechanical Engineer Biodata *********" << "\n Name:\t" << mech.get_full_name() << "\n Age:\t" << mech.get_age() << "\n Contract count:\t" << mech.get_contract_count() << "\n Speciality:\t" << mech.speciality << std::endl;
    
    return out;
}

MechEngineer::~MechEngineer(){}