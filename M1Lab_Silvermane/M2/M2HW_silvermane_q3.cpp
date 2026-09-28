//CSC-134
// SIlvermane
// M2HW
//9/21/26
// M2HW Question 3


#include <iostream>
#include <iomanip>  
#include <cmath>
using namespace std;

int main() {

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




    return 0;
}