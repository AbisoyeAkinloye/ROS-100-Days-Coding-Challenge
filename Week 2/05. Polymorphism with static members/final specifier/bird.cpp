#include "bird.h"

Bird::Bird(std::string_view wing_color, std::string_view description)
    : Animal(description), wing_color{wing_color}
{
}