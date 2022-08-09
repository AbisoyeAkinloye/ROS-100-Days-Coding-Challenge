#ifndef MECH_ENGINEER_H
#define MECH_ENGINEER_H

#include "1d. engineer.h"

class MechEngineer : public Engineer{
    friend std::ostream& operator<<(std::ostream&, const MechEngineer& mech);

    public:
        MechEngineer();
        MechEngineer(std::string_view fullname, int age, std::string_view address, int contract_count, std::string_view speciality);
        MechEngineer(const MechEngineer& source);
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