/*
    Write an algorithm for determining if a 6 digit number contains some 3 digit capicua number. I.e, if N = 485992 doesn't have any capicua inside, but N = 106562 it does have one (656)
*/

#include <iostream>

using namespace std;

int lastThree(int n){
    return n % 1000;
}

int flip(int a){
    int f = 0;
    while(a > 0){
        f += a%10; //last digit from inserted number
        f *= 10; //increasing new number by an order of magnitude
        a /= 10; //deleting last digit from inserted number
    }
    return f/10; //returning the number flipped without last digit that is a 0
}

int main(){
    int N, flipped, aux1, aux2, aux3;

    cout << "Insert 6 digit number: ";
    cin >> N;
    cout << endl;

    if(N < 0){
        N *= -1;
    } //if the number is negative

    while(N < 99999 || N > 1000000){
        cout << "Invalid Number, insert a new one: ";
        cin >> N;
        cout << endl;
    } //validation for digits

    flipped = flip(N); //flipping the original number to compare with the auxiliars

    aux1 = lastThree(N);
    N /= 10;
    aux2 = lastThree(N);
    N /= 10;
    aux3 = lastThree(N);
    N /= 10;
    //creating auxiliar possible capicuas

    // cout << "aux1: " << aux1 << endl << "aux2: " << aux2 << endl << "aux3: " << aux3 << endl << "N: " << N << endl; 

    while(flipped > 0){

        if(flipped % 1000 == aux1){
            cout << aux1;
            return 0;
        } else if(flipped % 1000 == aux2){
            cout << aux2;
            return 0;
        } else if(flipped % 1000 == aux3){
            cout << aux3;
            return 0;
        } else if(flipped % 1000 == N){
            cout << N;
            return 0;
        } //on each iteration we'll compare with each auxiliar y if last 3 digits of the flipped number match with any auxiliar 

        flipped /= 10; //if not we'll reduce the original number by the last digit
    }


    return 0;
}