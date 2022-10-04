#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"
#include <cmath>

class Circle : public Shape
{
public:
    Circle() = default;
    Circle(double radius, std::string_view description);
    virtual ~Circle() = default;

    virtual double perimeter() const
    {
        return (2 * M_PI * m_radius);
    }

    virtual double surface() const
    {
        return M_PI * m_radius * m_radius;
    }

private:
    double m_radius{0.0};
};

#endif 