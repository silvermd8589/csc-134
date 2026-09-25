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
    int num_people, total_slices;
    int num_pieces;
    double total_pizzas;
    int leftover_slices;

    cout << "The phone on the other line rang." << endl;
    cout << "Cindy answered with a hello." << endl;
    cout << "We greet Cindy and ask, How many people are coming to the party?" << endl;
    cin >> num_people;
    total_slices = num_people * slice_per_person;
    cout << "we need " << total_slices << " slices of pizza." << endl;
    total_pizzas = ceil(total_slices / slices_per_pie);
    cout << "we need " << total_pizzas << " pies of pizza." << endl;
    leftover_slices = (total_slices / total_slices + 1);
    cout << "We have " << leftover_slices << " slices leftover";




    return 0;
}