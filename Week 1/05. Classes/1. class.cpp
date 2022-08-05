#include <iostream>
#include <math.h>

const long double PI {3.1415926535897932384626433832795};

class Cylinder {
    public:
        // function (method)
        double volume(){
            return PI * pow(radius,2) * height;
        }

    private:
        // member variables
        double radius {6};
        double height {10};
        
};

int main(int argc, char** argv){
    Cylinder cylinder1; // object: instantiation of class

    std::cout << "Volume: " << cylinder1.volume() << std::endl;

    return 0;
}