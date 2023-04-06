#include <iostream>

using namespace std;

/*
    Given the equations of two non parallel rect lines y = m1x + b1 and y = m2x + b2 (numbers 1 and 2 are identifiers of each element. They're not coefficients). Write an algorithm that calculates it's intersection point.
*/

int main() {
    float b1, b2, m1, m2, x, y;

    cout << "For 1st rect line, please insert cutoff value of Y-axis: ";
    cin >> b1;
    cout << endl;

    cout << "For 1st rect line, please insert it's slope: ";
    cin >> m1;
    cout << endl;

    cout << "For 2nd rect line, please insert cutoff value of Y-axis: ";
    cin >> b2;
    cout << endl;

    cout << "For 2nd rect line, please insert it's slope: ";
    cin >> m2;
    cout << endl;
    //initializing values

    if(m1 == m2){
        cout << "These are parallel lines. Invalid slopes";
        return -1;
    }

    x = (b2 - b1) / (m1 - m2);
    //obtaning x

    y = (m1 * x) + b1;
    // obtaining y

    /*
        As both lines intersect, the x and y values will be the same for both lines, therefore we equate both equations regarding to y and clear x from the equation.
    */

    cout << "Intersection point is: " << "( " << x << " , " << y << " )";

    return 0;
}