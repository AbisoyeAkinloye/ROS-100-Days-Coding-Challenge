#include "1d. circle.h"
#include "1f. oval.h"

Circle::Circle(double radius, std::string_view description) : Oval (radius, radius, description){
    // std::cout << "Circle Constructor Called" << std::endl;
}