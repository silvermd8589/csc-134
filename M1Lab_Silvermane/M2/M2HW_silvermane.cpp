//CSC-134
// SIlvermane
// M2HW
//9/21/26
// 

using namespace std;
#include <iostream>
#include <iomanip>


int main() {
    //Set up variables
    int account_type;
    const int acount_checking = 1;
    const int acount_saving = 2;
    const int acount_401k = 3; 
   



    cout << "Question 1. " << endl; 
    cout << "Welcome to Silver Credit " << endl;
    cout << "Insert card" << endl;
    cout << "BEEB BOP DAIL UP NOISE" << endl;
    cout << "which acount would you like" << endl;
    cout << "1. Checkings, ";
    cout << "2. Savings, ";
    cout << "3. 401k. " << endl;
    cin >> account_type;
    if (account_type == acount_checking) {
        cout << "You have selected checkings," << endl;
        cout << "Current Balance: $-50.00" << endl;
    }
    if (account_type == acount_saving) {
        cout << "you have selected savings," << endl;
        cout << "current Balance: $43.87" << endl;
    }
    if (account_type == acount_401k) {
        cout << "You have selected 401k," << endl;
        cout << "Current Balance: $203,564.25" << endl;
    }

    return 0; // no errors

  
}