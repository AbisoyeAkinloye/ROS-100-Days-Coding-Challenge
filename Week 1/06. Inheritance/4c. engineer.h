#ifndef ENGINEER_H
#define ENGINEER_H

#include "4a. person.h"

class Engineer : private Person{
    friend std::ostream& operator<<(std::ostream&, const Engineer& engr);

    public:
        Engineer();
        ~Engineer();

        void build_something(){
            full_name = "Sam Loye";
            age = 23;

            // cannot be acessed
            // address = "Ogbomoso"
        }


    private:
        int contract_count {0};
};

#endif