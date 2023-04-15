/*
    Write an algorithm that takes as input a sequence of numbers 0 and 1 finished in -1, representing a binary number. Calculate the binary number in decimal format. I.e: if the sequece is 1 0 0 1 0 1 -1, the algorithm should print 37
*/

#include <iostream>
#include <cmath>

using namespace std;


void decimal(int bin){
    int dec = 0, i = 0;
    while(bin > 0){
        dec += (bin%10) * pow(2, i); //obtaining decimal number by = 1 or 0 * 2^i
        bin /= 10; //deleting last digit in the binary number
        i++; //uppering 1 to the iterator
    }
    cout << dec;
}

int binary(int n){
    int bin = 0;

    while(n != -1){

            while(n != 0 && n != 1){
                cout << "Wrong number, please insert a binary number: ";
                cin >> n; //validation when there's a non-binary number
                if(n == -1){
                    break; //if the number is -1 the sequence is terminated
                } 
            }

            if(n == -1){
                break;
            } //second validation

            bin = bin * 10;
            bin = bin + n; // operation to obtain the number

            cout << "Please insert a new binary number: ";
            cin >> n;
            cout << endl;
            // input 


    }
    return bin;
}

int main(){
    int n, bin = 0;

    cout << "Please insert a new binary number: ";
    cin >> n;
    cout << endl;
    
    decimal(binary(n));

    return 0;
}