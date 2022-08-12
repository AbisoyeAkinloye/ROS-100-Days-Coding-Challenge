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

        virtual void draw() const {
            std::cout << "Shape::draw() called! Drawing " << description << std::endl;
        }

        virtual void draw(std::string_view color) const {
            std::cout << "Shape::draw() called! Drawing " << description << " with color " << color << std::endl;
        }

    protected:
        std::string description{""};
};

#endif