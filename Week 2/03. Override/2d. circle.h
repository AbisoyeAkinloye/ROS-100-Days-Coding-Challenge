#ifndef CIRCLE
#define CIRCLE

#include "2f. oval.h"
#include <string_view>

class Circle : public Oval {
    public:
        Circle() = default;
        Circle(double radius, std::string_view description);
        ~Circle() = default;
};

#endif // CIRCLE