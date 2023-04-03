/*
    Write an algorithm that prints "Capicua" if a given input number of 5 digits is capicua or "It's not" in the opposite case. A number is capicua if it can be written the same forwards or backwards. E.g: 545 is a capicua number
*/

#include <iostream>

using namespace std;

int flip(int v){
    int v1, v2, v3, v4;

    v1 = v%10;
    v /= 10;
    //assigning and cutting input value to separate into digits

    v2 = v%10;
    v /= 10;

    v3 = v%10;
    v /= 10;

    v4 = v%10;
    v /= 10;

    return v1*10000 + v2*1000 + v3*100 + v2*10 + v;
}

int main(){
    int n;

    cout << "Please insert a 5 digit number: " << endl;
    cin >> n;
    //initializing variable

    if(n > 99999 || n < 10000){
        cout << "Invalid number, please insert a 5 digit number";
        return -1;
        //Making sure it's a valid number
    }

    cout << "the number " << n << " is "; 

    if(n != flip(n)){
        cout << " not ";
    } //if the number is not capicua this line is executed

    cout << " capicua";

    return 0;
}