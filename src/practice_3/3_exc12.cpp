/*
    Write an algorithm that reads a real number x, an integer number n and real coefficients "ai" of a polynomium p(x) = a0 x0 + a1 x1 + x2 x2 . . . an−1 xn−1. And calculate the value of the given polynomium I.e: if x = 2, n = 3 and their coefficients are 2, -1, 3, the polynomium is p(x) = 2 -x + 3x² , and should write the value 12
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, x, a, res = 0, i = 0;
    //n = degree of the polynomial, x = real number, a = coefficients, res = accumulative result, i = iterator for the loop

    cout << "Please insert degree of the polynomial: ";
    cin >> n;
    cout << endl;

    while(n < 0){
        cout << "Invalid degree, insert another: ";
        cin >> n;
        cout << endl;
    } //validation when the degree is invalid

    cout << "Insert real number for polynomial: ";
    cin >> x;
    cout << endl; //real number

    while(i < n + 1){
        cout << "Insert coefficent: ";
        cin >> a; //coefficient to multiply power of given real number

        res += a*pow(x, i); //product of coefficient and real number at the power of iterator

        i++; //increasing iterator until it is 1 unit less than degree of polynomial
    }

    cout << res;

    return 0;
}