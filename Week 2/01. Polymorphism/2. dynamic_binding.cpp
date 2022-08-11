// Static binding
#include <iostream>
#include "2a. includes.h"


// Pointer
void draw_shape(Shape* shape){
    shape->draw();
}

// Reference
void draw_shape_ref(Shape& shape){
    shape.draw();
}

int main(int argc, char** argv){
    // instantiate class
    Shape shape1("shape1");
    Oval oval1(2.0, 3.5, "oval1");
    Circle circle1(3.3, "circle1");

    // Base pointer
   /*
    Shape* shape_ptr = &shape1;
    shape_ptr->draw();

    Shape* shape_ptr1 = &oval1;
    shape_ptr1->draw();

    Shape* shape_ptr2 = &circle1;
    shape_ptr2->draw();
    */
   std::cout << "----- Pointer ------" << std::endl;
   draw_shape(&oval1);
   draw_shape(&circle1);

   std::cout << std::endl;

   std::cout << "----- Reference ------" << std::endl;
   draw_shape_ref(oval1);
   draw_shape_ref(circle1);

    // Collection
    Shape* shape_collection[]{&shape1, &oval1, &circle1};
    std::cout << std::endl;

    std::cout << "----- Shapes stored in collection -----" << std::endl;
    // Applying loop
    for (Shape* shape : shape_collection){
        shape->draw();
    }

    return 0;
}