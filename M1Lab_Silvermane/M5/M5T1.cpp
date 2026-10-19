//CSC-134
// SIlvermane
// M5T1
//10/19/26
//void an value returning

#include <iostream>
using namespace std;
void greet();
void speak(string message);

int main() {
    cout << "Void Function example" << endl;
    greet();
    speak("Hello World");
    speak ("Another messgae.");

    return 0;

}

//define functions here
void greet() {
    //greet user, no agruments in, no return out
    cout << "Whats up?" << endl;
}

void speak(string message) {
    //talk to user
    // agrument: string the message to speak 
    // return none
    //(This would be usefull if i wanted speak text to look a certain way etc)
    cout << message << endl;
}