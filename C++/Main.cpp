//////////////////////
// By DarkestCodes //
////////////////////

#include <iostream> // To define cout and many other
#include <cstdlib> // To generate random numbers
#include <string.h> // To use strcmp
#include <cctype> // To change from uppercase and lowercase to lowercase
#include <algorithm> // To change from uppercase and lowercase to lowercase
#include <string> // To change from uppercase and lowercase to lowercase
#include "Libs\CheckName\checkname.hpp" // Check if the username is allowed or not
#include "Libs\GetOS\GetOS.hpp" // OS Detector 
#include "Libs\GetCertificate\GetCertificate.hpp" // Gives you all configration info from the Certification
#include "Libs\Calc\Calc.hpp"

// *Warning!!!! Please Don't play with the codes or the program may miss behave

using namespace std; // To define std::

// To print text to user
void send(string chatbot, string text){
    cout << "\n" << chatbot << ": " << text;
}

// To ask questions
void quest(string chatbot, string name, string support_email){
    string ask;
    string anwser;
    cout << "\n\n*To make chatbot stop asking questions just type break\n";
    while(1) {
        time_t current_time = time(NULL);
        srand((unsigned) time(NULL));
        int quests = rand() % 5;
        if (quests == 0){
            cout << "\n" << chatbot << ": How old are you " << name << "?" << "\n\n" << name << ": ";
            cin >> anwser;
            transform(anwser.begin(), anwser.end(), anwser.begin(),
                [](unsigned char c){ return std::tolower(c); });
            if (anwser == "break"){
                break;
            } else {
                cout << "\n" << chatbot << ": Happy lated birthday!\n";
                send(chatbot, "Where do you live?");
                cout << "\n" << name << ": ";
                cin >> anwser;
                transform(anwser.begin(), anwser.end(), anwser.begin(),
                    [](unsigned char c){ return std::tolower(c); });
                if (anwser.length() >= 3){
                    if(anwser.find("sweden") != string::npos){
                        send(chatbot, "Wow that's fun because i was made in sweden!");
                    } else {
                        send(chatbot, "The name of it is really interssting. Can you tell me about it? y/n");
                        cout << "\n\n" << name << ": ";
                        cin >> ask; 
                        transform(ask.begin(), ask.end(), ask.begin(),
                            [](unsigned char c){ return std::tolower(c); });
                        if (ask == "y"){
                            send(chatbot, "Tell me about it!");
                            cout << "\n\n" << name << ": ";
                            cin >> anwser;
                            send(chatbot, "That was interssting story about where you live!");
                        } else {
                            send(chatbot, "Okay!");
                        }
                    }
                } else {
                    send(chatbot, "Ummm I did not find that land in my system. Is that new land? y/n");
                    cout << "\n\n" << name << ": ";
                    cin >> ask;
                    transform(ask.begin(), ask.end(), ask.begin(),
                        [](unsigned char c){ return std::tolower(c); });
                    if (ask == "y"){
                        send(chatbot, "Oh okay!");
                    } else {
                        send(chatbot, "Do you wish to feedback? y/n");
                        cout << "\n\n" << name << ": ";
                        cin >> ask;
                        transform(ask.begin(), ask.end(), ask.begin(),
                            [](unsigned char c){ return std::tolower(c); });
                        if (ask == "y"){
                            cout << "\n" << chatbot << "You could do a feedback at our Email: " << "\nEmail: " << support_email;
                            send(chatbot, "Thanks for your feedback!");
                        } else {
                            send(chatbot, "Okay!");
                        }
                    }
                }
            }
        } else if (quests == 1) {
            cout << "\n" << chatbot << ": Do you like any type of games " << name << "? y/n";
            cout << "\n\n" << name << ": ";
            cin >> ask;
            transform(ask.begin(), ask.end(), ask.begin(),
                [](unsigned char c){ return std::tolower(c); });
            if (ask == "y/n"){
                cout << "\n" << chatbot << ": That's good!" << "\n" << chatbot << ": What's is the game/games name?";
                cout << "\n\n" << name << ": ";
                cin >> anwser;
                transform(anwser.begin(), anwser.end(), anwser.begin(),
                    [](unsigned char c){ return std::tolower(c); });
                if (anwser == "break"){
                    break;
                } else {
                    if (anwser.length() >= 1){
                        cout << "\n" << chatbot << ": Sounds good to me";
                        send(chatbot, "Could you tell me about it?");
                        cout << "\n\n" << name << ": ";
                        cin >> ask;
                        transform(ask.begin(), ask.end(), ask.begin(),
                            [](unsigned char c){ return std::tolower(c); });
                        if (ask == "y"){
                            cout << "\n" << chatbot << "Tell me about it";
                            cout << "\n\n" << name << ": ";
                            cin >> anwser;
                            transform(ask.begin(), ask.end(), ask.begin(),
                                [](unsigned char c){ return std::tolower(c); });
                            if (anwser == "break"){
                                break;
                            } else {
                                cout << "\n" << chatbot << "Okay wow that was intressting!";
                            }
                        } else {
                            cout << "\n" << chatbot << "Okay thank you anyway!";
                        }
                    } else {
                        cout << "\n" << chatbot << ": I didn't hear about that game. Can you tell me about it? y/n";
                        cin >> ask;
                        transform(ask.begin(), ask.end(), ask.begin(),
                            [](unsigned char c){ return std::tolower(c); });
                        if (ask == "y"){
                            cout << "\n" << chatbot << "Tell me about it";
                            cout << "\n\n" << name << ": ";
                            cin >> anwser;
                            transform(ask.begin(), ask.end(), ask.begin(),
                                [](unsigned char c){ return std::tolower(c); });
                            if (anwser == "break"){
                                break;
                            } else {
                                cout << "\n" << chatbot << "Okay wow that was intressting!";
                            }
                        } else {
                            cout << "\n" << chatbot << "Okay thank you anyway!";
                        }
                    }
                }
            } else {
                cout << "\n" << chatbot << ": Oh okay!";
            }
        }
    }
}

int main(){
    read(); // Read Configration files
    GetOS(); // Enable OS Detector
    clear(); // Clear Screen

    // Check what os device is running and if its supported

    if (os == "WindowsOS"){
        cout << "Running on WindowsOS";
    } else if (os == "LinuxOS"){
        cout << "Running on LinuxOS";
    } else if (os == "AppleOS"){
        cout << "Running on AppleOS";
    } else {
        cout << "Running on Unsupported OperatingSystem";
        system("pause");
        exit(1);
    }
    string name; // Username
    string ask; // Takes yes or no
    string exitText = "The name that you provided isn't allowed and is not useable!"; // Exit text for users name if it was forbidden
    string chatbot; // Stores the chatbot name
    string support_email = "official.feedback.chatbot@gmail.com"; // Support email
    
    // Check if the configration files allows to change chatbot name

    if (change == false){
        chatbot = "DarkBot";
    } else {
        chatbot = new_name;
    }

    // ChatBot

    cout << "\n\nCertificate Name: " << Certificate_Name << "\n\n";
    cout << "\n*This ChatBot Does Not Have Realtime Information And Is Under Devlopment\n*Notice Your Name Will Be Used In The Chat!\n\n" << chatbot << ": Whats your name: ";    
    cin >> name;
    checkname(name, exitText);
    clear();
    cout << "\n" << chatbot << ": Hi " << name << "! My name is " << chatbot;
    cout << "\n" << chatbot << ": What can i help you with?\n\n";

    // Start conversation between chatbot and the user
    
    while (1){
        string anwser;
        cout << "\n\n" << name << ": ";
        cin >> anwser;
        transform(anwser.begin(), anwser.end(), anwser.begin(),
            [](unsigned char c){ return std::tolower(c); });

        if (anwser.find("hi") != string::npos or anwser.find("hello") != string::npos){
            time_t current_time = time(NULL);
            srand((unsigned) time(NULL));
            int hello = rand() % 5;
            if (hello == 0){
                cout << "\n" << chatbot << ": Hi " << name << "!";
            } else if (hello == 1){
                cout << "\n" << chatbot << ": Hello " << name << "!";
            } else if (hello == 2){
                cout << "\n" << chatbot << ": Welcome " << name << "!";
            } else if (hello == 3){
                cout << "\n" << chatbot << ": Hey there! " << name << "!";
            } else if (hello == 4 or hello == 5){
                cout << "\n" << chatbot << ": What's new? " << "\n\n" << name << ": ";
                cin >> anwser;
                transform(anwser.begin(), anwser.end(), anwser.begin(),
                    [](unsigned char c){ return std::tolower(c); });
                if (anwser == "nothing") {
                    cout << "\n" << chatbot << ": It seems that you're bored. How about asking you some questions? y/n" << "\n\n" << name << ": ";
                    cin >> ask;
                    transform(ask.begin(), ask.end(), ask.begin(),
                        [](unsigned char c){ return std::tolower(c); });
                    if (ask == "y"){
                        quest(chatbot, name, support_email);
                    } else {
                        cout << "\n" << chatbot << ": I'm sorry that i couldn't help you " << name;
                    }
                } else {
                    cout << "\n" << chatbot << ": It seems that you're bored. How about asking you some questions? y/n" << "\n\n" << name << ": ";
                    cin >> ask;
                    transform(ask.begin(), ask.end(), ask.begin(),
                        [](unsigned char c){ return std::tolower(c); });
                    if (ask == "y"){
                        quest(chatbot, name, support_email);
                    } else {
                        cout << "\n" << chatbot << ": I'm sorry that i couldn't help you " << name;
                    }
                }
            } else {
                cout << "\n" << chatbot << ": I didn't understand please try diffrent keywords next time";
            }

        } else if (anwser.find("clear") != string::npos or anwser.find("clear chat") != string::npos or anwser == "chat") {
            clear();
            cout << "\n" << chatbot << ": Chat has been wiped";

        } else if (anwser.find("creator") != string::npos or anwser.find("who created you") != string::npos or anwser.find("devloper") != string::npos) {
            clear();
            cout << "\n______________________________";
            cout << "\n* My Devloper (DarkestCodes) *";
            cout << "\n*   Devloper: DarkestCodes   *";
            cout << "\n*   Date: 2023/10/26         *";
            cout << "\n*   Country: Sweden          *";
            cout << "\n______________________________\n\n\n";
            system("pause");
            clear();

        } else if (anwser == "calc" or anwser == "calculator" or anwser == "math") {
            short input;
            int x;
            int y;
            send(chatbot, "Addition(1) Subtraction(2) Division(3) Multiplication(4)\nOption: ");
            cin >> input;
            send(chatbot, "Num1: ");
            cin >> x;
            send(chatbot, "Num2: ");
            cin >> y;

            calc(chatbot, x, y, input);

        } else if (anwser == "quest" or anwser == "questions" or anwser == "question" or anwser.find("ask me quest") != string::npos) {
            quest(chatbot, name, support_email);
        } else {
            cout << "\n" << chatbot << ": I didn't understand please try other keywords";
        }
    }
}
