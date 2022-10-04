#include <iostream>
#include "includes.h"

int main(){
    // Shape* shape_ptr = new Shape;
    // Compile error because Shape is an abstract class and cannot be instantiated.
    
    const Shape* shape_rect = new Rectangle(10,10,"rect1");
    double surface = shape_rect->surface();
    std::cout << "Dynamic type of shape_rect: " << typeid(*shape_rect).name() << std::endl;
    std::cout << "THe surface of the shape rect is: " << surface << std::endl;

    std::cout << "\n*********************************************\n" << std::endl;

    const Shape* shape_circle = new Circle(10,"circle1");
    surface = shape_circle->surface();
    std::cout << "Dynamic type of shape_rect: " << typeid(*shape_circle).name() << std::endl;
    std::cout << "The surface of the circle is: " << surface << std::endl;

    return 0;
}