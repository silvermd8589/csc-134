//CSC-134
// SIlvermane
// M1HW1_The_Core 
//8/31/26
// Movie Talk The Core 

#include <iostream>
using namespace std;

// Staaring point 
int main() {

    //purpose : practice using string, int, and double within natural text 
    // Declare varialbes 
    string movie_name;  // Film title as in IMBD
    int    movie_year;   // year of release 
    double movie_grossm; //millions of USD of the gross 

    movie_name = "The Core";
    movie_year = 2003;
    movie_grossm = 74.1;

    // Print the movie blurb
    cout << "The movie " << movie_name << " came out in " << movie_year << "." << endl;

    cout << "Its grossed in total $" << movie_grossm << " million." << endl;

    //Print a movie qoute 
    cout << "Qoute:" << endl << " \t\"Look I had this ship built in three damn months, I didn't think I'd deliberately be sabotaging her!\" " << endl;
    cout << "Qoute:" << endl << " \t\"You're asking me to navigate a vessel through solid rock, pressurized magma, and unknown densities using a hull made out of Unobtainium.\" " << endl;
    cout << "Qoute:" << endl << " \t\"We are talking about the end of the world. Not next week, not tomorrow, right now \" " <<endl;
    cout << "Qoute:" << endl << " \t\" The core has stopped spinning. \" " << endl;

    // Print triva 
    cout << "triva:" << endl << "\t\"The Unobtainium Riddle: The fictional material used to build the ship, \"Unobtainium,\" is a classic aerospace engineering industry joke for a material that has ideal properties but is impossible to get.\"" << endl;
    cout << "triva:" << endl << "\t\"Box Office Run: Despite a reported production budget of around $60 million, the film grossed just over $74 million worldwide, making it a box office bomb.\"" << endl;





    return 0; //no errors 
}