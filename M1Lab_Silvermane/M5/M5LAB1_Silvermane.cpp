//CSC-134
// SIlvermane
// M5LAB1
//10/26/26
//spooky game

#include <iostream>
#include <limits>
using namespace std;

// protypes 
void front_door();
void back_door();
void living_room();
void kicthen();
void bathroom();
void mater_bathroom();
void master_bedrooom();
void bedroom_2();
void bedroom_3();
void shed();
int name;
string choice;

int main () {
    
    cout << "Welcome to the house of horrors for adults" << endl;
    cout << "what is you Name?" << endl;
    cin >> name;
    cout << "You are standing in front of a drak gloomy looking house." << endl;
    cout << "You look around and see there are no other houses around " << endl;
    cout << "Would you like to enter through the front door or the back door?" << endl;
    cin >> choice;
    if (choice == "front") {
        front_door();
    }
    else if (choice == "back") {
        back_door();
    }
    
    
    return 0;
}

void front_door() {
    cout << "You see you are in a living room with a normal set up, a couch, chair, and a tv playing Nightmare Before Christmas." << endl;
    cout << " The tv is playing so loud you can not hear anything else in the house." << endl;
    cout << "would you like to turn off the tv? yes or no" << endl;
    cin >> choice;

    if  (choice == "yes"){
        cout << "You walk over and turn off tv but fell something fuzzy on your hand but it moves before you can see it" << endl;
    }
    else if (choice == "no") {
        cout << "You are standing there and see a shadow moving around where the tv is mounted" << endl;
        cout << "You look around to see if there is a light casting your shadow that way but find you have shadow" << endl;
    }
}
void back_door() {
    cout << "You have enter in through the back door." << endl;
    cout << "You find yourself standing in the kicthen." endl;
    cout << "It is a normal kicthen, stove, cabinets, fridge, table and chairs." << endl;
    cout << "You can a hear a tv playing so load you can not hear anyting else." << endl;
    cout << "Would you like to stay in this room or go living room?"
    cin >> choice;
    if (choice == "stay") {
        
    }
}