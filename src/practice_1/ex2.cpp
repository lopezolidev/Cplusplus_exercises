#include <iostream>
#include <cmath>  

using namespace std;


/*
    Algorithm that can take as input the coefficients A, B and C from a second degree equation (Ax2 + Bx + C = 0), and print in the screen the values of 'x'. Assume the equation always can be solved in the Real numbers. Use bhaskara's formula to obtain the values of 'x'.
*/

int main(){
    int a, b, c, det;
    float det2, res1, res2;

    cout << "Please insert A coefficient: ";
    cin >> a;

    cout << "Please insert B coefficient: ";
    cin >> b;
    
    cout << "Please insert C coefficient: " << endl;
    cin >> c;
    //creating and inserting variables 


    if(!(a != 0 && (b*b - 4*a*c) > 0 )){
        cout << "Sorry, we can't operate with those coefficients";
        return -1;
        //informing the user when the equation cannot be satisfied
    }

    det = pow(b, 2) - 4*a*c;

    det2 = pow(det, 0.5);
    //calculating determinant

    res1 = (-b + det2) / 2*a;

    res2 = (-b - det2)  / 2*a;
    //calculating results

    cout << "The results of your operations were: " << endl;
    cout << res1 << endl << res2;
    //outputting results

    return 0;
}

