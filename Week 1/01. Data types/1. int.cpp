#include <iostream>

int main(int argc, char ** argv){
    int num1 = 15; // decimal
    int num2 = 017; // octal
    int num3 = 0x0f; // hexadecimal
    int num4 = 0b0001111; // binary

    std::cout << "Number 1 is: " << num1 << std::endl;
    std::cout << "Number 2 is: " << num2 << std::endl;
    std::cout << "Number 3 is: " << num3 << std::endl;
    std::cout << "Number 4 is: " << num4 << std::endl;
}