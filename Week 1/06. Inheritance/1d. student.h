#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <iostream>
#include "1b. person.h"

class Student : public Person{
    friend std::ostream& operator <<(std::ostream& out, const Student& student){
        out << "Student: [ Department: " << student.department << "Name: " << student.get_first_name() << "]";
        return out;
    };

    public:
        Student() = default;
        Student(std::string department){
            this->department = department;
            std::cout << "Student Constructor Called" << std::endl;
        };
       
    private:
        std::string department {"Unknown"};
};

#endif