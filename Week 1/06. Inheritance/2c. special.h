#ifndef SPECIAL_ENGINEER_H
#define SPECIAL_ENGINEER_H

#include "2a. engineer.h"
#include <string_view>

class Special : public Engineer {
    friend std::ostream& operator << (std::ostream& out, const Special& spec_engineer);

    public:
        Special() = default;
        Special(std::string_view place_of_work, size_t years_of_experience);

        // Setter
        Special& set_first_name(std::string_view first_name){
            this->first_name = first_name;
            return *this;
        }

        Special& set_major(std::string_view disciple){
            this->major = disciple;
            return *this;
        }

    private:
        std::string place_of_work {"eGBIN Power Plant"};
        size_t years_of_experience {};
};

#endif