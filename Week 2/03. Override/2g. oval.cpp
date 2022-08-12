#include "2f. oval.h"

Oval::Oval(double x_radius, double y_radius, const std::string_view description) : Shape(description), x_radius {x_radius}, y_radius {y_radius} {
    // std::cout << "Oval Constructor" << std::endl;
}