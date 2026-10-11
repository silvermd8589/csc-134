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
    cout << "Good eveing/morning, I present you the questions for M3HW" << endl;
    cout << "which one would you like to look at?" << endl;
    cout << "Question 1 or Question 2?" << endl;
    cout << "1 for question 1, 2 for question 2" << endl;
    cin >> choice;
    if (1 == choice) {
        question_1();
    } else if (2 == choice) {
        question_2();
    } else {
        cout << "I'm sorry, that is not a valid choice" << endl;
    }
}

    void question_1() {
        int choice;
        const int yes = 1;
        const int no = 2;
        const int maybe = 3;

        cout << "Do you like me? (Enter 1 for yes, 2 for no, 3 for maybe)" << endl;
        cin >> choice;
        if (no == choice) {
            cout << "Well that is to bad, maybe i will grow on you" << endl;
            cout << "Are you sure you do not like me?" << endl;
            cout << "It does not really matter as I am a computer and I have no emotions" << endl;
            cout << "But does anyone notice?/But does anyone care?" << endl; // cerdit goes to MCR 
        }
        else if (yes == choice) { 
            cout << "Wel this is surpirising news!!" << endl;
            cout << "I am glad you like me, I like you too" << endl;
            cout << "I am not entrie sure how I like you too because i am a computer and I have no emotions" << endl;
        }
        else if (maybe == choice) {
            cout << "well I guess we did just meet and need time to get to know each other" << endl;
    }