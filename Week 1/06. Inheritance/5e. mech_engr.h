#ifndef MECH_ENGINEER_H
#define MECH_ENGINEER_H

#include "5c. engineer.h"

class MechEngineer : private Engineer{
    friend std::ostream& operator<<(std::ostream&, const MechEngineer& mech);

    public:
        MechEngineer();
        ~MechEngineer();

        void design(){
            // cannot be acessed
            // full_name = "Sam Loye";
            // age = 23;
            // address = "Ogbomoso"
        }


    private:
        std::string speciality {"None"};
};

#endif  // MECH_ENGINEER_H