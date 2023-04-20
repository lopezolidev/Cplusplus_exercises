/*
    Using the function implemented in the previous exercise develop a function that takes as input 2 rectangles and determine if any vertex from the 1° rectangle is embedded in the 2° rectangle
*/

#include <iostream>

using namespace std;

void coordinates(){
    int x1,x2, y1, y2;
    cout << "Insert superior left corner coordinate X from rectangle: ";
    cin >> x1;
    cout << endl;

    cout << "Insert superior left corner coordinate Y from rectangle: ";
    cin >> y1;
    cout << endl;

    cout << "Width of rectangle: ";
    cin >> x2;
    cout << endl;

    if(x2 < 0){
        cout << "invalid width, insert correct width: ";
        cin >> x2;
        cout << endl;
    }

    cout << "Height of rectangle: ";
    cin >> y2;
    cout << endl;

    if(y2 < 0){
        cout << "invalid height, insert correct height: ";
        cin >> y2;
        cout << endl;        
    }

    x2 = x2 + x1;
    y2 = y1 - y2;


}

int main(){
    cout << "For rectangle 1: ";
    coordinates();

    cout << "For rectangle 2: ";
    coordinates();
    return 0;
}

//TODO FINISH LATER