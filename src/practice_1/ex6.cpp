#include <iostream>

using namespace std;

/*
    Write an algorithm that calculates the speed of an object given the distance and time to move across that distance
*/

int main () {
    float dis;
    int time;
    float v = 0.00;

    cout << "Please insert distance in meters: " << endl;
    cin >> dis;

    cout << "Please insert time in seconds: " << endl;
    cin >> time;
    //initializing variables and inserting values

    v = dis / time;
    //  speed = distance / time

    cout << "The speed of the object in the given distance is: " << v << " m/s" << endl;
    //outputting result

    return 0;
}