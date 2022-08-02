#include <iostream>

using namespace std;

int main(){
    char operation {};
    int num1, num2;

    cout << " A simple Calculator " << endl;
    cout << "======================" << endl;
    cout << "Enter any integer: ";
    cin >> num1;
    cout << "Enter another integer: ";
    cin >> num2;
    cout << "Enter an operation (+,-,*,/): ";
    cin >> operation;

    switch (operation)
    {
    case '+':
        cout << num1 << " + " << num2 << " = " << num1+num2 << endl;
        break;
    case '-':
        cout << num1 << " - " << num2 << " = " << num1-num2 << endl;
        break;
    case '*':
        cout << num1 << " * " << num2 << " = " << num1*num2 << endl;
        break;
    case '/':
        cout << num1 << " / " << num2 << " = " << num1/num2 << endl;
        break;
    
    default:
        cout << "Invalid operation" << endl;
        break;
    }
}