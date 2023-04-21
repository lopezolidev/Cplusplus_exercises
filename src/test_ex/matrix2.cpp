/*
    Imprimir una matriz de las siguientes formas:
    - Horizontal de izquierda a derecha
    - Vertical de arriba a abajo
    - Horizontal de derecha a izquierda
    - Vertical de abajo hacia arriba
    → Es decir imprimir una espiral de caracol
*/

#include <iostream>

using namespace std;

//funciones para ejemplificar el proceso. NO SON IMPLEMENTADAS

void bottomToTop(int rows, int p){
    int numbers[100][1]; //tendra una sola columna

    int j = rows;
    int k = 0;

    while(j - 1 - p>= 0){
        numbers[j - 1 - p][0] = k;
        j--;
        k++;
    } //construcción de arreglo columna

    j = 0;
    while(j < rows){
        cout << numbers[j][0];
        cout << endl;
        j++;
    } //impresion columna
}

void rightToLeft(int columns, int p){
    int numbers[100]; //numero arbitrario para no tener segmentation error

    int i = columns; //inicializar variable
    int k = 0;

    while(i - 1 - p>= 0){
        numbers[i - 1 - p] = k;
        i--;
        k++;
    } //ciclo para construir arreglo

    i = 0;
    while(i < columns){
        cout << numbers[i] << " ";
        i++;
    } //impresion de arreglo
}

void topToBottom(int rows, int p){
    int numbers[100][1]; //tendra una sola columna

    int j = 0;

    while(j + p < rows){
        numbers[j + p][0] = j;
        j++;
    } //construcción de arreglo columna

    j = 0;
    while(j < rows){
        cout << numbers[j][0];
        cout << endl;
        j++;
    } //impresion columna

}

void leftToRight(int columns, int p){

    int numbers[100]; //numero arbitrario para no tener segmentation error

    int i = 0; //inicializar variable

    // cout << numbers[0] << endl; 

    while(i + p < columns){
        numbers[i + p] = i;
        i++;
    } //ciclo para construir arreglo con la suma de un iterador

    i = 0;
    while(i < columns){
        cout << numbers[i] << " ";
        i++;
    } //impresion de arreglo

}

int main(){
     int label = 1;
    int rowEnd = 0;
    int columnEnd = 0;
    int rowStart  = 0;
    int columnStart = 0; 

    int matrix[100][100];

    cout << "Ingrese numero de filas: ";
    cin >> rowEnd;

    cout << "ingrese numero de columnas: ";
    cin >> columnEnd;

    int aux1 = rowEnd;
    int aux2 = columnEnd; //para imprimir luego la matriz

    rowEnd -= 1;
    columnEnd -= 1; //esto indica la posicion final de filas y columnas

    while(rowStart <= rowEnd || columnStart <= columnEnd){ //para saber si quedan espacios disponibles para insertar valores

        //left to Right
        int col = columnStart; //lo que vamos a ir variando
        while(col <= columnEnd){ //hasta que lleguemos a la ultima casilla de la fila
            matrix[rowStart][col] = label; //insercion en esa posicion en la matriz
            label++; //incremento de la variable que llena ese espacio
            col++; //incremento de la columna (en este caso columna luego sera fila)
        }

        //top to bottom
        int row = rowStart + 1;
        while(row <= rowEnd){ 
            matrix[row][columnEnd] = label;
            label++;
            row++;
        }

        //right to left
        col = columnEnd -1;
        while(col >= columnStart){
            matrix[rowEnd][col] = label;
            label++; 
            col--;
        }

        //bottom to top
        row = rowEnd - 1;
        while(row >= rowStart + 1){
            matrix[row][columnStart] = label;
            label++;
            row--;
        }

        //ahora lo que sea inicio se incrementa (se mueve un espacio) y lo que es final se decrementa (te frenas un espacio antes)
        rowEnd--;
        columnEnd--;
        rowStart++;
        columnStart++; 
    }

    int i = 0;
    while(i < aux1){
        int j = 0;
        while(j < aux2){
            cout << matrix[i][j] << " ";
            j++;
        }
        cout << endl;
        i++;
    }  //impresión de matriz
    

    return 0;
}