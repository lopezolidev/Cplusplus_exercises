/*
    Write a function that takes as input an array of integers and returns (using reference parameters) the number of even and odd elements of the array
*/


#include <iostream>

using namespace std;

int odds = 0, evens = 0;

void oddsAndEvens(int arr[], int& o, int& e){ //passing reference parameters to change global variables
    int j = 0;
    while(j < 10){
        if(arr[j] % 2 == 0){ //operation to determine if the number is odd or even
            e++;
        } else {
            o++;
        }
        j++;
    }

}

int main(){
    int arr[10];

    cout << "Array of numbers";
    int i = 0;
    while(i < 10){
        cout << "Please insert element " << i << " of array: ";
        cin >> arr[i];
        cout << endl;

        i++;
    } //inserting elements in the array

    cout << "Before: " << endl;
    cout << "Odds: " << odds << endl;
    cout << "Evens: " << evens << endl; 
    //printing before running of the function to know the values of odds and even numbers

    oddsAndEvens(arr, odds, evens);

    cout << "After: " << endl;
    cout << "Odds: " << odds << endl;
    cout << "Evens: " << evens << endl;
    // printing after run of the function to see how these variables changed

    return 0;
}