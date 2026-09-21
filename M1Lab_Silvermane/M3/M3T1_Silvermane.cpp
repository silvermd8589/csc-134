///CSC-134
// SIlvermane
// M3T!
//9/21/26
// get the area of two rect, find the largest one.
 #include <iostream>
    using namespace std;
int main() {
   


    // declare variables for each rect
    double length1, width1, area1;
    double length2, width2, area2;


    //input ask for length and width of both 
    cout << "First recteangle." << endl;
    cout << "\t length?";
    cin >> length1;
    cout << "\twidth   ?";
    cin >> width1;

    cout << "2nd rectangle:" << endl;
    cout << "\tlength  ?";
    cin >> length2;
    cout << "\twidth   ?";
    cin >> width2;


    area1 = length1 * width1;
    area2 = length2 * width2;

    cout << "Area of first rectangle: " << area1 << endl;
    cout << "Area of second rectangle: " << area2 << endl;




    return 0;
}