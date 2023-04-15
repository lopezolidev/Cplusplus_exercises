/*
Escriba un algoritmo que imprima por pantalla en borde de cuadrados de
tamaño impar desde N hasta 1 insertados uno dentro de otro. Por ejemlo,
si N = 7 y N = 9 debe imprimir:
XXXXXXX
X     X
X XXX X
X X X X
X XXX X
X     X
XXXXXXX

XXXXXXXXX
X       X
X XXXXX X
X X   X X
X X X X X
X X   X X
X XXXXX X
X       X
XXXXXXXXX
*/

//  WARNING!!! The code above is submitted to revision

#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Ingrese un numero impar mayor o igual a 1: ";
    cin >> N;

    // Imprimir borde de tamaño N
    for (int i = 1; i <= N; i++) {
        cout << "X";
    }
    cout << endl;

    // Imprimir cuadrados interiores
    for (int i = N-2; i >= 3; i -= 4) {
        // Imprimir borde izquierdo
        cout << "X";
        // Imprimir espacios en blanco
        for (int j = 1; j <= (N-i-2)/2; j++) {
            cout << " ";
        }
        // Imprimir borde interior izquierdo
        cout << "X";
        // Imprimir espacios en blanco
        for (int j = 1; j <= i-4; j++) {
            cout << " ";
        }
        // Imprimir borde interior derecho
        cout << "X";
        // Imprimir espacios en blanco
        for (int j = 1; j <= (N-i-2)/2; j++) {
            cout << " ";
        }
        // Imprimir borde derecho
        cout << "X" << endl;
    }

    // Imprimir borde interior izquierdo
    cout << "X";
    // Imprimir espacios en blanco
    for (int i = 1; i <= N-4; i++) {
        cout << " ";
    }
    // Imprimir borde interior derecho
    cout << "X" << endl;

    // Imprimir cuadrados interiores invertidos
    for (int i = 3; i <= N-2; i += 4) {
        // Imprimir borde izquierdo
        cout << "X";
        // Imprimir espacios en blanco
        for (int j = 1; j <= (N-i-2)/2; j++) {
            cout << " ";
        }
        // Imprimir borde interior izquierdo
        cout << "X";
        // Imprimir espacios en blanco
        for (int j = 1; j <= i-4; j++) {
            cout << " ";
        }
        // Imprimir borde interior derecho
        cout << "X";
        // Imprimir espacios en blanco
        for (int j = 1; j <= (N-i-2)/2; j++) {
            cout << " ";
        }
        // Imprimir borde derecho
        cout << "X" << endl;
    }

    // Imprimir borde de tamaño N
    for (int i = 1; i <= N; i++) {
        cout << "X";
    }
    cout << endl;

    return 0;
}


