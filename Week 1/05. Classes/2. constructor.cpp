#include <iostream>

class Rectangle {
    public:
        // constructor without parameter not necessarily to be included
        Rectangle(){
            // otherwise if initiated or not empty
            length = 2.5;
            breadth = 1.8;
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
    Rectangle rect1;
    std::cout << "Area of the rectangle: "<< rect1.area() << std::endl;
    std::cout << "Perimeter of the rectangle: "<< rect1.perimeter() << std::endl;

    return 0;
}