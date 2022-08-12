#include "2d. circle.h"
#include "2f. oval.h"

Circle::Circle(double radius, std::string_view description) : Oval (radius, radius, description){
    // std::cout << "Circle Constructor Called" << std::endl;
}