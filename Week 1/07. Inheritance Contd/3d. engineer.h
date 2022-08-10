#ifndef ENGINEER_H
#define ENGINEER_H

#include "3b. person.h"

class Engineer : public Person{
    // inherit constructor
    using Person::Person;

    friend std::ostream& operator<<(std::ostream&, const Engineer& engr);

    public:
        Engineer(std::string_view fullname, int age, std::string_view address, int contract_count);
        
        int get_contract_count() const {
            return contract_count;
        }

    private:
        int contract_count {0};
};

#endif