// CSC 134
// Silvermane
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

    cout << "Nice to meet you, " << name << endl ;

    cout << "What are your hobbies? " ;
    string hobbies;
    cin >> hobbies;

    cout << "I like hobbies to " << hobbies << endl ;


    return 0; // no errors 
}
