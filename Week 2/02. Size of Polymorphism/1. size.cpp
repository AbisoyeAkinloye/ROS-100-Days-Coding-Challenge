// Size of polymorphism

#include <iostream>
#include "1a. includes.h"


int main(int argc, char** argv){
   
   std::cout << "Sizeof(Shape): " << sizeof(Shape) << std::endl;
   // Dynamic: 40, Static: 32
   std::cout << "Sizeof(Oval): " << sizeof(Oval) << std::endl;
   // Dynamic: 56, Static: 48
   std::cout << "Sizeof(Circle): " << sizeof(Circle) << std::endl;
   // Dynamic: 56, Static: 48

   // Slicing
   Circle circle1(3.3, "circle1");
   Shape shape {circle1};
   shape.draw();

    return 0;
}