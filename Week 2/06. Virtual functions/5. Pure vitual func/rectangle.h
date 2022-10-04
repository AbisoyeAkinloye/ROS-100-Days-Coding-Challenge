#ifndef RECT_H
#define RECT_H

#include "shape.h"

class Rectangle : public Shape
{
public:
    Rectangle() = default;
    Rectangle(double width, double height, std::string_view description);
    virtual ~Rectangle() = default;

    virtual double perimeter() const override
    {
        return (2 * m_width + 2 * m_height);
    }

    virtual double surface() const override
    {
        return (m_height * m_width);
    }

private:
    double m_width{};
    double m_height{};
};

#endif 