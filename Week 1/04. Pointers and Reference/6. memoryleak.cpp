#include <iostream>

int main(int argc, char** argv){
    std::cout << "Ways to leak memory" << std::endl;

    // reassign stack to dynamic memory (heap)
    int* ptr {new int{2022}};
    int num {5082022};
    ptr = &num;

    // double allocation
    int* ptr1 {new int{22}};
    ptr1 = new int {20};

    // nested scopes with dynamically allocated memory
    {
        int* ptr2 {new int{2022}};
    }
    // memory will be leaked after scope

    return 0;
}