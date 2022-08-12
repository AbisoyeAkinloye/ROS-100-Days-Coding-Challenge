// Size of polymorphism

#include <iostream>
#include "2a. includes.h"


int main(int argc, char** argv){
    Circle circle1(7.2,"circle1");
    Oval oval1(13.3,1.2,"oval1");
   
    circle1.draw();
    circle1.draw("blue");

    return 0;
}