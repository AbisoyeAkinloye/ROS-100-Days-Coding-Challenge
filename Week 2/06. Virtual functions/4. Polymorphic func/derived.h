#ifndef DERIVED_H
#define DERIVED_H

#include <iostream>
#include "base.h"

class Derived : public Base
{
public:
    Derived();
    virtual ~Derived();

    void setup() override;

    void clean_up() override;
};

#endif