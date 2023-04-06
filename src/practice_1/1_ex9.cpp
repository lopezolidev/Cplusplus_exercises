#include <iostream>

using namespace std;

/*
    Jose and Pedro are two frogs. Jose can leap J centimeters, Pedro can leap P centimeters. Suppose both frogs start leaping at the same time in the same spot (and in the same direction), write an algorithm that determines if both frogs will match at some point before Jose jumps K times.
*/

int main() {
    int j, p, k;

    cout << "Insert lenght of Jose's leaps in cm: " << endl;
    cin >> j;

    cout << "Insert lenght of Pedro's leaps in cm: " << endl;
    cin >> p;
    //initializing variables 

    if(j <= 0 || k <= 0){
        cout << "Sorry, these lengths are invalid";
        return -1;
    } if(j == p){
        cout << "Sorry, these lengths are invalid";
        return -1;
    } // making sure there're no invalid lengths

    /*
        If Jose's leap length is less than Pedro's leap length, the else block is executed, thus we have to know if the division between the Pedro's leap length is divisible by Jose's leap length. If it's true, k, which is the minimum number to know when both frogs will step in the same spot at some point, is quotient from that division, if not will be the greatest number, being in that case Pedro's. 

        If the else block is not executed we've the same execution but with the values of divisor and dividen flipped. 
    */

    cout << "Both frogs will step in the same place when ";
    
    if(j > p){
        if(j % p == 0){
            k = j / p;
        } else {
            k = j;
        }
        cout << "Pedro ";
    
    } else {
        if(p % j == 0 ){
            k = p / j;
        } else {
            k = p;
        }
        cout << "Jose ";
    }

    cout <<"leaps " << k << " times";
    //outputting result

    return 0;
}