/*
    Write an algorithm that takes as input the exact time (hours, minutes, second and AM/PM) and prints the number of seconds in that day
*/

#include <iostream>

using namespace std;

int main(){
    int c, H, M, S;

    cout << "Which is the time of the day? " << endl;
    cout << "1- Morning - Early morning" << endl;
    cout << "2- Afternoon - Night" << endl;

    cin >> c;
    //initializing c variable

    if(c < 1 || c > 2){
        cout << "Invalid moment of the day, please insert a valid time";
        return -1;
    } //validation for time of the day

    cout << "Please insert Hours: ";
    cin >> H;
    cout << endl;

    cout << "Please insert Minutes: ";
    cin >> M;
    cout << endl;

    cout << "Please insert Seconds: ";
    cin >> S;
    cout << endl;
    //Assigning time variables

    if(((M < 0 || M > 59) || (H < 0 || H > 12)) || (S < 0 || S > 59)){
        cout << "Invalid time";
        return -1;
    } //correct hour validation    

    if(H == 12){
        H = 0;
    } //validating case when H is greater than 12 and when it's not just sum 12 to that hour
               
    if( c == 2) H += 12; //only will sum 12 to hours when is afternoon and is not 12
     
    cout << "Your total time in seconds of the day is: " << endl;
    cout << H * 3600 + M * 60 + S;

    return 0;
}