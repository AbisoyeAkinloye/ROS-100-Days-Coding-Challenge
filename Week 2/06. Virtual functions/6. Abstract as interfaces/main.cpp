#include <iostream>

#include "stream_insertable.h"

class Point : public StreamInsertable
{
public:
    Point() = default;
    Point(double x, double y) : x(x), y(y)
    {
    }

    virtual void stream_insert(std::ostream &out) const override
    {
        out << "Point [x: " << x << ",y: " << y << "]";
    }

private:
    double x, y;
};

int main()
{
    Point p1(10, 20);
    // std::cout << "p1: " << p1 << std::endl;
    operator << (std::cout, p1);

    return 0;
}