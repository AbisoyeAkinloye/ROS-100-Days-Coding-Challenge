#include "1b. person.h"
#include "1d. student.h"


Student::Student(std::string_view department_param)
    :department(department_param)
{
}

std::ostream& operator<<(std::ostream& out, const Student& student){
    out << "Student: [ Department: " << student.department << " " << "Name: " << student.get_first_name() << " " << student.get_last_name() << "]";
    return out;
}