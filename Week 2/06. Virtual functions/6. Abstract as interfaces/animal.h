#ifndef ANIMAL_H
#define ANIMAL_H

#include <string_view>
#include <iostream>
#include "stream_insertable.h"

class Animal : public StreamInsertable
{
public:
    Animal() = default;
    Animal(const std::string_view description);
    ~Animal();

    virtual void breathe() const
    {
        std::cout << "Animal::breathe called for: " << description << std::endl;
    }

    // stream insertable interface
    virtual void stream_insert(std::ostream &out) const override
    {
        out << "Aniaml [description: " << description << "]";
    }

protected:
    std::string_view description;
};

#endif