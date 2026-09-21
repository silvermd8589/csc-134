//CSC-134
// SIlvermane
// M2LAB
//9/21/26
// Crates 


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //constants for cost and amount charged 
    const double COST_PER_CUBIC_FOOT = 0.23;
    const double CHARGE_PER_CUBIC_FOOT = 0.89;

    //Variables 
        double length, // the crate's length
            width,  // the crate's width
            height, // the crate's height
            cost,   // the cost to build the crate
            charge, // the customer charge for the crate
            profit; // the profit made

    //set the desired output formatting for numbers 
    cout << setprecision(2) << fixed << showpoint;
    // prompt the user for the crate"s lenght width and height 
    cout << "Enter the dimensions of the crate (in feet) :\n";
    cout << "Length:    ";
    cin >> length;
    cout << "Width  ";
    cin >> width;
    cout << "Height  ";
    cin >> height;

    // calc the crates volume, the cost to build the crate, the customer charge for the crate, and the profit made
    double volume = length * width * height;
    cost = volume * COST_PER_CUBIC_FOOT;
    charge = volume * CHARGE_PER_CUBIC_FOOT;
    profit = charge - cost; 

    // display the results
    cout << "\nThe volume of the crate is " << volume << " cubic feet." << endl;
    cout << "The cost to build the crate is $" << cost << endl;
    cout << "The customer charge for the crate is $" << charge << endl;
    cout << "The profit made is $" << profit << endl;


    return 0;
}