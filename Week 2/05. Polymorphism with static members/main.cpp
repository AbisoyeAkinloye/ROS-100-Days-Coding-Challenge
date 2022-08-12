// Inheritance and polymorphism with static members
#include <iostream>
#include "includes.h"

int main(int argc, char** argv){
    std::cout << "----- Shape ------" << std::endl;
    // shape
    Shape shape1("shape1");
    std::cout << "Shape count: " << Shape::count << std::endl;

    Shape shape2("shape2");
    std::cout << "Shape count: " << Shape::count << std::endl;

    Shape shape3("shape3");
    std::cout << "Shape count: " << Shape::count << std::endl;

    std::cout << "\n----- Ellipse ------" << std::endl;

    // Ellipse
    Ellipse ellipse1 {10,12,"ellipse1"};
    std::cout << "Shape count: " << Shape::count << std::endl;
    std::cout << "Ellipse count: " << Ellipse::count << std::endl;

    // Shape Polymorphism
    std::cout << "\n----- Shape polymorh ------" << std::endl;
    Shape* shapes[] {
        &shape1, &ellipse1
    };

    for (const auto& s : shapes){
        std::cout << "Count: " << s->get_count() << std::endl;
    }

    return 0;
}