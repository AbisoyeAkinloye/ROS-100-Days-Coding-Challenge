#include "3b. person.h"
#include <iostream>
#include <string_view>

Person::Person(const std::string_view full_name, int age, const std::string address){
    this-> full_name = full_name;
    this-> age = age;
    this-> address = address;
}

// outside but still a friend of class
std::ostream& operator<<(std::ostream& out, const Person& person){
    out << "********* Person Biodata *********" << "\n Name:\t" << person.get_full_name() << "\n Age:\t" << person.get_age() << "\n Address:\t" << person.get_address() << std::endl;

    return out;
}

Person::~Person(){}