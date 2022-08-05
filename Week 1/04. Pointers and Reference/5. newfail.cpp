#include <iostream>

int main(int argc, char** argv){
    // exception mechanism
    for (size_t i {}; i < 100000000000; ++i){
        try
        {
            int* lots_of_ints { new int[10000000]};
        }
        catch(const std::exception& e)
        {
            std::cerr << "Cought exception: " << e.what() << std::endl;
        }   
    }

    // std::nothrow
    for (size_t i {}; i < 100000000000; ++i){
        int* lot_of_ints { new(std::nothrow) int [1000000]};
        if (lot_of_ints == nullptr){
            std::cout << "Memory allocation failed" << std::endl;
        } else {
            std::cout << "Memory allocation succeeded" << std::endl;
        }
    }
    
    return 0;
}