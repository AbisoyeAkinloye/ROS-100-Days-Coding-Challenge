#ifndef ENGINEER_H
#define ENGINEER_H

#include "1b. person.h"

class Engineer : public Person{
    friend std::ostream& operator<<(std::ostream&, const Engineer& engr);

    public:
        Engineer();
        Engineer(std::string_view fullname, int age, std::string_view address, int contract_count);
        ~Engineer();

        int get_contract_count() const {
            return contract_count;
        }

    private:
        int contract_count {0};
};

#endif