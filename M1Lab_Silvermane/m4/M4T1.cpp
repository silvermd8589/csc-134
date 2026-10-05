//CSC-134
// SIlvermane
// M1T4
//10/5/2026


#include <iostream>
using namespace std;

int main() {
 // counting loop (part 1)
    int count = 1;
    while (count <= 5) {
    cout << "Hello #: " << count << endl;
    count++; // increament after showing number
    }


    // table of squares (part 2)
    const int MIN_NUM = 1;
    const int MAX_NUM = 10;

    cout << endl << "Num    Num squared" << endl;
    cout << "----------------" << endl;
    int i = MIN_NUM;
    while (i <= MAX_NUM) {
        cout << i << "\t" << i*i << endl;
        i++;
    }

    }