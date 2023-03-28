#include <iostream>
using namespace std;

/*
    Write an algorithm that prints in the screen the edges of a square of size N. I.e: N = 5, the algorithm should write:
    
    XXXXX
    X   X
    X   X
    X   X
    XXXXX

*/

int main(){
    int n, i;
    int f = 1; 
    //initializing variables

    cout << "Please insert size of the square: ";
    cin >> n;
    cout << endl;

    while(n <= 0){
        cout << "Wrong number, insert it again: ";
        cin >> n;
        cout << endl;
        if(n > 0){
            break;
        }
    } //menu for wrong data insertion

    if(n == 1){
        cout << "X" << endl;
        return 0;
    } //case when n == 1

    while( f <= n){
        i = 1; //iterator will have as value 1 every time the outter loop starts

        cout << "X"; //printing first 'X' of the row

        if(f == 1 || f == n){ //only when this conditions are met the whole row will be printed
            while(i <= n - 2){ //printing inner numbers
                cout << "X"; 
                i++; //increasing value of the iterator
            }
        } else {
            while(i <= n - 2){ //case when it's not the first nor the last row
                cout << " ";
                i++;
            }
        }

        cout << "X" << endl; //printing last 'X' of the row with a line jump
        f++; //increasing value of the iterator
    }

    return 0;
}