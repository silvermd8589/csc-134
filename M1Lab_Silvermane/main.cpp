// CSC 134
// Silvermane
// M1Lab - apple sales
// 8/2/26
// Calculate apple prices


#include <iostream>

using namespace std;

int main()
{
    // Introduce yourself
    string name = "Silvermane" ;
    string product = "apple" ;

    cout << "Welcome to the " << name << " ";
    cout << product << " farm." << endl;

    // Do product price calculations
    int product_count = 100;
    double product_price = .75; // in USD

    cout << "We have " << product_count << " ";
    cout << product << "(s) . They are $" << product_price;
    cout << " each." << endl;

    double total_price = product_count * product_price;
    cout << "total price for all " << product_count;
    cout << " is: $" << total_price << endl;


    return 0;
}
