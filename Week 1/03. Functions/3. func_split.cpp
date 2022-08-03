#include <iostream>
// Preprocessor
#include "3a. func_split.h" 

int main(int argc, char *argv[]){
    int a {}, b {};
    std::cout << "Enter two numbers (space between): ";

    std::cin >> a >> b;
    int max_value {max(a,b)};

    std::cout << "The maximum number is " << max_value << '.' << std::endl;

    return 0;
}