#ifndef FELINE_H
#define FELINE_H

#include "animal.h"

class Feline : public Animal {
    public:
        Feline() = default;
        Feline(std::string_view fur_style, std::string_view description);
        virtual ~Feline();

        virtual void run() const {
            std::cout << "Feline " << description << " is running." << std::endl;
        }

        void do_something_feline(){
            std::cout << "Doing some feline thing..." << std::endl;
        }

        std::string fur_style {"Not specified"};
};

#endif