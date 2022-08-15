#ifndef CAT_H
#define CAT_H

#include "feline.h"

class Cat final : public Feline{
    public:
        Cat() = default;
        Cat(std::string_view fur_style, std::string_view description);
        virtual ~Cat() = default;

        virtual void meow() const {
            std::cout << "Cat::bark called: meow!" << std::endl;
        }

        void breathe() const override {
            std::cout << "Cat::breathe called for: " << description << std::endl;
        }

        void run() const {
            std::cout << "Cat " << description << " is running." << std::endl;
        }
};

#endif