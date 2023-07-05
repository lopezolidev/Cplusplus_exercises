/*
    Write a function that takes as input an given array of integers A and a positive integer K and do K circular movements of A to left. I.e: if A = {4, 6, -1, 2} and K = 2, the final value of A must be {-1, 2, 4, 6}
*/  

#include <iostream>

using namespace std;

void output(int arr[], int c){
    cout << "Array: [ ";
    int i = 0;
    while(i < c){
        cout << arr[i] << ", ";
        i++;
    }
    cout << "]";
} //function to display the elements in the array

void twister(int array[], int N, int c){
    while(N > 0){ //number of twists of the entire array
        int j = 0; //iterator variable
        int aux = array[j]; //storing the value we'll place at the end of the array
        
        while(j < c - 1){ 
            array[j] = array[j + 1];
            j++;
        } //loop for placing each element to the left
        
        array[c - 1] = aux; //we'll place the stored element in auxiliar as the last element in the array
        N--; //decreasing the number of twists
    }
}

int main(){
    int K, arr[7], counter = 0;

    cout << "Please insert an arbitrary value K of movements to the left of the array: ";
    cin >> K;
    cout << endl;

    while(K < 0){
        cout << "invalid number for K. Only greater than 0 allowed: ";
        cin >> K;
        cout << endl;
    } //validation for when the value of K is less than 0

    int i = 0;

    while(i < 7){
        cout << "please insert the value of " << i << " element in the array: ";
        cin >> arr[i];
        cout << endl;
        i++;
        counter++;
    } //inserting values in the array

    output(arr, counter); //printing elements before running the function

    twister(arr, K, counter);
    
    cout << endl;
    
    output(arr, counter); //printing elements after running the function

    return 0;
}