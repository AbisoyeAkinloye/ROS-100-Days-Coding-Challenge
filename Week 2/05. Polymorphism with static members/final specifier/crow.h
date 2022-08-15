#ifndef CROW_H
#define CROW_H

#include "bird.h"

class Crow : public Bird {
    public:
        Crow() = default;
        Crow(std::string_view wing_color, std::string_view description);
        ~Crow() = default;

        virtual void cow() const {
            std::cout << "Crow::cow called for pigeon: " << description << std::endl;
        }

        void breathe() const override {
            std::cout << "Crow::breadth called for: " << description << std::endl;
        }

        void fly() const override {
            std::cout << "Crow::fly() " << description << " is flying." << std::endl;
        }
};

#endif