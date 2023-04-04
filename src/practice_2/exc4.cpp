/*
    In a parking lot the first hour (fraction) is Bs. 100, and every additional hour (or fraction) is Bs. 80. Write an algorithm that recieves as input the exact hour of arrival and departure of a vehicle and calculate the total bill.
*/

#include <iostream>

using namespace std;

int hours(int r1, int r2){
    int h, m, s;

    if(r2%100 > r1%100) s = (60 - r2%100) + r1%100;
    s = r1%100 - r2%100;
    //obtaining seconds when 2nd value is greater and when it's not. Same for the next calculations

    r1 /= 100;
    r2 /= 100;

    if(r2%100 > r1%100) m = (60 - r2%100) + r1%100;
    m = r1%100 - r2%100;

    r1 /= 100;
    r2 /= 100;

    if(r1 < r2) h = (24 - r2) + r1;
    h = r1 - r2;
    
    if(s > 0){
        h++;
    } //what determines the total hour difference is the numbers of seconds

    return h;
}

int military(int H, int M, int S, char n){
    if(n == 'b') H += 12;
    return H*10000 + M*100 + S;
    //function to return the time in military system
}

int main(){
    int Harr, Marr, Sarr, Hdep, Mdep, Sdep, res;
    char mod1, mod2;

    /*
        We'll work in a 24 hour span, not accounting for more than 1 full day
    */

   cout << "Welcome! Please insert arrival moment of the day: " << endl;
   cout << "→ (a)AM or (b)PM?: "; 
   cin >> mod1;
   cout << endl;
   cout << "→ insert Arrival time in (first)Hours, (second)Minutes and (third)Seconds: " << endl;
   cout << "hours: ";
   cin >> Harr;
   cout << endl;
   cout << "minutes: ";
   cin >> Marr;
   cout << endl;
   cout << "seconds: ";
   cin >> Sarr;
   cout << endl;
   //assigning arrival time variables
    
   cout << "Now please insert departure moment of the day: " << endl;
   cout << "→ (a)AM or (b)PM?: "; 
   cin >> mod2;
   cout << endl;
   cout << "→ insert departure time in (first)Hours, (second)Minutes and (third)Seconds: " << endl;
   cout << "hours: ";
   cin >> Hdep;
   cout << endl;
   cout << "minutes: ";
   cin >> Mdep;
   cout << endl;
   cout << "seconds: ";
   cin >> Sdep;
   cout << endl;
    
    // if(((((mod1 || mod2) > 2 || (mod1 || mod2) < 1) || ((Harr || Hdep) > 12) || ((Harr || Hdep) < 1)) || (((Marr || Mdep) > 59)) || (((Marr || Mdep) < 1))) || (((Sarr || Sdep) > 59) || ((Sarr || Sdep) < 1 ))) {
    //     cout <<  "Invalid time";
    //     return -1;
    // } 
    //TODO → VALID TIME???

    if(military(Harr, Marr, Sarr, mod1) > military(Hdep, Mdep, Sdep, mod2)){
        res = hours(military(Harr, Marr, Sarr, mod1), military(Hdep, Mdep, Sdep, mod2));
    }else {
        res = hours(military(Hdep, Mdep, Sdep, mod2), military(Harr, Marr, Sarr, mod1));
    }

    cout << "What you must pay is: Bs. " << (res - 1)*80 + (res - (res - 1))*100 << " .";

    return 0;
}