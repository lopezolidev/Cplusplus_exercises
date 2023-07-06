/*
    Given two sorted arrays of integers A and B, write a function which allows the obtention of a third array C that contains all the elements from A and B sorted.
    I.e: A = {1, 4, 9} and B = {2, 5, 10, 12}, the result must be C = {1, 2, 4, 5, 9, 10, 12}.
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

void filler(int arr[], int count){
    int i = 0;
    while(i < count){
        arr[i] = 0;
        i++;
    }
} //filling function

void sorter(int arrA[], int arrB[], int arrC[], int cA, int cB, int cC){
    int may = 0; //stores the greatest value

    int j = 0;
    int i = 0;
    // iterator variables, mark the position in each array

    int c = 0;
    //iterator variable for the array to be filled with sorted numbers
    while(j < cA && i < cB){ //condition for not falling into segmentation fault error
        if(arrB[i] <= arrA[j]){ 
            arrC[c] = arrB[i]; 
            //storing in such position of array C the minor number
            
            may = arrA[j];
            //the greatest number will be stored to be used at the end of array C
            
            i++; 
            //increasing iterator in the array where the minor number was found
        } else {
            arrC[c] = arrA[j];
            may = arrB[i];
            j++;
            //the same but in the opposite case
        }   
        c++; //increasing the position where array C will be filled
    }
    // cout << "may: " << may;
    // cout << "c: " << c;

    arrC[c] = may; //inserting in the last position of the resulting array the greatest value


    int k = 0;
    c++; //moving one space to the right in C array
    while(c < cC){
        if(cB > cA){
            arrC[c] = arrB[cA + k]; //if array B is greater than A, we'll insert the values from greater array in the missing spaces of the result Array
        } else {
            arrC[c] = arrA[cA + k]; //opposite case
        }
        k++;
        c++; 
    } //in case when one of the arrays is greater than the other

}

int main(){
    int arrA[] = {1, 4, 9};
    int arrB[] = {2, 5, 10, 12, 13, 19, 200};

// arrC[] = {1, 2, 4, 5, 9, 10, 12, 13, 19, 200}

    cout << "array A: ";
    printFun(arrA, sizeof(arrA) / 4);
    cout << endl;
    
    cout << "array B: ";
    printFun(arrB, sizeof(arrB) / 4);
    cout << endl;

    int arrC[( sizeof(arrA) / 4) + (sizeof(arrB) / 4)];

    filler(arrC, ( sizeof(arrA) / 4) + (sizeof(arrB) / 4));
    cout << "array C: ";
    printFun(arrC, ( sizeof(arrA) / 4) + (sizeof(arrB) / 4));
    cout << endl;

    sorter(arrA, arrB, arrC, (sizeof(arrA) / 4), (sizeof(arrB) / 4), ( sizeof(arrA) / 4) + (sizeof(arrB) / 4));

    cout << "sorted C array: ";
    printFun(arrC, ( sizeof(arrA) / 4) + (sizeof(arrB) / 4));

    return 0;
}