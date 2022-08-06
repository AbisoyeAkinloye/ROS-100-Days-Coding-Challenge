#include <iostream>
#include "6a. box.h"

int main(){
    // Create a box
    Box firstBox{80.0, 50.0, 40.0};
    double firstBoxVolume{firstBox.volume()};
    std::cout << "Volume of the first Box object is " << firstBoxVolume << std::endl;
}