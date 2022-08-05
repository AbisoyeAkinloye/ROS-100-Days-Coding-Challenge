#include <iostream>

class Rectangle {
    public:
        // constructor
        Rectangle(){
            length = length;
            breadth = breadth;
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
        double length {1.8};
        double breadth {2.4};

};

int main(int argc, char* argv[]){
    Rectangle rect1;
    std::cout << "Area of the rectangle: "<< rect1.area() << std::endl;
    std::cout << "Perimeter of the rectangle: "<< rect1.perimeter() << std::endl;

    return 0;
}