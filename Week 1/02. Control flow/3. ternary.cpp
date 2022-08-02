#include <iostream>

int main(int argc, char** argv){
    bool fast = false;

    int speed {fast?500:200};

    std::cout << "The speed is: " << speed << std::endl;

    return 0;
}