#include <iostream>

using namespace std;

int main(){

    char char1 {'a'};
    char char2 {'k'};
    char char3 {'i'};
    char char4 {'n'};

    // ASCII Character
    char num {65};

    cout << char1 << endl;
    cout << char2 << endl;
    cout << char3 << endl;
    cout << char4 << endl;

    cout << endl;
    cout << num << endl;
    cout << "Value(int): " << static_cast<int>(num) << endl;

    return 0;
}