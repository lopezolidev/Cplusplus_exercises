/*
    Write an algorithm for a function that recieves 2 parameters N and K, and outputs the K digits at the left of N. I.e: extractDigits(542207, 2) must return 54
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

int extractDigits(int total, int query){
    int aux = 0;
    total = flip(total); //flipping the number where we want to find out query

    while(total > 0){
        if(query == total%10){
            return aux / 10; //returning the number without the last 0 
        }
        aux += total%10; //taking the last digit of the flipped number
        aux *= 10; //increasing the value of aux by an order of magnitude ( * 10)

        total /= 10; //dividing the flipped number
    }

    cout << "There was no coincidence in your query";
    cout << endl;
    return -1;
}

int main(){
    int N, K;

    cout << "Please insert query parameter: ";
    cin >> N;

    cout << endl;

    cout << "Please insert search number parameter: ";
    cin >> K;
    
    cout << endl;

    cout << extractDigits(K, N);
    
    return 0;
}