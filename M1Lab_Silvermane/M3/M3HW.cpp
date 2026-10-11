///CSC-134
// SIlvermane
// M3HW-Bronze
//10/11/26

#include <iostream>
using namespace std;

void question_1();
void question_2();

int main() {
    int choice;

    cout << "Good evening/morning, I present you the questions for M3HW" << endl;
    cout << "which one would you like to look at?" << endl;
    cout << "Question 1 or Question 2?" << endl;
    cout << "1 for question 1, 2 for question 2" << endl;
    cin >> choice;

    if (choice == 1) {
        question_1();
    } else if (choice == 2) {
        question_2();
    }

    return 0;
}

void question_1() {
    string answer;

    while (true) {
        cout << "Do you like me? (Enter yes, no, or maybe)" << endl;
        cin >> answer;

        if (answer == "no") {
            cout << "Well that is too bad, maybe I will grow on you" << endl;
            cout << "Are you sure you do not like me?" << endl;
            cout << "It does not really matter as I am a computer and I have no emotions" << endl;
            cout << "But does anyone notice?/But does anyone care?" << endl; // credit goes to MCR
        } else if (answer == "yes") {
            cout << "Well this is surprising news!!" << endl;
            cout << "I am glad you like me, I like you too" << endl;
            cout << "I am not entirely sure how I like you too because I am a computer and I have no emotions" << endl;
        } else if (answer == "maybe") {
            cout << "Well I guess we did just meet and need time to get to know each other" << endl;
        } else {
            cout << "Please enter yes, no, or maybe." << endl;
        }
    }
}

void question_2() {
    cout << "Question 2 is not implemented yet." << endl;
}