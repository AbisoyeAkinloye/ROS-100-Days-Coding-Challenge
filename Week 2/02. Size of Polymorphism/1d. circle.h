#ifndef CIRCLE
#define CIRCLE

#include "1f. oval.h"
#include <string_view>

class Circle : public Oval {
    public:
        Circle() = default;
        Circle(double radius, std::string_view description);
        ~Circle() = default;

        void draw() const {
            std::cout << "Circe::draw() called! Drawing " << description << " with radius: " << get_x_rad() << std::endl;
        }
};

#endif // CIRCLE