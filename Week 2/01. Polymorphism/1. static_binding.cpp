// Static binding
#include <iostream>
#include "1a. includes.h"

int main(int argc, char** argv){
    Shape shape1("shape1");
    // shape1.draw();

    Oval oval1(2.0, 3.5, "oval1");
    // oval1.draw();

    Circle circle1(3.3, "circle1");
    // circle1.draw();

    // Base pointers

    Shape * shape_ptr = &shape1;
    shape_ptr->draw();

    Shape * shape_ptr1 = &oval1;
    shape_ptr1->draw(); // draw an oval

    Shape * shape_ptr2 = &circle1;
    shape_ptr2->draw(); // draw a circle

    // You will get the shape method called not the oval

/*
    // Base reference
    Shape& shape_ref = shape1;
    shape_ref.draw();

    Shape& shape_ref = oval1;
    shape_ref.draw();

    Shape& shape_ref = circle1;
    shape_ref.draw();
*/

    return 0;
}