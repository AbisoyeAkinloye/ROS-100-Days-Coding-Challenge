#include <iostream>

class Rectangle {
    public:
        // constructor with parameter
        Rectangle(double param1, double param2){
            length = param1;
            breadth = param2;
        }

        // methods
        double area(){
            return length*breadth;
        }

        double perimeter(){
            return 2*(length+breadth);
        }

    private:
        // variables
        double length {1};
        double breadth {1};

};

int main(int argc, char* argv[]){
    Rectangle rect1(10,4);
    std::cout << "Area of the rectangle: "<< rect1.area() << std::endl;
    std::cout << "Perimeter of the rectangle: "<< rect1.perimeter() << std::endl;

    return 0;
}