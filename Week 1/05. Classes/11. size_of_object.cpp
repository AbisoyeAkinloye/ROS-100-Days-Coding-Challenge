#include <iostream>

class Dog{
    public:
        Dog() = default;
    private:
        size_t leg_count;
        size_t tail;
};

int main(int argc, char** argv){
    Dog dog1;
    
    // size of object = sum of member variables
    std::cout << "sizeof(size_t): " << sizeof(size_t) << std::endl; // 8
    std::cout << "sizeof(Dog): " << sizeof(Dog) << std::endl; // 8+8 = 16

    return 0;
}