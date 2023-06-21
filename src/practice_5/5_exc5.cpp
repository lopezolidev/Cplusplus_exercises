/*
    Write a function that takes as input an array of integers A and an element K, and place K in the positions-power of 2 of the array (1, 2, 4, 8, ...)
*/

#include <iostream>
#include <cmath>

using namespace std;

void placeK(int arr[], int K, int c){
    int j = 0;
    int power = pow(2, j); //we set the first power of 2 as the first position where K will be placed

    while(power <= c){ // 'c' is the length of the array
        arr[power] = K; //position in the array where K is being placed (power of 2)
        j++; //increasing exponent
        power = pow(2, j); //obtaining power of 2
    }

}

int main(){
    int arr[17], K, counter = 0;

    cout << "Please insert an arbitrary integer K: ";
    cin >> K;
    cout << endl;
    //inserting number K to place in the array

    int i = 0;
    while(i < 17){
        cout << "Insert number in position " << i << " of array: ";
        cin >> arr[i];
        cout << endl; 
        
        i++;
        counter++;
    } //inserting values in the array and measuring the array

    i = 0;

    cout << "Array before placing K: [ ";
    while(i < counter){
        cout << arr[i] << ", ";
        i++;
    }
    cout << "]" << endl; 
    //loop to print the elements of the array one by one

    placeK(arr, K, counter);

    i = 0;

    cout << "Array before placing K: [ ";
    while(i < counter){
        cout << arr[i] << ", ";
        i++;
    }
    cout << "]" << endl; 
    //loop to print the elements of the array one by one but after running the function


    return 0;
}