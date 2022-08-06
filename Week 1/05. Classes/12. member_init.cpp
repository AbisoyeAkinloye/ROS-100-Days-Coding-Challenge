#include <iostream>

class Box {
    public:
        Box(double l, double w, double h):length{l}, width{w}, height{h}{
            std::cout << "Box Constructor Called" << std::endl;
        }

        double calc_volume(){
            return length * width * height;
        }

    private:
        double length, width, height;    
};

int main(int argc, char* argv[]){
    Box first_box(2.0,3.41,4.78);
    std::cout << "The volume of the box: " << first_box.calc_volume() << std::endl;

    return 0;
}