#include <iostream>

int main(int argc, char** argv){

    const char* ptr_msg {"Hello World"};
    std::cout << *ptr_msg << std::endl;

    // allow user to change the string
    char* message[] {"Hello World"};
    
    return 0;
}