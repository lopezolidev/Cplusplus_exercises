#include <iostream>
#include <math.h>

using namespace std;

/*
    Write an algorithm that takes as input base and height of a triangle, radius of a circle and determine if the triangle has an area greater than the circle
*/

int main() {
    float b, h, r, areaT, areaC;

    cout << "Please insert base and height of the triangle: " << endl;
    cin >> b >> h;

    cout << "Please insert radius of the circle: " << endl;
    cin >> r;
    //initializing variables

    areaT = (b * h) / 2;

    areaC = 3.1416 * pow(r, 2);
    //calculating area of the triangle and cirlce


    cout << "The area of the triangle is ";

    if(areaT < areaC){
        cout << " not ";
    }   //veryfying if the area of the triangle is greater than the cirlce 

    cout << "greater than the circle";

    return 0;
}