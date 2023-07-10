/*
    Write a function that takes as input a squared matrix of N x M and return the trasposed matrix of M x N. Remember that the trasposed matrix is such that columns and rows are flipped. I.e: orinal matrix: A = {{1, 5}, {2, 3}}, the function must return {{1, 2}, {5, 3}}
*/

#include <iostream>
using namespace std;

void printMat(int mat[][3], int counter){
    int i = 0;
    cout << "Print Matrix: "; 
    cout << endl;
    cout << "[ ";
    cout << endl;
    while(i < counter){
        int j = 0;
        while(j < counter){
            cout << mat[i][j] << " ,";
            j++;
        }
        cout << endl;
        i++;
    }
    cout << "]";
} //matrix printing function

void filler(int rCount, int colCount, int mat[][3]){
    int i = 0;
    while(i < rCount){
        int j = 0;
        while(j < colCount){
            mat[i][j] = 0;
            j++;
        }
        i++;
    }
} // 0's filling function

void flip(int matA[][3], int matB[][3], int rows, int cols){
    int i = 0;
    while(i < rows){
        int j = 0;
        while(j < cols){
            matB[j][i] = matA[i][j];
            j++;
        }
        i++;
    }
} //trasposing matrix function

int main(){
    int N = 3;
    int M = 3;

    int matA[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matB[3][3];
    filler(M, N, matB);

    cout << "matrix A: "; 
    cout << endl;
    printMat(matA, 3);
    cout << endl;
    cout << "matrix B: ";
    cout << endl; 
    printMat(matB, 3);
    cout << endl;

    flip(matA, matB, 3, 3);
    cout << "matrix B trasposed: ";
    cout << endl; 
    printMat(matB, 3);
    cout << endl;


    return 0;
}