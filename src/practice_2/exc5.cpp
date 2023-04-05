/*
    Given two values V1 and V2, that form a close interval, and an X value; write an algorithm to determine if X is inside or outside the given interval
*/

#include <iostream>

using namespace std;

int max(int a, int b){
    if(a > b) return a;
    return b;
} //returning maximum value

int min(int a, int b){
    if(a > b) return b;
    return a;
} //returning minimum value

int main(){
    int v1, v2, x;

    cout << "Please insert first limit: ";
    cin >> v1;
    cout << endl;

    cout << "Please insert second limit: ";    
    cin >> v2;
    cout << endl;

    cout << "insert X value: ";
    cin >> x;
    //assigning variables 

    if(v1 == v2){
        cout << "limits should be different";
        return -1;
    } //validating different integers

    cout << "The number " << x << " is ";

    if(x < min(v1, v2) || x > max(v1, v2)){
        cout << "not ";
    }  //if the number is not inside the interval

    cout << "in the interval from " << min(v1, v2) << " to " << max(v1, v2);

    return 0;
}