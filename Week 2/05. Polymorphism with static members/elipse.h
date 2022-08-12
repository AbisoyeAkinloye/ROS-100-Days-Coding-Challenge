#ifndef ELLIPSE_H
#define ELLIPSE_H

#include "shape.h"


class Ellipse : public Shape {
    public:
        Ellipse();
        Ellipse(double x_radius, double y_radius, std::string_view desc);
        virtual ~Ellipse();

        int get_count() const override;

        static int count;

    private:
        double x_radius {};
        double y_radius {};
};

#endif