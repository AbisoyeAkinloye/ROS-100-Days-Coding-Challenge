#include <iostream>
#include "1d. student.h"
#include "1c. student.cpp"

int main(int argc, char *argv[]){
    Student student("Mechanical");
    student.set_first_name("Akinloye")->set_last_name("Abisoye");
    std::cout << "Student: " << student << std::endl;
    return 0;
}