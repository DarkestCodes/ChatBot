//////////////////////
// By DarkestCodes //
////////////////////

// *Warning!!!! Please Don't play with the codes or the program may miss behave

#include <iostream>
#include <cstdlib>
#include "Libs\Settings\Credits\Credits.hpp"

using namespace std;

void GuessNumber(){
    int input;
    int Tries;
    GetOS(); // To enable clear function
    clear(); // Clear screen

    time_t current_time = time(NULL);
    srand((unsigned) time(NULL));
    int code = rand() % 350; // Generate random number

    cout << "\n\n####################   Guess The Number   ####################\n";
    cout << "                         By DarkestCodes\n";
    cout << "                           Exit type -1\n";
    cout << "###############################################################\n\n";
    
    while (1){

        credit_read(); // To get credits
        double credits = stod(sncredits); // Changes the variable credits from string to double

        cout << "\nYour Guess: ";
        cin >> input;
        cin.clear(); cin.ignore(INT_MAX,'\n');
        if (input == -1){
            clear();
            break;
        } else if (input == code) {
            Tries++;
            cout << "Correct +55 Credits\n\nWith " << Tries << " Tries";
            credits += 55;
            credit_save(credits);
            time_t current_time = time(NULL);
            srand((unsigned) time(NULL));
            int code = rand() % 350;
            Tries = 0;
        } else if (input >= code) {
            cout << "Too High\n";
            Tries++;
            cout << Tries << " Tries\n";
        } else if (input <= code) {
            cout << "Too Low\n";
            Tries++;
            cout << Tries << " Tries\n";
        }
    }
}