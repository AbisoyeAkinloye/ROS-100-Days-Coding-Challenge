#include <iostream>

int main(int argc, char **argv){
    int* ptr {nullptr};
    ptr = new int;

    *ptr = 2022;
    std::cout << "Dynamically allocating memory: ";
    std::cout << *ptr << std::endl;

    delete ptr;
    ptr = nullptr;

    return 0;
}