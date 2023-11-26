//////////////////////
// By DarkestCodes //
////////////////////

// *Warning!!!! Please Don't play with the codes or the program may miss behave

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

bool wikiError; // Stores if error was found in wiki lib

bool WindowsCheck(){
    #ifdef _WIN32 // Check if it is Windows Device
    bool windowsos;
    return windowsos = true;
    #endif
}

bool CheckError(){
    ifstream WikiError;

        // Open Error FIle
        WikiError.open("Libs\\Standard\\Wikipedia\\Throw.Error");

        // checking if the file opening was successful, it will only be true ie. file would have been opened, only if the file exists, so indirectly we are checking if the file exists or not by opening it, if opened, then the file exists, else does not exists
        if (WikiError){
            return wikiError = true;
        } else {
            return wikiError = false;
        }
}

bool Search(string wiki){

    bool oswindows = WindowsCheck();

    ofstream SaveWiki("Libs\\Standard\\Wikipedia\\user.input");

    if (SaveWiki.is_open()) { // check if the file was opened successfully
        SaveWiki << wiki; // write data to the file
        SaveWiki.close(); // close the file when done
    } else {
        cout << "Couldn't search";
        system("pause");
        exit(0);
    }
    if (oswindows){
        system("python Libs\\Standard\\Wikipedia\\Wiki.py");
        bool error = CheckError();
        if (error){
            system("python Libs\\Standard\\Wikipedia\\ErrorController.py");
            return error;
        } else {
            return error;
        }
    } else {
        system("python3 Libs\\Standard\\Wikipedia\\Wiki.py");
        bool error = CheckError();
        if (error){
            system("python3 Libs\\Standard\\Wikipedia\\ErrorController.py");
            return error;
        } else {
            return error;
        }
    }
}