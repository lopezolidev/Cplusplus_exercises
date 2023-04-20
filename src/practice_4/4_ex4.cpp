/*
    Write a function that takes as parameters 5 numbers and determines the maximum and the minimum between them
*/

#include <iostream>

using namespace std;

void min(int b){
    int min = b%10; //last digit as default

    while(b > 0){
        if(min > b%10){
            min = b%10; //when the min number is greater than the last digit of the current input number the min number will be that last digit
        }
        b /= 10; //deleting last digit by int division by 10
    }
    cout << min;
    return;
}

void max(int a){
    int max = 0;
    while(a > 0){
        if(max < a%10){
            max = a%10; //max number is less than the last digit of the input, then max will be that digit
        }
        a /= 10;
    }
    cout << max;
    return;
}



int main(){
    int n = 0;

    cout << "Please insert a number: ";
    cin >> n;

    if(n < 0){
        n *= -1;
    } //correction when the number is negative

    cout << "Max number: ";
    max(n);
    cout << endl;

    cout << "Minimum number: ";
    min(n);

    return 0;
}