/*
    Write an algorithm that determines if a number is a palindrome. A number is palindrome if it can be read the same forwards and backwards
*/

#include <iostream>
#include <cmath>
using namespace std;

int flip(int n){
    int aux, c, flipped;

    aux = 0;
    c = 0;
    flipped = 0;
    //initializing variables
 
    aux = n; //aux will be a copy of our original number to make the second loop

    while(n > 0){
        n /= 10;
        c++;
    }   //determining number of digits, thereby determining number of 0's

    while(aux > 0){
        flipped += (aux %10) * pow(10, (c - 1)); //extracting the last digit of aux and multiplying by 10 by the power of c - 1 (number of digits minus 1)
        aux /= 10; //reducing aux by one digit
        c--; // c = c - 1
    } 

    return flipped;
}

int main(){
    int n;

    cout << "please insert a number: ";
    cin >> n;
    cout << endl;

    cout << "the number " << n << " is ";

    if(n != flip(n)){
        cout << "not ";
    }// when they're different, the number is not a palindrome
    
    cout << "a palindrome";

    return 0;
}