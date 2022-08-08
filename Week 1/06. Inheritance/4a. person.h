#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include "string"
#include "string_view"

class Person{ 
    friend std::ostream& operator <<(std::ostream&, const Person& person);

    public:
        Person() = default;
        Person(std::string_view fullname, int age, const std::string address);
        ~Person();

        // Getters
        std::string get_full_name() const {
            return full_name;
        }

        int get_age() const {
            return age;
        }

        std::string get_address() const {
            return address;
        }

        std::string full_name {"Anonymous"};

    protected:
        int age {};
    
    private:
        std::string address {"Nil"};

};

#endif