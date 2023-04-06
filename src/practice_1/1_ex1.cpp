#include <iostream>

using namespace std;

/*
    Input a four digit number and output the same number written backwards. E.g: Input: 4678; Output: 8764.
*/

int main(){
    int num, x, y, z, w, aux;
    cout << "please insert the 4 digit number: ";
    cin >> num;

    aux = num;

    x = num % 10;
    num = num / 10;

    y = num % 10;
    num = num / 10;

    z = num % 10;
    num = num / 10;

    w = num;
    //taking the last digit from the number and then dividing it by 10

    x = x * 1000;
    y = y * 100;
    z = z * 10;
    // applying orders of magnitude to the digits that conform the number, with exception to the last one

    num = x + y + z + w;
    // summing the new backwards number

    cout << aux << " written backwards is: " << num;
    //outputing the original number and its written backwards version 
}