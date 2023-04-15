/*
    Write an algorithm that takes as input a number N and prints the Fibonacci sequence until N. Fibonacci sequence starts with the numbers 1 and 0, and then each next step is calculate summing the last 2 numbers of the sequence. I.e: the first numbers of the sequence of Fibonacci are 0, 1, 1, 2, 3, 5, 8, 13...
*/

#include <iostream>

using namespace std;

void fib(int n){
    int f = 1, s = 0, aux = 0;
    while(n > 0){ //while the number of the nth position is greater than 0 the loop will execute
        aux = f; 
        //an auxiliar value will store first number
        f += s; 
        //the first will be now the sum of the previous value of first and the anteceding value, that is second
        s = aux;
         //now the second value will have the starting value of first
        n--; //substracting 1 to the nth number each iteration
    }
    cout << f;
}

int main(){
    int N;

    cout << "Please insert the number in Nth position of the Fibonacci sequence: ";
    cin >> N;
    cout << endl; 
    //assigning variables

    if(N < 0) -1 * N; //when the value is negative

    fib(N);

    return 0;
}