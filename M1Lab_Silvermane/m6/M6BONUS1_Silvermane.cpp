// m6lab2_0002.cpp - Text adventure starter, version 2
//
// You will use: enums, arrays, parallel arrays, a 2D array, and a game loop.
//
// HOW TO READ THE COMMENTS
// EDIT: change this line to make the game your own.
// KEEP: the game needs this line as it is.
// TRY: a question. Predict the answer. Then run the program to check.
// AI: reserved for you. Use it to cite AI help, as the assignment says.
//
// Compile and run:
// g++ -std=c++17 -Wall -Wextra m6lab2_0002.cpp -o adv
// ./adv
#include <iostream>
#include <string>
using namespace std;

// ============================================================
// PART 1: ENUMS (names for numbers)
// The compiler counts from 0. NORTH is 0, EAST is 1, and so on.
// The last name is the count: NUM_DIRECTIONS is 4.
// ============================================================
enum Direction {
    NORTH,
    EAST,
    SOUTH,
    WEST,
    NUM_DIRECTIONS
};

const string DIRECTION_NAMES[NUM_DIRECTIONS] = {
    "north", "east", "south", "west"
};

enum Room {
    LIVING_ROOM,
    DINING_ROOM,
    KITCHEN,
    ALEX_ROOM,
    PENELOPE_ROOM,
    RINA_OFFICE,
    GUEST_BATHROOM,
    HALLWAY,
    NUM_ROOMS
};

int main() {
    // ============================================================
    // PART 2: ROOM DATA (parallel arrays)
    // Same index means same room.
    // ============================================================
    string roomNames[NUM_ROOMS] = {
        "Living Room",
        "Dining Room",
        "Kitchen",
        "Alex's Room",
        "Penelope Room",
        "Rina's Office",
        "Guest Bathroom",
        "Hallway",
    };

    string roomDescriptions[NUM_ROOMS] = {
        "A normal living room that is well lived in.",
        "A kitchen table with some stuff on it, a bookshelf full of books.",
        "A spacious kitchen with an island counter, stove, dishwasher and fridge.",
        "A boy room, toy cars and trucks, marvel poster on the wall and some how a bed and full recliner chair.",
        "A girl room that is some how messy and clean at the same time.",
        "A small office with a computer, shelves, and a rolling chair.",
        "A polished bathroom with a sink, mirror, tub and toilet.",
        "Just a hallway",
    };

    // ============================================================
    // PART 3: THE MAP (a 2D array)
    // ============================================================
    int connections[NUM_ROOMS][NUM_DIRECTIONS];
    for (int i = 0; i < NUM_ROOMS; i++) {
        for (int j = 0; j < NUM_DIRECTIONS; j++) {
            connections[i][j] = -1;
        }
    }

    connections[LIVING_ROOM][NORTH] = DINING_ROOM;
    

    connections[DINING_ROOM][EAST] = ALEX_ROOM;
    connections[DINING_ROOM][NORTH] = KITCHEN;
    connections[DINING_ROOM][SOUTH] = LIVING_ROOM;

    connections[KITCHEN][SOUTH] = DINING_ROOM;
    connections[KITCHEN][EAST] = PENELOPE_ROOM;
    connections[KITCHEN][NORTH] = HALLWAY;

    connections[ALEX_ROOM][WEST] = DINING_ROOM;
    connections[ALEX_ROOM][NORTH] = PENELOPE_ROOM;

    connections[PENELOPE_ROOM][WEST] = KITCHEN;
    connections[PENELOPE_ROOM][SOUTH] = ALEX_ROOM;

    connections[HALLWAY][SOUTH] = KITCHEN;
    connections[HALLWAY][EAST] = RINA_OFFICE;
    connections[HALLWAY][NORTH] = GUEST_BATHROOM;

    connections[RINA_OFFICE][WEST] = HALLWAY;

    connections[GUEST_BATHROOM][SOUTH] = HALLWAY;

    int currentRoom = LIVING_ROOM;
    bool gameRunning = true;

    while (gameRunning) {
        cout << "\nYou are in the " << roomNames[currentRoom] << endl;
        cout << roomDescriptions[currentRoom] << endl;

        cout << "Exits: ";
        bool hasExits = false;
        for (int dir = 0; dir < NUM_DIRECTIONS; dir++) {
            if (connections[currentRoom][dir] != -1) {
                cout << DIRECTION_NAMES[dir] << " ";
                hasExits = true;
            }
        }
        if (!hasExits) {
            cout << "none";
        }
        cout << endl;

        string command;
        cout << "\nWhat would you like to do? ";
        if (!(cin >> command)) {
            break;
        }

        if (command == "north" || command == "n") {
            if (connections[currentRoom][NORTH] != -1) {
                currentRoom = connections[currentRoom][NORTH];
            } else {
                cout << "You can't go that way." << endl;
            }
        } else if (command == "east" || command == "e") {
            if (connections[currentRoom][EAST] != -1) {
                currentRoom = connections[currentRoom][EAST];
            } else {
                cout << "You can't go that way." << endl;
            }
        } else if (command == "south" || command == "s") {
            if (connections[currentRoom][SOUTH] != -1) {
                currentRoom = connections[currentRoom][SOUTH];
            } else {
                cout << "You can't go that way." << endl;
            }
        } else if (command == "west" || command == "w") {
            if (connections[currentRoom][WEST] != -1) {
                currentRoom = connections[currentRoom][WEST];
            } else {
                cout << "You can't go that way." << endl;
            }
        } else if (command == "quit" || command == "q") {
            gameRunning = false;
        } else {
            cout << "I don't understand that command." << endl;
        }
    }

    cout << "Thanks for playing!" << endl;
    return 0;
}
