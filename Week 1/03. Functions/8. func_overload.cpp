#include <iostream>

int division(int num1, int num2){
    return num1/num2;
}

double division(double num1, double num2){
    return num1/num2;
}

int main(int argc, char** argv){
    // C++ automatically knows which of the function to call with the argument.
    auto ans = division(8.28, 2.0);

    std::cout << "The answer is: " << ans << std::endl;
    return 0;
}