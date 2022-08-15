#ifndef DERIVED_H
#define DERIVED_H

#include <iostream>
#include "base.h"

class Derived : public Base
{
public:
    Derived() = default;
    ~Derived() = default;

    virtual double add(double num1 = 4, double num2 = 8) const override
    {
        std::cout << "Derived::add() called" << std::endl;
        return (num1 + num2 + 2);
    };
};

#endif