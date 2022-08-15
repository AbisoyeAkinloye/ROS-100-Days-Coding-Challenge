#include "feline.h"

Feline::Feline(std::string_view fur_style, std::string_view description)
    : Animal (description), fur_style {fur_style}{
}

Feline::~Feline(){
    std::cout << "Feline destructor called" << std::endl;
}