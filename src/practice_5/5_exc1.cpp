/*
    Write a function that takes as input an array and returns the maximum value
*/

#include <iostream>

using namespace std;

void maxVArr(int a){
    int arr[6], c = 1, max;
        //start with an array of 6 elements

    while(c <= 6){
        arr[c-1] = a;
        if(c != 6){
            cout << "Insert next value: ";
            cin >> a;
        }
        c++; //assigning elements to the array, with the condition of being in its respective slot
    }
    c = 6;

    while(c >= 0){
        if(arr[c-1] < 0){
            if(max - 1 <= arr[c-1]){
                max = arr[c-1];
            }
        }else if(max < arr[c -1]){
            max = arr[c-1];
        }
        c--; //operation to determine which is the greatest value inside the array
    }
    cout << max;
    

}

int main(){
    int a;

    cout << "Insert array of 6 elements: ";
    cout << endl;
    cin >> a;

    maxVArr(a);


    return 0;
}