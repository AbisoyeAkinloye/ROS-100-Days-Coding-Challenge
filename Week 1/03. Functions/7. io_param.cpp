#include <iostream>

void max_two_num(const int num1, const int num2, int& max){
   (num1 > num2) ? max = num1 : max = num2;
}

int main(int argc, char** argv){
    int num1 {20}, num2 {22}, max {};
    max_two_num(num1,num2,max);

    std::cout << "The maximum number is: " << max << std::endl;

    return 0;
}