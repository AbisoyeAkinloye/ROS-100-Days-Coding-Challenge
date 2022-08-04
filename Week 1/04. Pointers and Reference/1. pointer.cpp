#include <iostream>

int main(int argc, char** argv){
    int num {2022};

    // initialize a pointer that does not point to any object
    int* ptr {nullptr};

    // assign address to a pointer
    ptr = &num;

    // dereferencing a pointer (*) operator
    std::cout << *ptr << std::endl;

    std::cout << "Sizeof(int): " << sizeof(int) << std::endl;
    std::cout << "Sizeof(int*): " << sizeof(int*) << std::endl;
    std::cout << "Sizeof(ptr) : " << sizeof(ptr) << std::endl;

    return 0;
}