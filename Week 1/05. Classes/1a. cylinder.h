#include "1b. constants.h"
#include <math.h>

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