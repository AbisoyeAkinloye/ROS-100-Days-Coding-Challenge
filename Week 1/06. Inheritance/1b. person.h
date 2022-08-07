#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

class Person {
    friend std::ostream& operator <<(std::ostream& out, const Person& person){
        out << "Person [" << person.first_name << " " << person.last_name << "]";
        return out;
    };

    public:
        Person() = default;
        Person(std::string& first_name, std::string& last_name){
            this->first_name = first_name;
            this->last_name = last_name;
            std::cout << "Person Contructor Called" << std::endl;
        };

        ~Person(){
            std::cout << "Person Destructor Called" << std::endl;
        };

        // Getters
        std::string get_first_name() const {
            return first_name;
        }

        std::string get_last_name() const {
            return last_name;
        }

    private:
        std::string first_name {"Anonymous"};
        std::string last_name {"Person"};
};

#endif