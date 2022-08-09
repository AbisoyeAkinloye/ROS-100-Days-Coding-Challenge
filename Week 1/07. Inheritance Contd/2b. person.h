#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include "string"
#include "string_view"

class Person{ 
    friend std::ostream& operator <<(std::ostream&, const Person& person);

    public:
        // default constructor
        Person();

        // constructor declaration
        Person(std::string_view fullname, int age, std::string_view address);
        
        // copy constructor
        Person(const Person& source);
        
        // destructor
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