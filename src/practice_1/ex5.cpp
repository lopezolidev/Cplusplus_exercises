#include <iostream>

using namespace std;

int main() {
    int i = 1;
    int j = 2;
    float r = 2.0;
    bool b = true;

    bool m;

    m = i / (2+j) <= 5 * j / 3;

    int i1 = 11 / 2;
    float r2 = 11 / (float)2;

    bool p = true && 1 + j >= j*5 % 3;

    cout << "(a): i = (i + 2) * r → " << (i + 2) * r << endl;
    //as the variable is an integer the output will be an integer

    cout << "(b): b = i / (2+j) <= 5 * j / 3 → " << m << endl;
    // boolean variable → numeric expression of "true"

    cout << "(c): c = 11 / 2 → " << i1 << endl;
    // integer operands, integer result

    cout << "(d): r = 11 / (float)2 → " << r2 << endl;
    // float variable, float result

    cout << "(e): b = true && 1 + j >= j*5 % 3 → " << p;
    // boolean variable → boolean interpretation of numeric value

    return 0;
}