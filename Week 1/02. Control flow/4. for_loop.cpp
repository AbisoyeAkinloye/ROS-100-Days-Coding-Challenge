#include <iostream>

int main(int argc, char** argv){
    // int i {1};
    // std::cout << i++ << std::endl;
    // std::cout << ++i << std::endl;

    for (unsigned int i{}; i < 5; ++i)
    {
        std::cout << "I kind of enjoy programming in C++" << std::endl;
    }

    std::cout << std::endl;

    // size_t: non-negative
    for (size_t i{}; i < 5; ++i)
    {
        std::cout << "I kind of enjoy programming in C++" << std::endl;
    }
    
    return 0;
}