#include <iostream>

int main(int argc, char* argv[]){
    std::cout << "This main function has " << argc << " arguments" << std::endl;
    for (int i = 0; i < argc; ++i)
        std::cout << argv[i] << std::endl;

    char str[] = "10020134 00";
    long int num1 = atol(str);
    std::cout << "atol(): " << num1 << "\n";

    // char array of numbers
    char big_num[] = "8239206483232728";
  
    // Function calling to convert to a long int
    long long int num2 = atoll(big_num);
  
    std::cout << "atoll(): " << num2 << "\n";

    // char array
    char pi[] = "3.1415926535";
  
    // Calling function to convert to a double
    double pi_val = atof(pi);
  
    // prints the double value
    std::cout << "atof(): " << pi_val << "\n";

    return 0;
}