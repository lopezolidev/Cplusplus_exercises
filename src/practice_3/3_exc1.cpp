/*
    Write an algorithm that reads a number N, calculates and prints the number of digits of N
*/

#include <iostream>

using namespace std;

int main(){
    long int n = 0;
    int c = 0;

    cout << "Please insert a number: ";
    cin >> n;
    cout << endl;
    //assigning variable

    cout << "The number " << n;

    while(n > 0){
        n /= 10;
        c++;
    } //every time the number is divided by 10 the counter 'c' goes up 1 unit

    cout << " is a " << c << " digit number";

    return 0;
}