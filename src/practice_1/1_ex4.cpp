#include <iostream>
#include <math.h>

using namespace std;

/*
    Write an algorithm that calculates hypotenuse of a rectangle triangle given the lengths of each edge
*/

int main(){
    float catA, catB, hypSq, hyp;

    cout << "Please insert lengths of each edge: " << endl;
    cin >> catA >> catB;
    //initializing and recieving variables

    if(catA <= 0 || catB <= 0){
        cout << "Sorry, we cannot operate with these lengths";
        return -1;
        //veryfying that the measures are real
    } 

    hypSq = pow(catA, 2) + pow(catB, 2);
    //calculating hypotenuse squared

    hyp = pow(hypSq, 0.5);
    //extracting square root of your hypotenuse

    cout << endl <<"The hypotenuse of your rectangle triangle is: " << hyp;
    //outputting result

    return 0;
}