#include <iostream>
#include "4a. includes.h"

int main(int argc, char *argv[]){
    Parent p1;
    p1.no_of_member();

    std::cout << "------------" << std::endl;

    Child no1;
    no1.no_of_member();

    std::cout << "------------" << std::endl;

    no1.show_values();

    std::cout << "------------" << std::endl;

    // call method in parent
    no1.Parent::no_of_member();

    return 0;
}