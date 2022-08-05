#include <iostream>

int main(int argc, char** argv){
    // dangling uninitialized pointer
    int* ptr; 
    std::cout << std::endl;

    // dangling deleted pointer
    int* ptr_num {new int{2022}};
    std::cout << "Before deleting: " << *ptr_num << std::endl;

    delete ptr_num;
    std::cout << "After deleting: " << *ptr_num << std::endl;

    std::cout << std::endl;

    // multiple pointers pointing to the same address
    int* ptr_mul1 {new int {2022}};
    int* ptr_mul2 {ptr_mul1};

    std::cout << "Ptr multiple 1: " << ptr_mul1 << " - " << *ptr_mul1 << std::endl;
    std::cout << "Ptr multiple 2: " << ptr_mul2 << " - " << *ptr_mul2 << std::endl;

    delete ptr_mul1;

    std::cout << std::endl;
    std::cout << "Ptr Multiple 2 (after deleting ptr_mul1): " << ptr_mul2 << " - " << *ptr_mul2 << std::endl;


    return 0;
}