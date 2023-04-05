/*
    Write an algorithm that takes as input a number less than 100 and determine if its prime (recall that an N number is prime if its only divisors are 1 and N)
*/

#include <iostream>

using namespace std;

bool isItPrime(int n){
    if((((((((((((n == 2 || n == 3) || (n == 5 || n == 7)) || (n == 11 || n == 13)) || (n == 17 || n == 19)) || (n == 23 || n == 29)) || (n == 31 || n == 37)) || (n == 41 || n == 43)) || (n == 47 || n == 53)) || (n == 59 || n == 61)) || (n == 71 || n == 73)) || (n == 79 || n == 83)) || (n == 89 || n == 97)){
        return true;
    } else {
        return false;
    }
} //function to know if the number is equal to any prime number from 1 to 100 (open interval)

int main(){
    int n;

    cout << "Please insert the number between 0 and 100: ";
    cin >> n;
    cout << endl;
    //assigning variable

    if(n < 0 || n >= 100){
        cout << "Invalid number";
        return -1;
    } //correct number validation

    cout << "the number " << n << " is";

    if(!isItPrime(n)){
        cout << " not";
    } //validation if the number is not prime 

    cout << " prime";
 

    return 0;
}