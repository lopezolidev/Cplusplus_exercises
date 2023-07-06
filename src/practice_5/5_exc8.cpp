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

bool sum(int arr[], int count, int sum){
    int j = 0, c = 1; 
    //j → iterator variable, c → counter of total sums of the array
    
    bool b = false;  
    // b → the returning value
    
    while(j < count){  // j will be compared to the number of elements in the array to repeat the big while loop
        int i = 0;   
        // initializing the inner iterator variable from the minor loop
        
        while((i+c) < 6){   
            // the sum of the iterator with the counter of total sums result in not repeating the total operations from the start of the loop, therefore a gain in use of resources
            
            if((arr[j] + arr[i+c]) == sum){  
            // comparison for the sum between the actual number in the array "arr[j]" and the next number "arr[i+c]" to the given value of the sum
            
                b = true;
                return b; 
                //once we know the sum is true, the function returns the boolean value
            } else {
                b = false; // if not this value will keep being false but no returned yet
            }
            i++;
        }
        j++;
        c++;

        //increasing iterator and counter for every turn
    }
    return b; //returning the boolean value, for this case will be false
} // algorithm to return a boolean value determining if two values from the array summed result in a given number

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
    if(sum(arr, counter, k)){
        cout << "TRUE";
    } else {
        cout << "FALSE";
    }
    
    return 0;
}