/*
    linked loops...
*/

#include <iostream>

using namespace std;

int main(){

    int i, n; 

    i = 0;
    //initializing variables

    while(i <= 10){
        cout << i << ": " << endl; //setting gap between first iterator and next numbers
        n = 0; //must declare it inside the first loop 

        while(n <= 10){
            cout << n << " "; // printing n 
            n++; // → n = n + 1;
            // this loop will repeat multiple times
        }    
        cout << endl; //line jump after inner loop prints its numbers
        i++; // → i = i + 1;
    }

    return 0;
}

//output 

/*
    0: 
    0 1 2 3 4 5 6 7 8 9 10 
    1: 
    0 1 2 3 4 5 6 7 8 9 10 
    2: 
    0 1 2 3 4 5 6 7 8 9 10 
    3: 
    0 1 2 3 4 5 6 7 8 9 10 
    4: 
    0 1 2 3 4 5 6 7 8 9 10 
    5: 
    0 1 2 3 4 5 6 7 8 9 10 
    6: 
    0 1 2 3 4 5 6 7 8 9 10 
    7: 
    0 1 2 3 4 5 6 7 8 9 10 
    8: 
    0 1 2 3 4 5 6 7 8 9 10 
    9: 
    0 1 2 3 4 5 6 7 8 9 10 
    10: 
    0 1 2 3 4 5 6 7 8 9 10 

*/