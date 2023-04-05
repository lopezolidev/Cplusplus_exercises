#include <iostream>

using namespace std;

int main() {
    float lb, cm, IMC;

    cout << "Please insert your weight in lb: "<< endl;
    cin >> lb;
    //inserting weight of individual

    cout << "Please insert your height in cm: "<< endl;
    cin >> cm;
    //inserting height of individual

    lb = lb * 0.453592;
    cm = cm / 100;
    //transforming pounds and cm in kilograms and meters

    IMC = lb / (cm * cm);
    //calculating IMC

    cout << "Your weight in kg is: "<< lb << endl;
    cout << "Your IMC is: " << IMC << endl;
    cout << "The category according to your IMC is: ";
    //outputting result

    if(IMC < 16){
        cout << "entrance criteria";
    } else if(IMC >= 16 && IMC <= 16.9){
        cout << "infraweight";
    } else if(IMC >= 17 && IMC <= 18.4){
        cout << "low weight";
    } else if(IMC >= 18.5 && IMC <= 24.9){
        cout << "normal weight";
    } else if(IMC >= 25 && IMC <= 29.9){
        cout << "overweight";
    } else if(IMC >= 30 && IMC <= 34.9){
        cout << "premorbid obesity";
    } else if(IMC >= 40 && IMC <= 45){
        cout << "morbid obesity";
    } else if(IMC > 45){
        cout << "hypermorbid obesity";
    } // else... if linked to show category according to IMC

    return 0;
}