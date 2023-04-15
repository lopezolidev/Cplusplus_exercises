/*
    Write an algorithm that reads a sequence of digits between 0 and 9, finished in -1 that represent a decimal number and print the decimal number. I.e: if the input seques is 5 0 3 8 -1 should print 5038
*/

#include <iostream>

using namespace std;

void decimal(int n){
    int res = 0;

    while(n != -1){
        while(n < 0 || n > 9){
            cout << "Invalid number, please insert a new number between 0 and 9: ";
            cin >> n; 
            cout << endl;

            if(n == -1){
                break;
            }
         //validation in case of a number out of allowed range
        }
        if(n == -1){
            break;
        }

        res *= 10;
        res += n; //operation to increase the number one order of magnitude
        
        cout << "Please insert a new digit: ";
        cin >> n;
    }
    cout << res;
}

int main(){
    int n = 0;

    cout << "Please insert a new number: ";
    cin >> n;
    cout << endl;

    decimal(n);
    
    return 0;
}