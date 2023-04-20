/*
    Write a function that uses the function from the previous exercise to create another function that takes as input 2 dates (day, month and year) and calculates the number of days between both dates. You can assume also that exists a function that determines if a year is odd. 
*/

#include <iostream>

using namespace std;

int min(int a, int b){
    if(a > b) return b;
    return a;
} //function to return max between 2 numbers

int max(int a, int b){
    if(a > b) return a;
    return b;
} //function to return max between 2 numbers

bool isOdd(int year){
    if((year %4 == 0) && (year %100 != 0)){
        return true; 
    } else if((year%100 == 0) && (year %400 == 0)){
        return true;
    } else {
        return false;
    }
} //function to determine if the year is a leap year

int totalDays(int year, int days){
    while(year > 0){
        days += 365;
        if(isOdd(year)){
            days++;
        }
        year--;
    }
    return days;

} //this function will return the total number of days passed from year 0 up until year of input

int toMonthDays(int month){
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
    int d1, d2, m1, m2, y1, y2;

    cout << "Please insert year of date 1: ";
    cin >> y1;
    cout << endl;

    while(y1 < 0){
        cout << "Invalid year, insert a year A.C: ";
        cin >> y1;
        cout << endl;
    }

    cout << "Month of date 1: ";
    cout << "(1) January        (2) February        (3) March";
    cout << endl;
    cout << "(4) April          (5) May             (6) June";
    cout << endl;
    cout << "(7) July           (8) August          (9) September";
    cout << endl;
    cout << "(10) October       (11) November       (12) December";
    cout << endl;
    cin >> m1;
    cout << endl;

    while(m1 < 1 || m1 > 12){
        cout << "Invalid month, insert a real month: ";
        cin >> m1;
        cout << endl;
    } //validation for impossible months

    cout << "Day of date 1: ";
    cin >> d1;
    cout << endl;

    if((((m1 == 2 || m1 == 4) || m1 == 6) || m1 == 9) || m1 == 11){
        if(m1 == 2){
            while(d1 < 1 || d1 > 28){
                cout << "Invalid day, insert correct day: ";
                cin >> d1;
                cout << endl;
            }
        }else if(isOdd(y1) && (d1 < 1 || d1 > 29)){
            while(d1 < 1 || d1 > 29){
                cout << "Invalid day, insert correct day: ";
                cin >> d1;
                cout << endl;
            }
        } else {
            while(d1 < 1 || d1 > 30){
                cout << "Invalid day, insert correct day: ";
                cin >> d1;
                cout << endl;
            }
        }
    } else {
        while(d1 < 1 || d1 > 31){
            cout << "Invalid day, insert correct day: ";
            cin >> d1;
            cout << endl;
        }
    } //validation for days in month

    cout << "Now insert year of date 2: ";
    cin >> y2;
    cout << endl;

    while(y2 < 0){
        cout << "Invalid year, insert a year A.C: ";
        cin >> y2;
        cout << endl;
    }

    cout << "Month of date 2: ";
    cout << "(1) January        (2) February        (3) March";
    cout << endl;
    cout << "(4) April          (5) May             (6) June";
    cout << endl;
    cout << "(7) July           (8) August          (9) September";
    cout << endl;
    cout << "(10) October       (11) November       (12) December";
    cout << endl;
    cin >> m2;
    cout << endl;

    while(m2 < 1 || m2 > 12){
        cout << "Invalid month, insert correct month: ";
        cin >> m2;
        cout << endl;
    }

    cout << "Day of date 2: ";
    cin >> d2;
    cout << endl;


    if((((m2 == 2 || m2 == 4) || m2 == 6) || m2 == 9) || m2 == 11){
        if(m2 == 2){
            while(d2 < 1 || d2 > 28){
                cout << "Invalid day, insert correct day: ";
                cin >> d2;
                cout << endl;
            }
        }else if(isOdd(y2) && (d2 < 1 || d2 > 29)){
            while(d2 < 1 || d2 > 29){
                cout << "Invalid day, insert correct day: ";
                cin >> d2;
                cout << endl;
            }
        } else {
            while(d2 < 1 || d2 > 30){
                cout << "Invalid day, insert correct day: ";
                cin >> d2;
                cout << endl;
            }
        }
    } else {
        while(d2 < 1 || d2 > 31){
            cout << "Invalid day, insert correct day: ";
            cin >> d2;
            cout << endl;
        }
    } //validation for days in month //validation for days in month

    // cout << "Days of date 1: " << d1 << endl;
    // cout << "Days of date 2: " << d2 << endl;

    d1 += toMonthDays(m1);
    d2 += toMonthDays(m2);
    //summing all the days up until that month 

    // cout << "Days up until month of date 1: " << d1 << endl;
    // cout << "Days up until month of date 2: " << d2 << endl;

    d1 = totalDays(y1, d1);
    d2 = totalDays(y2, d2);
    //total number of days

// cout << "Days from date 1: ";
// cout << d1;
// cout << endl;

// cout << "Days from date 2: ";
// cout << d2;
// cout << endl;

    cout << "Days difference is: " << max(d1, d2) - min(d1, d2);

    return 0;
} 
