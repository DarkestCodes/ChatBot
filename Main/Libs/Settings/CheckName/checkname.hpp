//////////////////////
// By DarkestCodes //
////////////////////

// *Warning!!!! Please Don't play with the codes or the program may miss behave

#include <iostream>

using namespace std;

void checkname(string name, string text){
    if (name == "fuck" or name == "whore" or name == "ass" or name == "asshole" or name == "bitch" or name == "fuckme" or name == "fuckyou" or name == "sex") {
        cout << "\n\n" << text << "\n\n";
        system("pause");
        exit(1);
    }
}