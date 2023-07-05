/*
    Write a function that takes as input an array of integers A and a number K, and determine if there're 2 values from A which sum is equal to K. For example: if A = {4, -1, 6, 8, 10, 3} and K = 2, the function must return TRUE because -1 + 3 = 2.
*/

#include <iostream>

using namespace std;

void printFun(int arr[], int count){
    cout << "Array [ ";
    
    int j = 0;
    while(j < count){
        cout << " " << arr[j] << ",";
        j++;
    }

    cout << " ]";
}//printing function

void sum(int arr[], int count, int sum){
    int j = 0, c = 1;
    while(j < count){
        int i = 0;
        while((i+c) < 6){
            if((arr[j] + arr[i+c]) == sum){
                cout << "true";
                break;
            } else {
                cout << false;
            }
            i++;
        }
        j++;
        c++;
    }
}

int main(){
    int arr[10];
    int k = 0;
    int counter = 0;

    int i = 0;
    while(i < 10){
        arr[i] = 0;
        i++;
        counter++;
    } // filling the array


    cout << "Please insert a number K for the sum of two values in the array: ";
    cin >> k;
    cout << endl;

    int j = 0;
    while(j < 10){
        cout << "Insert a number in position " << j << " of the array: ";
        cin >> arr[j];
        cout << endl;
        j++;
    } // filling the array with user's input numbers

    // printFun(arr, counter);


    cout << "The statement: " << endl;
    cout << "The array A contains 2 values which sum is equal to " << k << " is ";
    sum(arr, counter, k); 
    
    return 0;
}