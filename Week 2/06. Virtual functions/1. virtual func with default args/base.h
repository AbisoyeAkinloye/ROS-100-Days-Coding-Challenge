#ifndef BASE_H
#define BASE_H

#include <iostream>

class Base
{
public:
    Base() = default;
    ~Base() = default;

    virtual double add(double num1 = 10, double num2 = 8) const
    {
        std::cout << "Base::add() called" << std::endl;
        return (num1 + num2 + 2);
    };
};

#endif