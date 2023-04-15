/*
    Write an algorithm that prints the values of all the domino chips without repeating
*/

#include <iostream>

using namespace std;

int main(){
    int outter = 0;

    cout << "Domino chips combinations are: ";
    cout << endl;

    while(outter <= 6){            
        int inner = 0; //each time inner will start from 0 again
        inner += outter; //then it will be added to outter to not repeat the same chips

        while(inner <= 6){
            cout << outter << " | ";
            cout << inner; //printing outter number and inner separated by a figure
            cout << endl;
            inner++; //increasing inner to reach the desired limit
        }
        outter++; 
    }

    return 0;
}