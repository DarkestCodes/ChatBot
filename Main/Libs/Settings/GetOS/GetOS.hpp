//////////////////////
// By DarkestCodes //
////////////////////

// *Warning!!!! Please Don't play with the codes or the program may miss behave

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

string os = "Unknown"; // If it isn't of any that OS:es then its unsupported OS

// Check OS:es

string GetOS(){
    #ifdef _WIN32 // Check if it is Windows Device
    os = "WindowsOS";
    return os;
    #endif
    #ifdef __linux__ // Check if it is Linux Device
    os = "LinuxOS"; 
    return os;
    #endif
    #ifdef __APPLE__ // Check if it is Apple Device
    os = "AppleOS";
    return os;
    #endif
}

// Check if your device os is detected

void checkOS(){

    if (os == "Unknown"){
        cout << "\n\nYour Device Is Not Detected!\n\n";
        exit(1);
    } else {
        cout << "\n\nYour Device Is Detected\n\n";
        exit(1);
    }

}


// Clear the screen and check if its OS

void clear(){

    if (os == "WindowsOS"){
        system("cls");
    } else if (os == "LinuxOS" or os == "AppleOS"){
        system("clear");
    }


}
