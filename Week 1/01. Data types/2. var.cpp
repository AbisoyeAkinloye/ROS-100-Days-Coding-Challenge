#include <iostream>

using namespace std;

int main(int argc, char ** argv){
    // braced initialization
    int age1 {23};

    // functional initialization
    int age2 (23);

    // assignment initialization
    int age3 = 23;

    cout << "Age1, age 2, age 3 are " << age1 << ", " << age2 << ", " << age3 <<" respectively." << endl;

    return 0;
}