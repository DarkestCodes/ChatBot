//////////////////////
// By DarkestCodes //
////////////////////

// *Warning!!!! Please Don't play with the codes or the program may miss behave

#include "Libs\Settings\GetCredits\GetCredits.hpp"
#include <cstdlib>

using namespace std;

void TypeCode(){
    int input; // Store provided code
    int tries = 6; // Maxminium tries allowed
    GetOS(); // To enable clear function
    clear(); // Clear screen

    cout << "\n\n####################   Type Code   ####################\n";
    cout << "                   By DarkestCodes\n";
    cout << "                     Exit type -1\n";
    cout << "#######################################################\n\n";
    
    while (1){
        time_t current_time = time(NULL);
        srand((unsigned) time(NULL));
        int code = rand() % 99999999; // Generate random numbers 

        game_read(); // To get credits
        double credits = stod(scredits); // Changes the variable credits from string to double
        cout << "\n\nRequested Number: " << code << "\n\nCode: ";
        
        cin >> input;
        cin.clear(); cin.ignore(INT_MAX,'\n');
        if(cin.fail()){
            cout << "Please type numbers";
        } else {
            if (input == -1 or tries == 0){ // Check if exit number recived 
                clear();
                game_save(credits); // Save credits
                break;

            } else if(input == code){ // Check if the code was correct
                cout << "\nCorrect Code +4.5 Credits\n";
                credits += 4.5;
                game_save(credits); // Save credits
                cout << tries << " Tries Left";

            } else { // If it was incorrect
                cout << "\nIncorrect Code\n";
                tries--;
                cout << tries << " Tries Left";
            }
        }
    }
}