#include "animal.h"

Animal::Animal(std::string_view description)
    : description{description}
{
}
 Animal::~Animal(){
    std::cout << "Animal destructor called" << std::endl;
 }