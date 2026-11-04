#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
   double width;
    double height;
    double length;
    double volume;

    cout << "Welcome to Question 2" << endl;
    cout << "This program calculates the volume of a 3d rectangle" << endl;
    cout << "Please enter width" << endl;
    cin >> width;
    cout << "Please enter height" << endl;
    cin >> height;
    cout << "Please enter length" << endl;
    cin >> height;
    volume = length * height * width;
    cout << "The volume is " << volume << endl;
}
