/*
    Write a function that takes as input a matrix (with even ammount of rows) and switch even and odd rows. I.e: if the matrix is {{4, 2}, {1, 2}, {6, −1}, {3, 5}}, the resulting matrix must be: {{1, 2}, {4, 2}, {3, 5}, {6, −1}}

    {
        {4,  2}, 
        {1,  2}, 
        {6, −1}, 
        {3,  5}
    }

    {
        {1,  2}, 
        {4,  2}, 
        {3,  5}, 
        {6, −1}
    }
*/

#include <iostream>

using namespace std;

void printMat(int mat[][4]){
    int i = 0;
    cout << "Matrix: " << endl;
    cout << "[ ";
    cout << endl;
    while(i < 4){
        int j = 0;
        while(j < 4){
            cout << mat[i][j] << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    cout << " ]" << endl;

} //printing function

void flipMatrix(int mat[][4]){
    int i = 1;
    while(i < 4){
        int j = 0;
        int aux = 0; //auxiliar variable will help us to store the value that will be positioned in the even row
        while(j < 4){
            aux = mat[i - 1][j]; //storing the value 
            mat[i - 1][j] = mat[i][j]; 
            mat[i][j] = aux; //placing the value in its new position
            j++; //increasing column
        }
        i += 2; //increasing row by 2, therefore moving 2 rows by 2 rows
    }
}

int main(){
    int matrix[4][4] = {    {1,   3,  5,  7},
                            {2,   4,  6,  8},
                            {9,  11, 13, 15},
                            {10, 12, 14, 16}}; 

    printMat(matrix);

    flipMatrix(matrix);

    printMat(matrix);

    return 0;
}

