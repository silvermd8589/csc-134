// CSC 134
// Silvemane
// M1T1 - Hello World 
// 8/24/26

// Startup
#include <iostream>
using namespace std;

int main() {
    cout << "Hello CSC 134";   // c-out not count 
    cout << endl;              // endl or "\n" is the end of line 
    
    cout << "What is you your name? " ;
    string name;
    cin >> name;

    cout << "Nice to meet you, " << name << endl; 
    
    return 0; // no errors 
}