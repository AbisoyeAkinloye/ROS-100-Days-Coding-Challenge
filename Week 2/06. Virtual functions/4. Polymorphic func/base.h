#ifndef BASE_H
#define BASE_H

#include <iostream>

class Base
{
public:
    Base();
    virtual ~Base();

    virtual void setup();

    virtual void clean_up();

    int get_value(){
        return value;
    }

protected:
    int value {};
};

#endif