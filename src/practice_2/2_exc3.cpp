/*
    Write an algorithm that takes as input 2 different numbers and prints the second greatest
*/

#include <iostream>

using namespace std;

int main(){
    int n1, n2;
    //We'll make the exercise as follows only with integers but it works with floats too

    cout << "Please insert first number: ";
    cin >> n1;

    cout << "Please insert second number: ";
    cin >> n2;

    if(n1 == n2){
        cout << "Invalid numbers, please insert different numbers";
        return -1;
    } //validating different numbers

    cout << "The greatest number is: ";

    if(n1 > n2) cout << n1; return 0;
    cout << n2; 
    //if n1 is greater will be printed, else n2 will

    return 0;
}