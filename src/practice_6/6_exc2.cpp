/*
    A point in 3 dimensions has 3 coordinates X, Y, Z. Define a structure to represent them. Using the previously defined structre, write a function that calculates the distance between 2 points. Remember that the distance between 2 points P and Q is given as: d = ((Px - Qx)² + (Py - Qy)² + (Pz - Qz)²)^(1/2)
*/

#include <iostream>
#include <cmath>

using namespace std;

struct  Point
{
    int xAxis;
    int yAxis;
    int zAxis;
};

void display(Point p){
    cout << "x Axis: " << p.xAxis << endl;
    cout << "y Axis: " << p.yAxis << endl;
    cout << "z Axis: " << p.zAxis << endl;
}

int createXAxis(char op){
    int value;

    if(op == 'x'){
        cout << "insert X axis value: ";
    } else if(op == 'y'){
        cout << "insert Y axis value: ";
    } else {
        cout << "insert Z axis value: ";
    }
        
        cin >> value;

    return value;    
}

float calculateDistance(Point p, Point q){
    int x_component;
    int y_component;
    int z_component;
    float total;

    x_component = p.xAxis - q.xAxis;
    x_component *= x_component;

    y_component = p.yAxis - q.yAxis;
    y_component *= y_component;
    
    z_component = p.zAxis - q.zAxis;
    z_component *= z_component;

    total = x_component + y_component + z_component;

    total = sqrt(total);

    return total;
}

int main(){

    cout << "Create points in 3D: " << endl;

    cout << "Create P point" << endl;
    Point p;

    p.xAxis = createXAxis('x');
    p.yAxis = createXAxis('y');
    p.zAxis = createXAxis('z');

    cout << "Create Q point" << endl;
    
    Point q;

    q.xAxis = createXAxis('x');
    q.yAxis = createXAxis('y');
    q.zAxis = createXAxis('z');

    // cout << "p.xAxis: " << p.xAxis;
    cout << "P point: " << endl;
    display(p);    
    cout << endl;

    cout << "Q point: " << endl; 
    display(q);

    cout << "Distance between 2 points: " << calculateDistance(p, q);

    return 0;
}
