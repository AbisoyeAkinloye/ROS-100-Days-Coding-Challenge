#ifndef ENGINEER_H
#define ENGINEER_H

#include "5a. person.h"

class Engineer : private Person{
    friend std::ostream& operator<<(std::ostream&, const Engineer& engr);

    public:
        Engineer();
        ~Engineer();

        void build_something(){
            full_name = "Abisoye Akinloye";
            age = 23;

            // cannot be acessed
            // address = "Ogbomoso"
        }

        int get_contract_count() const {
            return contract_count;
        }

     protected:
        // Resurrect the private member
        using Person::get_full_name;
        using Person::get_age;

    private:
        int contract_count {0};
};

#endif