#include "derived.h"

Derived::Derived() : Base()
{
    std::cout << "Derived constructor called" << std::endl;
    // this->setup();
} 

void Derived::setup() // cannot be override because virtual function is called in the constructor which will give static binding.
{
    std::cout << "Derived::setup() called" << std::endl;
    value = 100;
}

void Derived::clean_up()
{
    std::cout << "Derived::clean_up() called" << std::endl;
}

Derived::~Derived()
{
    std::cout << "Derived destructor called" << std::endl;
    // this->clean_up();
}