//////////////////////
// By DarkestCodes //
////////////////////

// *Warning!!!! Please Don't play with the codes or the program may miss behave

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string new_name; // Stores Chatbots new name
bool change; // Checks if Chatbots name is allowed to change
bool fda; // To skip some conditions

string nchange; // Stores the boolean from the Certificate
string Certificate_Name; // Stores the Certificate name

// Get Certificate information
void read(){
    ifstream MyCertificate("Json\\Certificate\\Config\\Name.conf");
    
    while (getline (MyCertificate, Certificate_Name)) {
        fda = false;
    }
    MyCertificate.close();


    ifstream MyReadFile("Json\\Certificate\\Config\\Change.conf");

    while (getline (MyReadFile, nchange)) {
        if (nchange == "true"){
            ifstream ename("Json\\Certificate\\Config\\BotName.conf");
            while (getline (ename, new_name)) {
               change = true; 
            }
            ename.close();
        } else {
            change = false;
        }
    }

    // Close the file
    MyReadFile.close();

    ifstream file;

    // opening the file
    file.open("Json\\Certificate\\Config\\Name.conf");

    // checking if the file opening was successful, it will only be true ie. file would have been opened, only if the file exists, so indirectly we are checking if the file exists or not by opening it, if opened, then the file exists, else does not exists
    if (file){
        fda = true;
    } else {
        cout << "\n\nThere is no configration files available\n\n";
        system("pause");
        exit(0);
    }
}