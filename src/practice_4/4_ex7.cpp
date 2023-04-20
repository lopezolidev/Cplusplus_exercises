/*
    Write a function to determine if a point (X, Y) is inside a rectangle. The rectangle is defined by the coordinate of superior left vertex, its height and its width
*/

#include <iostream>

using namespace std;

int main(){
    int x1, width, x2, y1, height, y2, xp, yp;

    cout << "Insert X coordinate of the superior left corner of the rectangle: ";
    cin >> x1;
    cout << endl;
    
    cout << "Insert Y coordinate of the superior left corner of the rectangle: ";
    cin >> y1;
    cout << endl;

    cout << "Insert width of the rectangle: ";
    cin >> width;
    cout << endl;

    while(width < 0){
        cout << "invalid width, insert correct width: ";
        cin >> width;
        cout << endl;
    } //validation for impossible measures

    cout << "Insert height of the rectangle: ";
    cin >> height;
    cout << endl;

    while (height < 0){
        cout << "invalid height, insert correct height: ";
        cin >> height;
        cout << endl;
    }

    cout << "Insert X coordinate of the point: ";
    cin >> xp;
    cout << endl;

    cout << "Insert Y coordinate of the point: ";
    cin >> yp;
    cout << endl;
    //inserting coordinates of the point

    x2 = width + x1;
    y2 = y1 - height;
    //obtaining the real coordinates of each measure

    if((xp > x1 && xp < x2) && (yp > y2 && yp < y1)){ 
        cout << "The point is inside the rectangle";
    } else {
        cout << "The point is not inside the rectangle";
    } //boolean operation to identify if the point is inside the rectangle

    return 0;
}