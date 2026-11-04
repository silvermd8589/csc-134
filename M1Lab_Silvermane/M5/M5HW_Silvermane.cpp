//CSC-134
// Silvermane
// M5HW-
//11/4/26

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
//void question_1();
void question_2();
void question_3();


int main(){
    int number;
    cout << "Welcome to M5 Homework" << endl;
    cout << "Please pick a question you want to veiw" << endl;
    cout << "Press 2 for question 2, press 3 for question 3 " << endl;
    cin >> number;
    if (number == 3){
    question_3();
    }
    else if (number == 2) {
        question_2();
    }
    return 0;
}

void question_2() {
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


void question_3() {
    int number;
    cout << "Welcome to the Roman Numeral convertor (only works for numbers 1-10)" << endl;
    cout << "Please an number: " << endl;
    cin >> number;
    if (number == 1) {
        cout << "Roman Numeral for 1 is I" << endl;
    }
    else if (number == 2) {
        cout << "Roman Numeral for 2 is II" << endl;
    }
    else if (number == 3) {
        cout << "Roman Numeral for 3 is III" << endl;
    }
    else if (number == 4) {
        cout << "Roman Numeral for 4 is IV" << endl;
    }
    else if (number == 5) {
        cout << "Roman Numeral for 5 is V" << endl;
    }
    else if (number == 6) {
        cout << "Roman Numeral for 6 is VI" << endl;
    }
    else if (number == 7) {
        cout << "Roman Numeral for 7 is VII" << endl;
    }
    else if (number == 8) {
        cout << "Roman Numeral for 8 is VIII" << endl;
    }
    else if (number == 9) {
        cout << "Roman Numeral for 9 is IX" << endl;
    }
    else if (number == 10) {
        cout << "Roman Numeral for 10 is X" << endl;
    }
    else {
        cout << "That is not in the scope of the program" << endl;
    }
}