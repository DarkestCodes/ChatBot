//////////////////////
// By DarkestCodes //
////////////////////

// *Warning!!!! Please Don't play with the codes or the program may miss behave

#include <fstream>
#include <iostream>

using namespace std;

string scredits; // Stores users earnings

void game_read(){
    ifstream Credit("Json\\Certificate\\Config\\Credits.card");

    while (getline(Credit, scredits)) {
        cout << "\n\nCredits:" << scredits;
    }

    // Close the file
    Credit.close();
}

void game_save(double credits){
    ofstream CreditSave("Json\\Certificate\\Config\\Credits.card");

    if (CreditSave.is_open()) { // check if the file was opened successfully
        CreditSave << credits; // write data to the file
        CreditSave.close(); // close the file when done
    } else {
        cout << "Couldn't save game";
        system("pause");
        exit(0);
    }
}