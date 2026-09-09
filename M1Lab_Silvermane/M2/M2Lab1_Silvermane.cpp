//CSC-134
// SIlvermane
// M2Lab2_Produt_Sales
//9/9/26
// Apples for sale with price out 


#include <iostream>
using namespace std;

int main() {
    // Set up variables
    string Product_name;
    int    Product_count;
    double Product_price; 
    // variables for coustomer side
    int     purchase_count;
    double  purchase_total;

    //get inputs
    cout << "store setup" << endl;
    cout << "Prduct name";
    cin >> Product_name;
    cout << "Item Count:    ";
    cin >> Product_count;
    cout << "Price Each:  $";
    cin >> Product_price;

    //get input -- greet user get their order
    cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ " << endl << endl;
    cout << "Welcome Customer.";
    cout << "Welcome to the " << Product_name << " shop." << endl;
    cout << "Our " << Product_name << "(s) are $" << Product_price << " each." << endl;

    cout << "How many would you like to buy today? ";


    //do the process
    // note we dont verify the user input -- they can buy more then we have or a negative amout 
    // this will be fixed in the loopes module
    purchase_total = purchase_count * Product_price;



    //print output 
    cout << "You have ordered " << purchase_count << "  " << Product_name << "(s)." << endl;
    cout << "Total price: $" << purchase_total << endl;
    cout << "Thank you for shopping with CSC 134" << endl << endl;

    return 0; // no errors 
}

    