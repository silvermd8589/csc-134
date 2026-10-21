/*
csc 134 
M5T2
Silvermane/ Claude ai
with a partner, write a c++ program that prints the number 1-10
and their squares using one value-returning function and void function
*/

#include <iostream>
#include <iomanip>
using namespace std;

// Prototypes: Declare functions here, define them under main.
int square(int num);
void printAnswerLine(int number, int squared);
int getNumber();
int main() {
    cout << "Table of squares program" << endl;
    for (int i =1; i <= 10; i++){
        int squared = square(i);
        printAnswerLine(i, squared);
        
    }
    //after the table 
        int big = getNumber();
        printAnswerLine(big, square(big));

    return 0;
}

//define functions here.
int square(int num){
    //does the math -- input an interger output that interger sqaured

    return num * num;
}

void printAnswerLine(int number, int squared) {
    //print one line of the table of squares.
    //example output:
    // 3    9
    cout << number << "        " << setw(10) << squared << endl;
}

int getNumber() {
    int value;
    do {
        cout << "Enter a number bigger than 10: ";
        cin >> value;
    } while (value <= 10);
    return value;
}