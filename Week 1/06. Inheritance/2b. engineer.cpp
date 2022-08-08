#include "2a. engineer.h"

Engineer::Engineer(std::string_view first_name){
    this->first_name = first_name;
}

std::ostream& operator <<(std::ostream& out, const Engineer& engineer){
    out << "Name: " << engineer.get_initial() << engineer.first_name  << std::endl;
    return out;
}