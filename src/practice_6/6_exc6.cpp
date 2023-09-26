/*
    Write an algorithm that reads integers stored in 2 files that contain ordered integers and generate a third file that contains the same elements of both files ordered. I.e: if the first file contains the numbers 1 40 50 100 and the second contains the elements 5 20 40 80, the resulting file would have the elements: 1 5 20 40 40 50 80 100
*/

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void fillArray(int arr[]){
    int i = 0;
    while(i < 20){ 
        arr[i] = 0;
        i++;
    }
}

void readFile(int array[], string name){
    fstream inputfile;

    inputfile.open(name, ios::in);

    if(inputfile.is_open()){
        int n;

        int i = 0;

        while(true){
            inputfile >> n;
            array[i] = n;

            if(inputfile.eof()) break;

            i++;
        }

    }
    inputfile.close();
}

void printArr(int arr[], int n){
    int j = 0;
    while(j < n){
        cout << "arr[" << j << "] " << arr[j] << endl;
        j++;
    }
    cout << endl;
}

void sortAndTrav(int arrA[], int arrB[], int arrC[], int sizeOfA,  int sizeOfB,  int sizeOfC){
 int i = 0;
 while(i < sizeOfA){
    arrC[i] = arrA[i];
    i++;
 }   
 int j = i;
 int k = 0;
 while(k < sizeOfB){
    arrC[i] = arrB[k];
    i++;
    k++;
 }

    // These last two loops will fill the arrayC with all the numbers

 int l, m, aux;
    bool swapped;
    for (l = 0; l < sizeOfC - 1; l++) {
        for (m = 0; m < sizeOfC - l - 1; m++) {
            if (arrC[m] > arrC[m + 1]) {
                aux = arrC[m + 1];
                arrC[m + 1] = arrC[m];
                arrC[m] = aux;
            }
        }
    }
    //bubble sort for the numbers in array C
}

void writeInFile(int arr[], int sizeOfArr){
    fstream outputFile; //creating file handler
    
    outputFile.open("numbers_sorted.txt", ios::out); // opening file 

    if(outputFile.is_open()){   // if the file could be openend then we write each number of the array with a loop inside the file
        int i = 0;
        while(i < sizeOfArr){
            outputFile << arr[i] << endl;
            i++;
        }
    }
    outputFile.close();   // closing the file
}

int main(){
    int arrA[20], arrB[20];
    string fileA = "fileA.txt";
    string fileB = "fileB.txt";

    fillArray(arrA);    // inserting "dummy" values in the array
    readFile(arrA, fileA);     // reading the file A and inserting such values in the array A
    printArr(arrA, 20);     // printing the array A with its new values

    fillArray(arrB);
    readFile(arrB, fileB);
    printArr(arrB, 20);

    int arrC[(sizeof(arrA)/4) + (sizeof(arrB)/4)];

    sortAndTrav(arrA,arrB, arrC, 20, 20, 40);
    printArr(arrC, 40);

    writeInFile(arrC, 40);

    return 0;
}