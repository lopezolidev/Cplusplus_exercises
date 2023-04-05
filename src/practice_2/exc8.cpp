/*
    A 4 digit number is happy if only the first two digits are greater than the last 2 digits. I.e: 5612 is happy because 56 > 12. A 4 digit number is growing if each digit is greater than the last one. I.e: 1569 is growing because 9 > 6 > 5 > 1. Any number that is happy and growing is told to be a very happy number. Every number that is not happy nor growing is told to be unhappy. Write an algorithm that takes as input a 4 digit number and prints the type of found number, according to the given description.
*/

#include <iostream>

using namespace std;

bool happyNum(int num){
    int min;

    min = num %100;
    num /= 100;

    if(num > min){
        return true; //only true when the first 2 digits are greater than the last 2 digits
    } else {
        return false;
    }
}

bool growingNum(int num){
    int x1, x2, x3;

    x1 = num %10;
    num /= 10;
    
    x2 = num %10;
    num /= 10;

    x3 = num %10;
    num /= 10;
    //dividing and selecting the digits in the number

    if(num < x3 && x3 < x2 && x2 < x1){
        return true; //only this condition will be triggered if, from the first to the last digit, are growing numbers
    } else {
        return false;
    }
}

int main() {
    int num;

    cout << "Please insert a 4 digit number: ";
    cin >> num;
    cout << endl;
    //assigning variables

    if(num < 1000 || num > 9999){
        cout << "invalid number";
        return -1;
    } //validating number inside limits

    cout << "The number is ";

    if(growingNum(num)){
        cout << "a growing number!";
        return 0;
    } else if(happyNum(num)){
        cout << "a happy number!";
        return 0;
    } else {
        cout << "an unhappy number!";
        return 0;
    } //according to the conditions of the problem, a very happy number is impossible to exist. Therefore only 3 conditions will be evaluated

    return 0;
}