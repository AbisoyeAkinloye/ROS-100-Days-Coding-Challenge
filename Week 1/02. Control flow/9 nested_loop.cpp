#include <iostream>

using namespace std;

int main(int argc, char** argv){
    int no_of_weeks {3}, days_in_week {7};

    for (int i = 1; i <= no_of_weeks; ++i){
        cout << "Week " << i << endl;

        for (int j = 1; j <= days_in_week; ++j){
            cout << "\t Day " << j << endl;
        }   
    }

    return 0;
}