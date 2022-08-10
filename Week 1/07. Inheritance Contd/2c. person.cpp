#include "2b. person.h"
#include <iostream>
#include <string_view>

Person::Person(){
    std::cout << "Person default destructor..." << std::endl;
}

Person::Person(const std::string_view full_name, int age, std::string_view address): m_full_name {full_name}, m_age {age}, m_address {address}{
    std::cout << "Custom constructor for person called..." << std::endl;
}

Person::Person(const Person& source): m_full_name (source.m_full_name), m_age (source.m_age), m_address (source.m_address){
    std::cout << "Copy constructor for person called." << std::endl;
}

// outside but still a friend of class
std::ostream& operator<<(std::ostream& out, const Person& person){
    out << "********* Person Biodata *********" << "\n Name:\t" << person.get_full_name() << "\n Age:\t" << person.get_age() << "\n Address:\t" << person.get_address() << std::endl;

    return out;
}

Person::~Person(){}