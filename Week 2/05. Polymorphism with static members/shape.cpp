#include "shape.h"

int Shape::count {0};

int Shape::get_count() const {
    return count;
}

Shape::Shape(std::string_view desc) 
    : description {desc}{
        ++ count;
}

Shape::~Shape(){
    --count;
}