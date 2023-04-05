/*
    Write an algorithm that takes as input a number between 1 and 12, then prints the name of the corresponding month. Be aware of possible erroneous values at the input
*/

#include <iostream>

using namespace std;

void month(int n){
    switch (n)
    {
    case 1:
        cout << "January";
        break;
    case 2:
        cout << "February";
        break;
    case 3:
        cout << "March";
        break;
    case 4:
        cout << "April";
        break;
    case 5:
        cout << "May";
        break;
    case 6:
        cout << "June";
        break;
    case 7:
        cout << "July";
        break;
    case 8:
        cout << "August";
        break;
    case 9:
        cout << "September";
        break;
    case 10:
        cout << "October";
        break;
    case 11:
        cout << "November";
        break;
    case 12:
        cout << "December";
        break;
    }
} //void function that prints the name of the month according to the given number

int main(){
    int n;

    cout << "Please insert the number of the month: ";
    cin >> n;
    //Assigning number of the month

    if(n < 1 || n > 12){
        cout << "Invalid month number";
        return -1;
    }   //valid number test

    month(n);   //calling void function to print the name of the month

    return 0;
}