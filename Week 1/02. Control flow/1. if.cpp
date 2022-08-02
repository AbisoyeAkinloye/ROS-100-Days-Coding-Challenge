#include <iostream>

int main(int argc, char* argv[]){
    int num1 {8};
    int num2 {22};

    bool result = (num1 < num2);
    std::cout << std::boolalpha << "Result: " << result << std::endl;

    if (result)
        std::cout << "Number 1 is greater than number 2." << std::endl;
    else
        std::cout << "Number 1 is less than number 2." << std::endl;

    return 0;
}