#include <iostream>

using namespace std;

/*
    Write an algorithm that recieves a 4-biy binary number and transforms it into a decimal number 
*/

int main() {
    int bin, a, b, c, d;

    cout << "Please insert the 4 digit binary number: ";
    cin >> bin;
    //creating variables and inserting value from binary 

    if( bin % 10 == 1){
        d = 1;
    } else {
        d = 0;
    }
    //first comparisson obtaining last element from the binary

    bin = bin / 10;
    /*
    first division, restricting the value to 3 digits

     this pattern will be repeated as shown below ↓
    */

    if( bin % 10 == 1){
        c = 2;
    } else {
        c = 0;
    }

    bin = bin / 10;

    if(bin % 10 == 1){
        b = 4;
    } else {
        b = 0;
    }

    bin = bin / 10;

    if( bin == 1){
        a = 8;
    } else {
        a = 0;
    }

    cout << "Your binary number in decimal format is: " << a + b + c + d;
    //outputting result

    return 0;
}