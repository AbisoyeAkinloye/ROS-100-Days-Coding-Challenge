#include "elipse.h"

int Ellipse::count {0};

int Ellipse::get_count() const {
            return count;
}

Ellipse::Ellipse(double x_radius, double y_radius, std::string_view desc)
    : Shape(description), x_radius {x_radius}, y_radius {y_radius} {
            ++ count;
}

Ellipse::~Ellipse(){
    -- count;
}