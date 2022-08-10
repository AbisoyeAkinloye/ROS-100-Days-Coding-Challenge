#ifndef CHILD_H
#define CHILD_H

#include <iostream>

class Child : public Parent {
    public:
        Child() = default;
        Child(int member) : member {member}{
        }
        ~Child() = default;

        void no_of_member() const {
            std::cout << "The value of child is: " << member << std::endl;
        }

        void show_values() const {
            std::cout << "The value of child is: " << member << std::endl;
            std::cout << "The value in Parent is: " << Parent::member << std::endl;
        }

    protected:
        int member {4};
};

#endif