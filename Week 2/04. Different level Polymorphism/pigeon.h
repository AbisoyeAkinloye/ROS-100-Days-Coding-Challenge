#ifndef PIGEON_H
#define PIGEON_H

#include "bird.h"

class Pigeon : public Bird {
    public:
        Pigeon() = default;
        Pigeon(std::string_view wing_color, std::string_view description);
        ~Pigeon() = default;

        virtual void coo() const {
            std::cout << "Pigeon::coo called for pigeon: " << description << std::endl;
        }

        void breathe() const override {
            std::cout << "Pigeon::breathe called for: " << description << std::endl;
        }

        void fly() const override {
            std::cout << "Pigeon::fly() " << description << " is flying." << std::endl;
        }
};

#endif