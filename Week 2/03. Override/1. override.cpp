// Size of polymorphism

#include <iostream>
#include "1a. includes.h"


int main(int argc, char** argv){
    Circle circle1(7.2,"circle1");
    Oval oval1(13.3,1.2,"oval1");
    Circle circle2(8.9,"circle2");
    Oval oval2(20.2,10.8,"oval2");
    Circle circle3(8.9,"circle3");
    Oval oval3(20.2,10.8,"oval3");

    Shape* shape2 [] {&circle1,&circle2,&circle3,&oval1,&oval2,&oval3};
    for (Shape* s : shape2){
        s->draw();
    }

    return 0;
}