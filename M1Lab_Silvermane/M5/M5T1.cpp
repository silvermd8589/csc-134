//CSC-134
// SIlvermane
// M5T1
//10/19/26
//void an value returning

#include <iostream>
using namespace std;
void greet();
void speak(string message);
// value returning functions
int num_add(int num);
    int num_double(int num);

int main() {
    cout << "Void Function example" << endl;
    greet();
    speak("Hello World");
    speak ("Another messgae.");
    cout << "Value returning example" << endl;
    int number;
    cout << "Enter an Integer";
    cin >> number;
    int answer = num_add(number);
    cout << "number_add(" << number << ") returns " << answer << endl;

    answer = num_double(number);
    cout << "num_double(" << number << ") returns " << answer << endl;
    
    

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

int num_add(int num) {
    // arguements: num type the value to start with
    // return int, num+1
    num = num + 1;
    return num;


}

int num_double(int num) {
    // argruement num the value to start with
    // return int num + 1
    num *= 2; // same as num = num * 2
    return num;
}