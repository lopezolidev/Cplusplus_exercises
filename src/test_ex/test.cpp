#include <iostream>

using namespace std;

/*
    A number is primal if every digit from right to left is equal or greater than its predecesor (i.e: 2479 → 9 >= 7 >= 4 >= 2) and if it contains at least 2 prime digits. Write an algorithm to calculate if a number up to 6 digits is primal. 

    You cannot use loops nor arrays.
*/

bool isPrime(int v){
    switch(v){
        case 1:
            return true;
            break;
        case 2:
            return true;
            break;
        case 3:
            return true;
            break;
        case 5:
            return true;
            break;        
        case 7:
            return true;
            break;
        default: 
            return false;
            break;
    }
}

int main(){
    int n, v1, v2, v3, v4, v5, v6;
    bool b1, b2, b3;

    cout << "Please, insert the 6 digit number: ";
    cin >> n;
    //creating and initializing variables

    if(n < 100000 || n > 999999){
        cout << "Not a 5 digit number, please try again";
        return -1;
    } //checking if the user inserted a number less than or beyond 6 digits

    v1 = n % 10;
    n = n / 10;

    v2 = n % 10; 
    n = n / 10;

    v3 = n % 10; 
    n = n / 10;

    v4 = n % 10; 
    n = n / 10;

    v5 = n % 10;
    n = n / 10;

    v6 = n;
    //separating the number in digits 

    if(v6 <= v5){
        if(v5 <= v4){
            if(v4 <= v3){
                if(v3 <= v2){
                    if(v2 <= v1){

                    v1 = isPrime(v1);
                    v2 = isPrime(v2);
                    v3 = isPrime(v3);
                    v4 = isPrime(v4);
                    v5 = isPrime(v5);
                    v6 = isPrime(v6);
                    //boolean values for each number, therefore knowing if each number it's prime or not

                    b1 = v1 || v6;

                    b2 = v2 || v5;

                    b3 = v3 || v4;
                    //assigning boolean values according to "or" operator to know if there's at least 1 boolean value
                    //this way we can make sure we know there're prime numbers even if they're followed by each other


                        if(b1 && b2){
                            cout << "It's primal";
                        } else if (b1 && b3) {
                            cout << "It's primal";
                        } else if (b2 && b3) {
                            cout << "It's primal";
                        } else {
                            cout << "not primal";
                        }
                        //If there's at least 2 prime numbers, this way we'll know if it's primal
                    }
                }
            }
        }
    }

    return 0;
}