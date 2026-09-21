//CSC-134
// SIlvermane
// M2LAB
//9/21/26
// Crates 


#include <isostream>
#include <iomanip>
using namespace std;

int main()
{
    //constants for cost and amount charged 
    const double COST_PER_CUBIC_FOOT = 0.23;
    const double CHARGE_PER_CUBIC_FOOT = .05;

    //Variables 
    double length, // the crates lenght 
    double width, // "" width
    double height, // "" height 
    double cost, // the cost to build the crate 
    double charge, // the customer charge for the crate 
    double profit, // the profit made 

    //set the desired output formatting for numbers 
    cout << setprecision(2) << fixed << showpoint;
    // prompt the user for the crate"s lenght width and height 
    cout << "Enter the dimensions of the crate (in feet) :\n";
    cout << "Length:    ";
    cin >> length;
    cout << "Width  ";
    cin >> 
}