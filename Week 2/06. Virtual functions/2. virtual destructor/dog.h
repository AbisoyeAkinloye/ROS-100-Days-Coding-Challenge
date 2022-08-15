#ifndef DOG_H
#define DOG_H

#include "feline.h"

class Dog : public Feline
{
public:
    Dog() = default;
    Dog(std::string_view fur_style, std::string_view description);
    virtual ~Dog();

    virtual void bark() const
    {
        std::cout << "Dog::bark called: woof!" << std::endl;
    }

    void breathe() const override
    {
        std::cout << "Dog::breathe called for: " << description << std::endl;
    }

    void run() const override final
    {
        std::cout << "Dog " << description << " is running." << std::endl;
    }
};

#endif