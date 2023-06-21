/*
    Write a function that takes as input an array A and an integer N and returns (using reference parameters) the number of elements of A > N and its average
*/


#include <iostream>

using namespace std;

void avgPlus(int& N, int array[], int n){
    int c = 0, sum = 0;

    int j = 0;
    while(j < n){
            if(array[j] > N){
                c++; //counter for number of elements greater than N
                sum += array[j]; // sum of elements greater than N
            }
        j++;
    }

    cout << "Number of elements greater than " << N << " : ";
    cout << c;
    cout << endl;


    if(c == 0 && sum == 0){
        cout << "Average of numbers greater than " << N << " : " << 0;
        return;
    } // in case of 0 / 0

    cout << "Average of numbers greater than " << N << " : " << sum / (float)c;
}

int main(){
    int N, arr[8], num = 0;
    cout << "Insert an arbitrary N integer: ";
    cin >> N;
    cout << endl;

    int i = 0;
    while(i < 8){
        cout << "Please insert " << i << " element of the array: ";
        cin >> arr[i];
        cout << endl;

        i++;
        num++;
    } // loop to insert numbers in the array and count its elements;


    avgPlus(N, arr, num);

    return 0;
}
