/*
    Write an algorithm using only a loop to calculate the aproximate value of π using the serie: π = 4 - 4/3 + 4/5 - 4/7 + 4/9 ... ± 4/9
*/

#include <iostream>

using namespace std;

int main(){
    int dec;
    float num = 4;
    float c = 0;

    cout << "Please insert the magnitude of precision you want to calculate of π: ";
    cin >> dec;
    //assigning variables

    c = 0; //counter of iterations for precision

    while(c < dec){
        num += -4/(4*c + 3) + 4/(4*c + 5); //"modulator" for the approximation of decimals of π
        c++; //increasing iterator for modifying precision
    }

    cout << num;

    return 0;
}