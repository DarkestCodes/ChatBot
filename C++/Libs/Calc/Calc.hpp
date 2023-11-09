//////////////////////
// By DarkestCodes //
////////////////////

// *Warning!!!! Please Don't play with the codes or the program may miss behave

#include <iostream>

using namespace std;

void calc(string chatbot, double x, double y, short input){
    
    double result;
    if (input == 1 or input == 2 or input == 3 or input == 4) {
        switch (input) {
            case 1:
                result = x + y;
                cout << "\n" << chatbot << ": " << x << "+" << y << "=" << result << "\n";
                break;
            case 2:
                result = x - y;
                cout << "\n" << chatbot << ": " << x << "-" << y << "=" << result << "\n";
                break;
            case 3:
                if (y >= 1) {
                    result = x / y;
                    cout << "\n" << chatbot << ": " << x << "/" << y << "=" << result << "\n";
                    break;
                } else {
                    cout << "\n" << chatbot << ": Math Error" << "\n";
                    break;
                }
            case 4:
                result = x * y;
                cout << "\n" << chatbot << ": " << x << "*" << y << "=" << result << "\n";
                break;

            default:
                cout << "\n" << chatbot << ": Unknown option please try again! " << "\n";
                break;
        }
        system("pause");
        clear();
    } else {
        cout << "\n" << chatbot << ": Unknown option please try again! " << "\n";
    }
}