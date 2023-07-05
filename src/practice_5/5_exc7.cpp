/*
    For an array with numbers between 0 and 100 write a function to determine the most repeated value
*/

#include <iostream>
using namespace std;

void printFun(int arr[], int c){
    cout << "Array [ ";
    
    int j = 0;
    while(j < c){
        cout << " " << arr[j] << ",";
        j++;
    }

    cout << " ]";
}//printing function

int main(){
    int count = 0;
    int arrayOf100[] = {71, 18, 84, 6, 30, 61, 67, 20, 67, 38, 27, 62, 63, 95, 28, 84, 82, 63, 3, 40, 91, 52, 56, 25, 57, 38, 63, 91, 62, 71, 50, 94, 73, 29, 40, 71, 37, 53, 11, 41, 83, 40, 40, 75, 13, 91, 5, 46, 86, 56, 58, 67, 75, 5, 57, 94, 60, 35, 53, 95, 16, 51, 85, 79, 47, 32, 35, 99, 19, 82, 86, 52, 97, 57, 3, 41, 61, 0, 93, 79, 62, 10, 71, 10, 29, 6, 78, 57, 35, 93, 22, 44, 85, 40, 61, 33, 89, 63, 64, 27}; //array of 100 random numbers between 0 and 100

    int newArr[101]; //array of 101 empty spaces

    int i = 0;
    while(i < 101){
        newArr[i] = 0;
        i++;
        count++;
    } // filling the array with 0's

    i = 0;
    while(i < 100){
        newArr[arrayOf100[i]]++;
        i++;
    } //filling the newArray with the repetition of the 100 numbers

    // printFun(newArr, count); // printing the array of repetitions

    i = 0;
    int pos = 0, num = 0;
    while(i < 101){
        if(num <= newArr[i]){
            num = newArr[i];
            pos = i;
        }
        i++;
    } // storing most repeated number and its position

    cout << endl;

    cout << "The most repeated number is " << pos << ", with a total of " << num << " times";

    return 0;
}