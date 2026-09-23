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
    cour << "Hello Mr.Random Bank Member" << endl;
    cout << "which acount would you like" << endl;
    cout << "1. Checkings, ";
    cout << "2. Savings, ";
    cout << "3. 401k. " << endl;
    cin >> account_type;
    if (account_type == acount_checking) {
        cout << "You have selected checkings," << endl;
        cout << "Account number: 94722435413 " << endl;
        cout << "Current Balance: $-50.00" << endl;
    }
    if (account_type == acount_saving) {
        cout << "you have selected savings," << endl;
        cout << "Account number: 74536461964" << endl;
        cout << "current Balance: $43.87" << endl;
    }
    if (account_type == acount_401k) {
        cout << "You have selected 401k," << endl;
        cout << "Account number: 60618556011"
        cout << "Current Balance: $203,564.25" << endl;
    }

    int main()
    // seting with draw and depsiot 
    const double checking_balance = -50.00;
    const double saving_balance = 43.87;
    const double _401k_balance = 203564.25;
    



    return 0; // no errors

  
}