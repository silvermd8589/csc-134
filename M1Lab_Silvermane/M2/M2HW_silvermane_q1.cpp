//CSC-134
// SIlvermane
// M2HW
//9/21/26
// Bronze

#include <iostream>
#include <iomanip>

using namespace std;

void question1();
void question2();

int main() {

    cout << "Welcome to my attempt of coding. Good luck and God bless your soul" << endl;
    cout << "Which question would you like to veiw" << endl;
    cout << "question1 = 1, question2 = 2"; << endl;
    int choice;
    cin >> choice;

    if (choice == 1) {
        question1();
    }
    if (choice == 2) {
        question2();
    }

    return 0;
}


void question1() {
    //Set up variables
    int account_type;
    const int account_checking = 1;
    const int account_saving = 2;
    const int account_401k = 3; 
    



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
    if (account_type == account_checking) {
        cout << "You have selected checkings," << endl;
        cout << "Account number: 94722435413 " << endl;
        cout << "Current Balance: $-50.00" << endl;
    }
    if (account_type == account_saving) {
        cout << "you have selected savings," << endl;
        cout << "Account number: 74536461964" << endl;
        cout << "current Balance: $43.87" << endl;
    }
    if (account_type == account_401k) {
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
        if (account_type == account_checking) {
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
        if (account_type == account_saving) {
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
        if (account_type == account_401k) {
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
    if (transaction_type == deposit) {
        if (account_type == account_checking) {
            cout << "please enter the amount you wish to deposit." << endl;
            double deposit_amount;
            cin >> deposit_amount;
            checking_balance = checking_balance + deposit_amount;
            cout << "counting money....adding it to checking account" << endl;
            cout << "Current Balance: $" << checking_balance << endl;
        }
    }
    if (transaction_type == deposit) {
        if (account_type == account_saving) {
            cout << "please enter the amount you wish to deposit." << endl;
            double deposit_amount;
            cin >> deposit_amount;
            saving_balance = saving_balance + deposit_amount;
            cout << "counting money....adding it to saving account" << endl;
            cout << "Current Balance: $" << saving_balance << endl;
        }
    }
    if (transaction_type == deposit) {
        if (account_type == account_401k) {
            cout << "please enter the amount you wish to deposit." << endl;
            double deposit_amount;
            cin >> deposit_amount;
            _401k_balance = _401k_balance + deposit_amount;
            cout << "counting money....adding it to 401k account" << endl;
            cout << "Current Balance: $" << _401k_balance << endl;
        }
    }
}

void question2 () {

    // set up variables 
    const int slice_per_person = 3;
    const int slices_per_pie = 8;
    int num_people, total_slices_eaten;
    int num_pieces;
    int total_pizzas, total_slices_ordered;
    int leftover_slices;

    cout << "The phone on the other line rang." << endl;
    cout << "Cindy answered with a hello." << endl;
    cout << "We greet Cindy and ask, How many people are coming to the party?" << endl;
    cin >> num_people;

    // Ask how many pizzas t order
    cout << "How many pizzas will you order? (8 slices per pizza)" << endl;
    cin >> total_pizzas;
    total_slices_ordered = total_pizzas * slices_per_pie;
    total_slices_eaten  = num_people * slice_per_person;
    cout << "Our order contains " << total_slices_ordered << " slices." << endl;
    cout << "we need " << total_slices_eaten << " slices of pizza." << endl;
    

    leftover_slices = total_slices_ordered - total_slices_eaten;
    cout << "We have " << leftover_slices << " slices leftover" << endl;

}
