#include <iostream>

class Dog{
    public:
        Dog() = default;
    private:
        size_t leg_count;
};

int main(int argc, char** argv){
    Dog dog1;
    std::cout << "sizeof(size_t): " << sizeof(size_t) << std::endl;
    std::cout << "sizeof(Dog): " << sizeof(Dog) << std::endl;

    return 0;
}