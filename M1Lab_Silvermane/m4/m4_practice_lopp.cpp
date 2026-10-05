#include <iostream>
using namespace std;


int main() { 
    // inf loop 
    bool done = true;
    while ( done == false) {
        cout << "still going";

    }

    // counting loop
    int count = 1;
    while (count < 6) {
    cout << "count is: " << count << endl;
    count++; // increament after showing number
    }

    // vali loop 
    // test - num must be between 1 and 5
    bool is_valid = false;
    int number;
    while (false == is_valid) {
        cout << "Emter a number from 1-5" << endl;
        cin >> number;
        if (number < 1) {
            cout << "Too low!" << endl;
        }
        else if (number > 5) {
            cout << "Too hign!" << endl;
        }
        else {
            cout << "You entered: " << number << endl;
            is_valid = true; // we are done. stops the loops 
        }
    }
    return 0;
}
