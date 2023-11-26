//////////////////////
// By DarkestCodes //
////////////////////

// *Warning!!!! Please Don't play with the codes or the program may miss behave


#include <iostream>

using namespace std;

double start_calc(double x, double y, unsigned short method){

    double result;

    switch (method) {
        case 1:
            result = x + y;
            return result;
            break;
        case 2:
            result = x - y;
            return result;
            break;
        case 3:
            if (y >= 1) {
                result = x / y;
                return result;
                break;
            } else {
                result = -1;
                return result;
                break;
            }
        case 4:
            result = x * y;
            return result;
            break;

        default:
            result = -2;
            return result;
            break;
    }
}