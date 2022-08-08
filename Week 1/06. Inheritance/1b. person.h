#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

class Person {
    friend std::ostream& operator <<(std::ostream& out, const Person& person);
    public:
        Person() = default;
        Person(std::string& first_name_param, std::string& last_name_param);

        // Getters
        std::string get_first_name() const {
            return first_name;
        }

        std::string get_last_name() const {
            return last_name;
        }

        // Setters 
        Person* set_first_name(std::string_view first_name){
            this->first_name = first_name;
            return this;
        }

        Person* set_last_name(std::string_view last_name){
            this->last_name = last_name;
            return this;
        }

    private:
        std::string first_name {"Anonymous"};
        std::string last_name {"Person"};
};

#endif