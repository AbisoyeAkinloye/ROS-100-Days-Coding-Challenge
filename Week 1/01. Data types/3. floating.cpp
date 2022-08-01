#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char * argv[]){
    float floating_num {0.123456789f};
    double num {0.123456789012345};
    long double num2 {0.1234567890123456789012345L};

    cout << "Floating number: " << floating_num << endl;
    cout << "Double number: " << num << endl;
    cout << "Long double: " << num2 << endl;

    cout << endl;

    cout << setprecision(20);
    cout << "Floating number: " << floating_num << endl;
    cout << "Double number: " << num << endl;
    cout << "Long double: " << num2 << endl;

    return 0;
}