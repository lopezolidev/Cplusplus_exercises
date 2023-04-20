/*
    Write a function that takes as input a month of the year and determine the number of days passed from the start of the year up until the first day of the month
*/

#include <iostream>

using namespace std;

int days(int month){
    switch (month)
    {
    case 1: //JAN 31
        return 0;
        break;
    case 2: //FEB 28
        return 31;
        break;
    case 3: //MAR 31
        return 59;
        break;
    case 4: // APR 30
        return 90;
        break;
    case 5://MAY 31
        return 120;
        break;
    case 6: //JUN 30
        return 150;
        break;
    case 7: //JUL 31
        return 181;
        break;
    case 8: //AUG 31
        return 212;
        break;
    case 9: //SEP 30
        return 243;
        break;
    case 10: //OCT 31
        return 273;
        break;
    case 11: //NOV 30
        return 304;
        break;
    case 12: //DEC 31
        return 334;
        break;
    }

    return -1;
}

int main(){
    int m;

    cout << "Select month of the year: ";
    cout << "(1) January        (2) February        (3) March";
    cout << endl;
    cout << "(4) April          (5) May             (6) June";
    cout << endl;
    cout << "(7) July           (8) August          (9) September";
    cout << endl;
    cout << "(10) October       (11) November       (12) December";
    cout << endl;
    cin >> m;
    cout << endl;

    while(m < 1 || m > 12){
        cout << "Invalid month, insert a real month: ";
        cin >> m;
        cout << endl;
    } //validation for impossible months

    cout << days(m);
    return 0;
}