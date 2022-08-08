#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <iostream>
#include <string_view>

#include "1b. person.h"

class Student : public Person{
    friend std::ostream& operator <<(std::ostream& out, const Student& student);

    public:
        Student() = default;
        Student(std::string_view department_param);
       
    private:
        std::string department {"Unknown"};
};

#endif