#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <string>
#include <string_view>

class Shape {
    public:
        Shape() = default;
        Shape(std::string_view desc);
        virtual ~Shape();

        void draw() const{
            std::cout << "Shape::draw called for: " << description << std::endl;
        }

        virtual int get_count() const;

        static int count;

    protected:
        std::string description {"None"};
};

#endif