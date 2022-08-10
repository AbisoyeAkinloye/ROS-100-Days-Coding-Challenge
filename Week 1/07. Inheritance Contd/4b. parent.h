#ifndef PARENT_H
#define PARENT_H

#include <iostream>

class Parent {
    public:
        Parent() = default;
        Parent(int member) : member {member}{
        }
        ~Parent() = default;

        void no_of_member() const {
            std::cout << "The value in parent is: " << member << std::endl;
        }

    protected:
        int member {100};

};

#endif // PARENT_H