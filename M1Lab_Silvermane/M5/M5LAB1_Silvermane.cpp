//CSC-134
// SIlvermane
// M5LAB1
//10/26/26
//spooky game

#include <iostream>
#include <limits>
#include <algorithm>
#include <cctype>

using namespace std;

// prototypes
void front_door();
void back_door();
void living_room();
void kitchen();
void bathroom();
void master_bathroom();
void master_bedroom();
void bedroom_2();
void bedroom_3();
void hallway();
void payment_room();

// ---- coin tracking ----
int coins = 0;               // total gold coins collected
const int TAX_OWED = 14;     // coins needed to beat the tax man (change this to adjust difficulty)
 
// one flag per coin spot so each can only be taken once
bool kitchenCoin = false;       // 1 coin
bool nightstandCoin = false;    // 1 coin
bool masterBathCoin = false;    // 1 coin
bool bathroomCoin = false;      // 1 coin
bool bedroom2Coins = false;     // 5 coins
bool bedroom3Coins = false;     // 5 coins

string choice;
string toLower(string s) {
    transform(s.begin(), s.end(), s.begin(),
              [](unsigned char c) { return tolower(c); });
    return s;
}
// adds coins only if this spot hasn't been searched before
// (the & means the real flag gets changed, not a copy)
void findCoins(bool& taken, int amount) {
    if (taken) {
        cout << "You already took the coins from here." << endl;
    }
    else {
        taken = true;
        coins += amount;
        cout << "You now have " << coins << " gold coin(s)." << endl;
    }
}

int main () {
    string name;
    cout << "Welcome to the house of horrors for adults" << endl;
    cout << "what is you Name?" << endl;
    getline(cin, name); // get a name that can contain spaces

    cout << "You are standing in front of a drak gloomy looking house." << endl;
    cout << "You look around and see there are no other houses around " << endl;
    cout << "Would you like to enter through the front door or the back door?" << endl;
    while (true) {
    getline(cin >> ws, choice);
    choice = toLower(choice);
    if (choice == "front") {
        front_door();
        break;
    }
    else if (choice == "back") {
        back_door();
        break;
    }
       else {
            cout << "Please type front or back." << endl;
        }
}
    
    
    return 0;
}

void front_door() {
    cout << "You are standing in the living room" << endl;
    living_room();
    
}
void back_door() {
   cout << "You have enter through the back door. (is it your first time?)" << endl;
   kitchen();

}
void kitchen() {
     string cabinet;
    string stove;
    cout << "You have enter in through the back door." << endl;
    cout << "You find yourself standing in the kicthen." << endl;
    cout << "It is a normal kicthen, stove, cabinets, fridge, table and chairs." << endl;
    cout << "You can a hear a tv playing so load you can not hear anyting else." << endl;
    cout << "Would you like to stay in this room or go living room?";
    getline(cin >> ws, choice);
    choice = toLower(choice);
    if (choice == "stay") {
        cout << "would you like to search in anything?" << endl;
        getline(cin, choice);
        choice = toLower(choice);
        if (choice == "yes") {
            cout << "What would you like to search? cabinet, stove, fridge or cabinet?" << endl;
            getline(cin, choice);
            choice = toLower(choice);
            if (choice == "cabinet") {
                cout << "A gold coin!" << endl;
                cout << "Might want to hold on to this coin; it might come in handy." << endl;
                findCoins(kitchenCoin, 1);
            }
            else {
                cout << "Some lint." << endl;
            }
        }
    }
    living_room();
}
void living_room() {
    cout << "You see you are in a living room with a normal set up, a couch, chair, and a tv playing Nightmare Before Christmas." << endl;
    cout << " The tv is playing so loud you can not hear anything else in the house." << endl;
    cout << "would you like to turn off the tv? yes or no" << endl;
    getline(cin >> ws, choice);
    choice = toLower(choice);

    if (choice == "yes") {
        cout << "You walk over and turn off tv but fell something fuzzy on your hand but it moves before you can see it" << endl;
    }
    else if (choice == "no") {
        cout << "You are standing there and see a shadow moving around where the tv is mounted" << endl;
        cout << "You look around to see if there is a light casting your shadow that way but find you have shadow" << endl;
    }
    cout << "Would you like to go in kicthen or hallway?" << endl;
    getline(cin, choice);
    if (choice == "kicthen") {
        kitchen();
    }
    else if (choice == "hallway") {
        hallway();
    }
}
void hallway() { 
    cout << "You feel something hairy rub accross the back of you neck!" << endl;
    cout << "There are 4 doors, there is a Master Bedroom, Bedroom 1, Bedroom 2, and Bathroom" << endl;
     while (true) {
        cout << "Which door do you open? ";
        getline(cin, choice);
        choice = toLower(choice);

        if (choice == "bathroom") {
            bathroom();
            return;
        } else if (choice == "master bedroom") {
            master_bedroom();
            return;
        } else if (choice == "bedroom 2") {
            bedroom_2();
            return;
        } else if (choice == "bedroom 3") {
            bedroom_3();
            return;
        } else {
            cout << "That's not a door. Try again." << endl;
        }
    }
}
void master_bedroom() {
    string nightstand;
    cout << "You have enter in to the Master Bedroom." << endl;
    cout << "There is another door that leads to the Master Bathroom, bed, dresser, and a nightstand." << endl;
    cout << "Would you like to search anything?" << endl;
    getline(cin, choice);
    choice = toLower(choice);
    if (choice == "nightstand") {
        cout << "You found a Gold coin!" << endl;
        findCoins(nightstandCoin, 1);
    }
    else if (choice == "master bathroom") {
        master_bathroom();
    }
    else {
        cout << "You found lint." << endl;
    }

}
void master_bathroom() {
    cout << "You have enter the master bathroom." << endl;
    cout << "There is a tub/shower, sink, and a toilet." << endl;
    cout << "Would you like to search anyting?" << endl;
    getline(cin, choice);
    choice = toLower(choice);
    if (choice == "toilet") {
        cout << "You found a Gold Coin!" << endl;
        findCoins(masterBathCoin, 1);
    }
    else {
        cout << "You found lint." << endl;
    }
}
void bathroom() {
    cout << "You have enter into the bathroom." << endl;
    cout << "There is a toilet, sink, tub" << endl;
    cout << "would you like to search anything?" << endl;
    getline(cin, choice);
    choice = toLower(choice);
    if (choice == "tub") {
        cout << "You found a Gold coin!" << endl;
        findCoins(bathroomCoin, 1);
    }
    else {
        cout << "You found lint." << endl;
    }
}
void bedroom_2() {
    cout << "You have enter a Bedroom" << endl;
    cout << "This bedroom is a childs room with toys all over the place, and a small bed and dresser." << endl;
    cout << "Is this room really worth you time to search?" << endl;
    getline(cin, choice);
    choice = toLower(choice);
    if (choice == "yes") {
        cout << "What would you like to search?" << endl;
        getline(cin, choice);
        choice = toLower(choice);
        if (choice == "small bed") {
            cout << "You found 5 Gold coins!" << endl;
            findCoins(bedroom2Coins, 5);
        }
        else {
            cout << "All you did was step on toys and found lint." << endl;
        }
    }
    else if (choice == "no") {
        hallway();
    }
}
void bedroom_3() {
     cout << "You have enter a Bedroom" << endl;
    cout << "This bedroom is a childs room with toys all over the place, and a small bed and dresser." << endl;
    cout << "Is this room really worth you time to search?" << endl;
    getline(cin, choice);
    choice = toLower(choice);
    if (choice == "yes") {
        cout << "What would you like to search?" << endl;
        getline(cin, choice);
        choice = toLower(choice);
        if (choice == "dresser") {
            cout << "You found 5 Gold coins!" << endl;
            findCoins(bedroom3Coins, 5);
        }
        else {
            cout << "All you did was step on toys and found lint." << endl;
        }
    }
    else if (choice == "no") {
        hallway();
    }
}
void payment_room() {
    cout << "You have been transported to a room with white walls and goverment flooring" << endl;
    cout << "The hairy thing you have been feeling is a Tax man" << endl;
    cout << "He says you owe taxes on that house and must be able to pay right now or lose you house!" << endl;
    cout << "He demands " << TAX_OWED << " gold coins." << endl;
    cout << "How many gold coins do you have?" << endl;
    cout << "You dump out your pockets and count: " << coins << " gold coin(s)." << endl;
 
    if (coins >= TAX_OWED) {
        cout << "The tax man counts every coin, scowls, and stuffs them in his bag." << endl;
        cout << "\"Paid in full,\" he grumbles, and he vanishes in a puff of paperwork." << endl;
        cout << "YOU WIN! The house is yours." << endl;
    }
    else {
        cout << "You are " << (TAX_OWED - coins) << " coin(s) short!" << endl;
        cout << "The tax man grabs you by the collar and throws you out of the house." << endl;
        cout << "Then he hoists the whole house onto his back and carries it away with him." << endl;
        cout << "GAME OVER." << endl;
    }
}