#include "2c. special.h"

Special::Special(std::string_view place_of_work, size_t years_of_experience){
    this->place_of_work = place_of_work;
    this->years_of_experience = years_of_experience;
}

std::ostream& operator << (std::ostream& out, const Special& spec_engineer){
    out << "======= Specialized Engineer ======= \nName: " << spec_engineer.get_initial() << spec_engineer.first_name << ",\nArea of Specialiazation: " << spec_engineer.major << ",\nPlace of work: " << spec_engineer.place_of_work << "\nYears of Experience: " << spec_engineer.years_of_experience << std::endl;

    return out;
}