//CSC-134
// SIlvermane
// M3T
//9/2/26
// Start writing a simple "Craps" casino game 

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    // rand() needs to seeded with srand();
    // most "random " is to use he time 
    srand(time(0)); // current seed is the time right now 
    cout << rand() << " " << rand() << endl;
    // to get a number in a usable size use % (modulo)
    int roll1 (rand() % 6 + 1); // mod 6 is 0-5, so add one for 1-6
    int roll2 (rand() % 6 + 1); // mod 6 is 0-5, so add one for 1-6
    int total = roll1 + roll2;
    cout << "You rolled: " << roll1 << " + " << roll2 << " = " << total << endl;

    //processing -- figure out win, lose, or point
    // || is or  -- both sides must be full boolean expressions (&& is and)
    if (total == 7 || total == 11) {
        cout << " You Win!" << endl;
    
    }
    else if (total == 2 || total == 3 || total == 12) {
        cout << " You Lose." << endl;

    }
    else {
        // point numbers (TODO in mod 4)
        int point = total;
        cout << "Your point number is: " << point << endl;
        cout << "keeping rolling: point is win, 7 is loss." << endl;
        // we will finish this later because it requires a loop 

    }



    return 0; //no errors 
}