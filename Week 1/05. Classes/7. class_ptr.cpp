#include <iostream>
#include "7a. class_ptr.h"

int main(int argc, char** argv){
    // Heap object
    Student* student1 = new Student(160173);

    // dereferencing with .notation
    (*student1).set_student_info("Abisoye Akinloye", "Mechanical Engineering", 500);
    (*student1).get_student_info();

    std::cout << std::endl;
    Student* student2 = new Student(160288);

    // dereferencing with -> arrow notation
    student2->set_student_info("Olaniyi Samuel", "Mechanical Engineering", 400);
    student2->get_student_info();

    delete student1; 
    delete student2;

    return 0;
}