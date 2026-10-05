///CSC-134
// SIlvermane
// M3LAB3
//10/05/26

#include <iostream>
    using namespace std;

    
int main() {
    const int A_GRADE = 90;
    const int B_GRADE = 80;
    const int C_GRADE = 70;
    const int D_GRADE = 60;
    const int F_GRADE = 50;
    int number; 
    cout << "Please enter the number grade" << endl;
    cin >> number;
    if (number >= A_GRADE) {
        cout << " You got an A" << endl;
    }
    else if (number >= B_GRADE) {
        cout << "You got a B" << endl;
    }
    else if  (number >= C_GRADE) {
        cout << "You got a C" << endl;
    }
    else if (number >= D_GRADE) {
        cout << "You got a D" << endl;
    }
    else if (number >= F_GRADE) {
        cout << "You got a F" << endl;
    }
    else if (number <= F_GRADE) {
        cout << "You got a F" << endl;
    }
    }