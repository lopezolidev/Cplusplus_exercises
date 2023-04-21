/*
    Desarrolle una matriz para que el usuario ingrese los valores y se imprima en pantalla
*/
#include <iostream>

using namespace std;

int main(){
    int numbers[100][100];
    int rows, columns;

    cout << "Ingrese valor de filas: ";
    cin >> rows;
    cout << endl;

    cout << "Ingrese valor de columnas: ";
    cin >> columns;
    cout << endl;

    //construyendo la matriz 
    int i = 0;
    while( i < rows){
        int j = 0;
        while(j < columns){
            cout << "ingrese valor de matriz en [" << i << "][" << j << "]: ";
            cin >> numbers[i][j];
            cout << endl;
            j++;
        }
        i++;
    }

    //imprimiendo valores
    i = 0;
    while(i < rows){
        int j = 0;
        while(j < columns){
            cout << numbers[i][j] << " ";
            j++;
        }
        i++;
        cout << endl;
    }

    return 0;
}