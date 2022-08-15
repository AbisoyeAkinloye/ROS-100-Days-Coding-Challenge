#ifndef BULLDOG_H
#define BULLDOG_H

#include "dog.h"

class Bulldog : public Dog
{
public:
    Bulldog() = default;
    virtual ~Bulldog() = default;

    // will throw a compiler error because cannot override 'final' in Dog class
    void run() const override {
        std::cout << "Bulldog::run() called" << std::endl;
    }
};

#endif // BULL_DOG