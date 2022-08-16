#include "base.h"

Base::Base()
{
    // static binding will occur
    this->setup();
}

void Base::setup()
{
    std::cout << "Base::setup() called" << std::endl;
    value = 10;
}

void Base::clean_up()
{
    std::cout << "Base::clean_up() called" << std::endl;
}

Base::~Base()
{
    std::cout << "Base destructor called" << std::endl;
    this->clean_up();
}