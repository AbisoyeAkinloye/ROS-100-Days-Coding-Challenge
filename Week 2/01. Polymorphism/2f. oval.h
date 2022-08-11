#ifndef OVAL_H
#define OVAL_H

#include "1b. shape.h"
#include <string_view>

class Oval : public Shape {
    public:
        Oval() = default;
        Oval(double x_radius, double y_radius, std::string_view);
        ~Oval() = default;

        virtual void draw() const {
            std::cout << "Oval::draw() called! Drawing " << description << " with x_radius: " << x_radius << " and y_radius: " << y_radius << std::endl;
        }

    protected:
        double get_x_rad() const {
            return x_radius;
        }

        double get_y_rad() const {
            return y_radius;
        }
        
    private:
        double x_radius {0.0};
        double y_radius {0.0};
};

#endif