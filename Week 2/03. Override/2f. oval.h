#ifndef OVAL_H
#define OVAL_H

#include "2b. shape.h"
#include <string_view>

class Oval : public Shape {
    public:
        Oval() = default;
        Oval(double x_radius, double y_radius, std::string_view);
        ~Oval() = default;
        
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