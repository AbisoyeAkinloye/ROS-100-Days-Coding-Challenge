#include <iostream>

// void function
void is_adult(unsigned int age){
    if (age > 12 && age < 20)
        std::cout << "You are a teenager" << std::endl;
    else if (age > 20)
        std::cout << "You are an adult." << std::endl;
    else
        std::cout << "You are still a child..." << std::endl;

    return; // You can omit the return statement for void function
}

int main(){
    int age {};
    std::cout << "Enter your age: ";
    std::cin >> age;
    is_adult(age);
    return 0;
}