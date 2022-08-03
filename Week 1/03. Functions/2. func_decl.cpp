#include <iostream>

using namespace std;

// Function declaration 
int max(int a, int b);

int main(int argc, char *argv[]){
    int a {}, b {};
    cout << "Enter two numbers (space between): ";

    cin >> a >> b;
    int max_value {max(a,b)};

    cout << "The maximum number is " << max_value << '.' << endl;

    return 0;
}

// Function definition
int max(int a, int b){
    int max_value = (a > b) ? a : b;
    return max_value;
}