//Daniel Silvermane
// M5LAB2
//11/2/2026
// Efeing BOB
 
#include <iostream>
#include <string>
using namespace std;
 
// Declare (Write the prototypes for)
// the getLength,
// getWidth, getArea, and displayData
// functions here.


// prototypes
double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area);

int main() {
    double length = getLength();
    double width = getWidth();
    double area = getArea(length, width);

    displayData(length, width, area);
    return 0;
}

double getLength() {
    string input;
    cout << "Enter the length in inches: ";
    getline(cin, input);
    return stod(input);
}

double getWidth() {
    string input;
    cout << "Enter the width in inches: ";
    getline(cin, input);
    return stod(input);
}

double getArea(double length, double width) {
    return length * width;
}
void displayData(double length, double width, double area) {
    cout << "The length is " << length << " inches." << endl;
    cout << "The width is " << width << " inches." << endl;
    cout << "The area is " << area << " square inches." << endl;
}