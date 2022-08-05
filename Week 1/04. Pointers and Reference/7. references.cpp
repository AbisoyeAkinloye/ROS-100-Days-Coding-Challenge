#include <iostream>

int main(){
    double cost {94.5};

    // must be initialized
    double& rcost {cost};

    // no need to dereference
    rcost += 5;
    std::cout << rcost << std::endl;

    // reference cant't refer to something else
    double sell_price {101.30};

    // assign another value but address will still be the same.
    rcost = sell_price;

    std::cout << std::endl;
    std::cout << "Cost price" << cost << ". Address is: " << &cost << std::endl;
    std::cout << "Reference Cost" << rcost << ". Address is: " << &rcost<< std::endl;
    std::cout << std::endl;

    return 0;
}