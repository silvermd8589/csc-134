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
    cout << "Hello Mr.Random Bank Member" << endl;
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
        cout << "Account number: 60618556011" << endl;
        cout << "Current Balance: $203,564.25" << endl;
    }

    // seting with draw and depsiot 
    double checking_balance = -50.00;
    double saving_balance = 43.87;
    double _401k_balance = 203564.25;
    const int withdraw = 1;
    const int deposit = 2;

    cout << "Would you like to withdraw or deposit?" << endl;
    cout << "withdraw 1" << endl;
    cout << "deposit 2" << endl;
    int transaction_type;
    cin >> transaction_type;
    if (transaction_type == withdraw) {
        if (account_type == acount_checking) {
            cout << "please enter the amount to withdraw: ";
            double withdraw_amount;
            cin >> withdraw_amount;
            if (withdraw_amount <= checking_balance) {
                cout << "Withdrawal successful." << endl;
                checking_balance = checking_balance - withdraw_amount;
                cout << "Current Balance: $" << checking_balance << endl;
            } else {
                cout << "Insufficient funds." << endl;
            }   
        }
    }
    if (transaction_type == withdraw) {
        if (account_type == acount_saving) {
            cout << "please enter the amount to withdraw: ";
            double withdraw_amount;
            cin >> withdraw_amount;
            if (withdraw_amount <= saving_balance) {
                cout << "Withdrawal successful." << endl;
                saving_balance = saving_balance - withdraw_amount;
                cout << "Current Balance: $" << saving_balance << endl;
            } else {
                cout << "Insufficient funds." << endl;
            }
        }
    }
    if (transaction_type == withdraw) {
        if (account_type == acount_401k) {
            cout << "please enter the amount to withdraw: ";
            double withdraw_amount;
            cin >> withdraw_amount;
            if (withdraw_amount <= _401k_balance) {
                cout << "Withdrawal successful." << endl;
                _401k_balance = _401k_balance - withdraw_amount;
                cout << "Current Balance: $" << _401k_balance << endl;
            } else {
                cout << "Insufficient funds." << endl;
            }
        }
    }

    return 0; // no errors

  
}