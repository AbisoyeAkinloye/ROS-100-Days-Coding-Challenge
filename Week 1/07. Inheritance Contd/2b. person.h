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
            return m_full_name;
        }

        int get_age() const {
            return m_age;
        }

        std::string get_address() const {
            return m_address;
        }

        std::string m_full_name{"Anonymous"};

    protected:
        int m_age {0};
    
    private:
        std::string m_address{"Nil"};

};

#endif