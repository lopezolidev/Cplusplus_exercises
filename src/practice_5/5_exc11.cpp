/*
    Write a function that takes as input a squared matrix and returns the sum of the elements from the secondary diagonal (first diagonal: left to right. secondary diagonal: right to left; both tops to bottom)
*/

#include <iostream>

using namespace std;

void printer(int matrix[][4]){
    cout << "Matrix: ";
    cout << endl;
    cout << "| " << endl; 
    int i = 0;
    while(i < 4){
        int j = 0;
        while(j < 4){
            cout << matrix[i][j] << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    cout << " |";

}

int diagSum(int matrix[][4]){
    int cA = 3;
    int cB = 0;
    int r = 0;
    while(cA >= 0 && cB < 4){
        r += matrix[cB][cA]; //positioning in the upper right corner
        cA--; //decreasing the column
        cB++; //increasing the row
        // cout << "r: " << r << endl;
    }
    return r;
}

int main(){

    int matA[4][4] =   {{ 1,  2,  3,  4}, 
                        { 5,  6,  7,  8}, 
                        { 9, 10, 11, 12},
                        {13, 14, 15, 16}};

    printer(matA);

    cout << endl;
    cout << "Result of the diagonal of the matrix: ";
    cout << diagSum(matA);

    return 0;
}