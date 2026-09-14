//CSC-134
// SIlvermane
// M2T2
//9/14/26
// Reciepts 


#include <iostream>
// iomanip lets you use setw() and setprecision() and fixed 
#include <iomanip> 
#include <string>
using namespace std;

int main() {


//declare variables
string meal_name;    // ex "Chicken Sandwich"
double meal_price;   //$
double tax_rate;     // precent
double tax_ammount;  // $
double total;        // $, meal + tax 



// inputs
// right now nothing, the pick exactly sandwich 
meal_name = "Chicken Sandwich";
meal_price = 5.99;
tax_rate =   0.08;

//processing 
// tax is the meal * the tax rate
tax_ammount = meal_price * tax_rate;
total       = meal_price + tax_ammount;



//output 
// print like a receipt
string line = "____________________________";
cout << line << endl;
cout << meal_name << " " << setw(10) << fixed << setprecision(2) << meal_price << endl;
cout << "tax: " << " " << setw(21) << fixed << setprecision(2) << tax_ammount << endl;
cout << line << endl;
cout << "Total: " << setw(20) << fixed << setprecision(2) << total << endl;
cout << "Thank you come again." << endl << endl;



    return 0; //no errors 
}
