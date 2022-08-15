#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <string_view>
#include <iostream>

class Animal
{
public:
    Animal() = default;
    Animal(std::string_view description);
    virtual ~Animal();

    virtual void breathe() const
    {
        std::cout << "Animal::breathe called for: " << description << std::endl;
    }

protected:
    std::string description;
};

#endif // ANIMAL_H