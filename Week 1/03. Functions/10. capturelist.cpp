#include <iostream>

int main(int argc, char *argv[]){
    // capture lists
    double a{40};
    double b{30};

    auto func = [a,b](){
        std::cout << "a + b = " << a + b << std::endl;
    };

    func();
    return 0;
}