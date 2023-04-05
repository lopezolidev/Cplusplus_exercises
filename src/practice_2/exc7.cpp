/*
    Write an algorithm that takes as input a date (day and month) from present year and prints the number of days passed from january the 1st
*/

#include <iostream>

using namespace std;

int calendar(int month, int bis){
    int res = 0;
    if(month >= 2 && bis == 1){
        res++;
    }
    switch (month)
    {
    case 0:
        res = 0;
        break;
    case 1:
        res += 31;
        break;
    case 2:
        res += 59;
        break;
    case 3:
        res += 90;
        break;
    case 4:
        res += 120;
        break;
    case 5: 
        res += 151;
        break;
    case 6:
        res += 181;
        break;
    case 7:
        res += 212;
        break;
    case 8:
        res += 243;
        break;
    case 9:
        res += 273;
        break;
    case 10: 
        res += 304;
        break;
    case 11:
        res += 334;
    }
    return res;
} //this function sums the passed days from a given month, taking into account if the month is before or after february and if it's an odd year

bool validDay(int day, int month, int odd){
    if(day < 1) return true;
    if((day > 28 && odd != 1) && month == 2){
        return true;
    } else if(day > 30 && (((month == 2 || month == 4) || (month == 6 || month == 9)) || month == 11)){
        return true;
    } else if(day > 31 && ((((month == 1 || month == 3) || (month == 5 || month == 7)) || (month == 8 || month == 10)) || month == 12)){
        return true;
    } else {
        return false;
    }
} //function to validate the following cases: day is less than 1, day is february 29th but is not an odd year, the day is greater than 30 but the month has even number of days and the day is greater than 31 and the month doesn't have an odd number of days

int main(){
    int day, month, bis;

    cout << "Is the year odd? (1)Yes - (0)No: ";
    cin >> bis;
    cout << endl;

    if(bis != 0 && bis != 1){
        cout << "Invalid type of year"; 
        return -1;
    } //type of year validation
    
    cout << "Insert month: " << endl;
    cout << "(1) January - (2) February - (3) March - (4) April" << endl;
    cout << "(5) May - (6) June - (7) July - (8) August" << endl;
    cout << "(9) September - (10) October - (11) November - (12) December" << endl;
    cin >> month;
    //initializing basic variables

    if(month < 1 || month > 12){
        cout << "Invalid month";
        return -1;
    }  //month validation

    cout << "Insert day: " << endl;
    cin >> day;

    if(validDay(day, month, bis)){
        cout << "Invalid day of the month";
        return -1;
    } //validating if the day exists in a month or if the day exists in the span of 1 - 31

    cout << "The number of gone days of the year are: " << calendar(month - 1, bis) + day;

    return 0;
}