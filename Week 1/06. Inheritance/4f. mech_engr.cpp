#include "4e. mech_engr.h"
#include "4c. engineer.h"
#include <iostream>

MechEngineer::MechEngineer(){}

std::ostream& operator <<(std::ostream& out, const MechEngineer& mech){
    /*
    out << "********* Person Biodata *********" << "\n Name:\t" << mech.get_full_name() << "\n Age:\t" << mech.get_age() << "\n Address:\t" << mech.get_address() << "\n Speciality:\t" << mech.speciality << std::endl;
    */
    return out;
}

MechEngineer::~MechEngineer(){}