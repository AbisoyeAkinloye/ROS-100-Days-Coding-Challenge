#ifndef SHAPE_H
#define SHAPE_H

#include <string>
#include <string_view>
#include <iostream>

class Shape {
    public:
        Shape() = default;
        Shape(std::string_view description);
        ~Shape() = default;

        void draw() const {
            std::cout << "Shape::draw() called! Drawing " << description << std::endl;
        }

    protected:
        std::string description{""};
};

#endif