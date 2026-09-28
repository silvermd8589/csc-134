///CSC-134
// SIlvermane
// M3LAB1
//9/28/26
// .




 #include <iostream>
    using namespace std;
    void chooseDoor1();
    void chooseDoor2();

    int main() {
        int choice;
        cout << "Do you choose Door 1 or Door 2?" << endl;
        cout << "1 Choose door #1" << endl;
        cout << "2 Choose door #2" << endl;
        cin >> choice;
        

        if (1 == choice) {
            chooseDoor1();
        }
        else if (2 == choice) {
            chooseDoor2();
        }
        else{
            cout << "I'm sorry, that is not a valid choice" << endl;

        cout << "Thank you for plsying!" << endl;

    }



    return 0; //no errors 
}


