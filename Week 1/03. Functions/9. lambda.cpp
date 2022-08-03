#include <iostream>
#include <iomanip>

auto result = [](double a, double b) -> double {
        return (a + b);
}(4.67, 4.54);

int main(int argc, char** argv){

    [](float workload, float course_unit){
        std::cout << std::setprecision(3) << "CGPA: " << workload/course_unit << std::endl;
    }(112.0f, 24.0f);

    std::cout << result << std::endl;

    return 0;
}