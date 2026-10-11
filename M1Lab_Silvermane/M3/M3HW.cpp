//CSC-134
// Silvermane
// M3HW-Silver
//10/11/26

#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <iomanip>
using namespace std;

void question_1();
void question_2();
void question_3();

int main() {
    string menuChoice;

    cout << "Good evening/morning, I present you the questions for M3HW" << endl;

    while (true) {
        cout << endl;
        cout << "Which one would you like to look at?" << endl;
        cout << "Enter 1, 2, or 3 for a question, or 'done' to quit: " << endl;
        cin >> menuChoice;

        // Convert to lowercase so Done and DONE work too
        transform(menuChoice.begin(), menuChoice.end(), menuChoice.begin(), ::tolower);

        if (menuChoice == "1") {
            question_1();
        } else if (menuChoice == "2") {
            question_2();
        } else if (menuChoice == "3") {
            question_3();
        } else if (menuChoice == "done") {
            cout << "Thank you for looking at the questions, have a good day" << endl;
            break;
        } else {
            cout << "That is not a valid choice, please try again" << endl;
        }
    }

    return 0;
}

void question_1() {
    string answer;

    while (true) {
        cout << "Do you like me? (Enter yes, no, or maybe) (type done to finish)" << endl;
        cin >> answer;

        // Convert answer to lowercase for case-insensitive comparison
        transform(answer.begin(), answer.end(), answer.begin(), ::tolower);

        if (answer == "no") {
            cout << "Well that is too bad, maybe I will grow on you" << endl;
            cout << "Are you sure you do not like me?" << endl;
            cout << "It does not really matter as I am a computer and I have no emotions" << endl;
            cout << "But does anyone notice?/But does anyone care?" << endl; // credit goes to MCR
        } else if (answer == "yes") {
            cout << "Well this is surprising news!!" << endl;
            cout << "I am glad you like me, I like you too" << endl;
            cout << "I am not entirely sure how I like you too because I am a computer and I have no emotions" << endl;
        } else if (answer == "maybe") {
            cout << "Well I guess we did just meet and need time to get to know each other" << endl;
        } else if (answer == "done") {
            cout << "Thank you for your time, I hope you had fun playing with an emotionless computer looking for a friend" << endl;
            break;
        } else {
            cout << "That is not a valid answer, please try again" << endl;
        }
    }
}

void question_2() {
    cout << "Thank you for looking at Question 2!" << endl;

    // Declare variables
    string mealName;
    double mealPrice;
    int diningOption;
    const double taxRate = 0.08;
    const double dineInTipRate = 0.15;
    double tipRate, taxAmount, tipAmount, total;

    // Input
    cin.ignore();  // clear the leftover Enter from the menu choice
    cout << "Enter the meal name: ";
    getline(cin, mealName);

    cout << "Enter the meal price: ";
    cin >> mealPrice;

    cout << "Dine in or dine out? (1 for dine in, 2 for dine out): ";
    cin >> diningOption;

    // Processing
    if (diningOption == 1) {
        tipRate = dineInTipRate;   // dine in: 15% tip
    } else if (diningOption == 2) {
        tipRate = 0.0;             // dine out: no tip
    } else {
        cout << "That is not a valid option, assuming dine out (no tip)" << endl;
        tipRate = 0.0;
    }

    taxAmount = mealPrice * taxRate;
    tipAmount = mealPrice * tipRate;
    total = mealPrice + taxAmount + tipAmount;

    // Output
    cout << fixed << setprecision(2);
    cout << "Meal:  " << mealName << endl;
    cout << "Price: $" << mealPrice << endl;
    cout << "Tax:   $" << taxAmount << endl;
    cout << "Tip:   $" << tipAmount << endl;
    cout << "Total: $" << total << endl;
}

void question_3() {
    string name;
    string answer;
    cout << "Thank you for looking at Question 3!" << endl;
    cout << "Welcome to Dungeon of HVAC" << endl;
    cout << "Please enter your name: " << endl;
    cin >> name;
    cout << "Hello, " << name << "! Welcome to the Dungeon of HVAC." << endl;
    cout << "You have a meter and are looking at a control panel for a residential HVAC system." << endl;
    cout << "Customer states the unit is not running and it is hot in the house." << endl;
    cout << "Will you check power with your meter or your hands? (Enter 'meter' or 'hands'): " << endl;
    cin >> answer;
    if (answer == "meter") {
        cout << "You see the main power reading is 240v" << endl;
        cout << "The contactor is not pulled in." << endl;
    }
    else if (answer == "hands") {
        cout << "You decide to check the power with your hands." << endl;
        cout << "As you grab the main power wires and feel the wonderful feeling of 240v at 35amps." << endl;
        cout << "This does not kill you but leaves you shaking" << endl;
        cout << "next time use you meter" << endl;
    }
    cout << "Now that we know there is power on the unit, we need to check to see if the transformer is working." << endl;
    cout << "Will you check the transformer with your meter or your hands? (Enter 'meter' or 'hands'): " << endl;
    cin >> answer;
    if (answer == "meter") {
        cout << "You see the transformer is putting out 24v" << endl;
        cout << "The contactor will not pull in when called." << endl;
    }
    else if (answer == "hands") {
        cout << "Do we really need to do this again?" << endl;
        cout << "The 24v does not kill you but at this point you are starting to feel like a fool" << endl;
        cout << "next time use you meter" << endl;
    }
    cout << "Well the transformer is working" << endl;
    cout << "Have you even checked the thermostat yet?" << endl;
    cin >> answer;
    if (answer == "yes") {
        cout << "No you haven't, i never gave you the option" << endl;
        cout << "PLease check the thermostat and make sure it is calling for cooling" << endl;
        cout << "you find it not even calling for cooling, the system is set to off and you have wasted your time" << endl;
    }
    else if (answer == "no") {
        cout << "Good, please check the thermostat and make sure it is calling for cooling" << endl;
        cout << "You find it not even calling for cooling, the system is set to off and you have wasted your time" << endl;
    }
    cout << "You switch the thermostat to cooling and hear the system start up and starts blowing cold air into the house" << endl;
    cout << "You inform the customer the system was turned off and they need to verify system settings before calling for service" << endl;
    cout << "You inform the customer will still be charged the service call fee of $175.00" << endl;
    cout << "The customer is not happy about this and transfrom into a gaint Karen and tries to attack you" << endl;
    cout << "Would you like to fight the Karen or run away? (Enter 'fight' or 'run'): " << endl;
    cin >> answer;
        if (answer == "invalid") {
            cout << "That is not a valid answer, please try again" << endl;
        }
        else if (answer == "run") {
        cout << "You have chose to run away" << endl;
        cout << "You call the office and they inform you are being charged the service call fee of $175.00" << endl;
        cout << "You are now paying $175.00 for a call because a customer could not check a thermostat and you were afraid to fight a Karen" << endl;
        return;  // ends the game
    }
        else if (answer == "fight") {
        cout << "You try to fight the Karen but she is well trained in tearing you down with words" << endl;
        cout << "You try to explain that her inability to check the thermostat is not your problem" << endl;
        cout << "The Karen throws a can of chicken noddle soup at you" << endl;
        cout << "Will you dodge or get hit? (Enter 'dodge' or 'hit'): " << endl;
        cin >> answer;
        if (answer == "dodge") {
            cout << "You can not dodge the can, as she is a marksman in soup can throwing" << endl;
            cout << "You now have a knot on your head" << endl;
        }
        else if (answer == "hit") {
            cout << "You take the hit and now have a knot on your head" << endl;
        }
        else if (answer == "invalid") {
            cout << "That is not a valid answer, please try again" << endl;
        }
    }
    cout << "Now that you have been hit, you are allowed to use weapons to fight the Karen" << endl;
    cout << "You have a hammer and a wrench, and a 11 in 1 screwdriver. Which one will you use? (Enter 'hammer', 'wrench', or 'screwdriver'): " << endl;
    cin >> answer;
    if (answer == "hammer") {
        cout << "You swing your hammer at her toe to stops her from being able to run away" << endl;
        cout << "You have successfully stopped the Karen from running away" << endl;
    } else if (answer == "wrench") {
        cout << "You swing your wrench at her arm so she can not throw another soup can" << endl;
        cout << "You have successfully stopped Karen from throwing soup cans" << endl;
    }
    else if (answer == "screwdriver") {
        cout << "You swing your screwdriver at her stash of soup cans so she has no more to throw" << endl;
        cout << "You have successfully destroyed the Karen's soup can stash" << endl;
    }
    else if (answer == "invalid") {
            cout << "That is not a valid answer, please try again" << endl;
        }
    cout << "You have successfully fought the Karen and she has paid the bill" << endl;
    cout << "You go back to your van with a knot of your head and pull up the dispatch log to see you have yet another no cooling call" << endl;
    }


