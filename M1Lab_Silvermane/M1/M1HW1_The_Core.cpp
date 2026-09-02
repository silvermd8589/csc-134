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
    cout << "Qoute:" << endl << " \t\"Look I had this ship built in three damn months, I didn't think I'd deliberately be sabotaging her! \" " << endl;
    cout << "Qoute:" << 



    return 0; //no errors 
}