#include <iostream>

using namespace std;

int main(int argc, char** argv){
    string password {"foo123"};
    string user_password;

    do {
        cout << "Enter your password: ";
        cin >> user_password;
    } while(password != user_password);

    cout << "User successfully logged in..." << endl;

    return 0;
}