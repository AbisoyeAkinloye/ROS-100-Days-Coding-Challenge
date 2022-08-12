#ifndef BIRD_H
#define BIRD_H

#include "animal.h"

class Bird : public Animal {
    public:
        Bird() = default;
        Bird(std::string_view wing_color, std::string_view description);
        virtual ~Bird() = default;

        virtual void fly() const {
            std::cout << "Bird " << description << " is flying." << std::endl;
        }

    private:
        std::string wing_color {"Not specified"};
};

#endif