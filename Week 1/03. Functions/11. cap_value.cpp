// capture list by value
#include <iostream>

int main(int argc, char** argv){
    int value {23};

    auto func = [value](){
        std::cout << "Value inside function: " << value << std::endl;
    };

    for (size_t i{}; i < 5; ++i){
        std::cout << "Value inside loop: " << value << std::endl;
        func();
        value ++;
    }

    return 0;
}