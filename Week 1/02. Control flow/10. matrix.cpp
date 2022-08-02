// create 3 by 5 zero matrix with nested loop.

#include <iostream>

int main(int argc, char* argv[]){
    int rows {3}, cols {5};

    for (size_t i = 1; i <= rows; ++i){
        
        for (size_t j = 1; j <= cols; ++j)
            std::cout << "0 ";
        
        std::cout << std::endl;
    }


    return 0;
}