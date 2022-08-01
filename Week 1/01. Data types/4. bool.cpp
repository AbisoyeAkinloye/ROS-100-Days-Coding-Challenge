#include <iostream>

using namespace std;

int main(){
    bool is_true = true;
    bool is_false = false;

    // true ---> 1 & false ---> 0
    cout << "It is true. " << is_true << endl;
    cout << "It is false. " << is_false << endl;

    cout << endl;

    // Print out true or false
    cout << boolalpha;
    cout << "I'm a " << is_true << " C++ programmer." <<endl;
    cout << "I'm a " << is_false << " C programmer." <<endl;


    return 0;
}