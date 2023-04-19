/*
    Write an algorithm that takes as input a sequece of two city names and distances between them (measured in miles) and report those distances in kilometers. Must create a function to turn miles into kilometers (1 mille = 1.6 km), another function to read the two cities and their distance and another function to determine if the algorithm should keep executing. For that notice that the algorithm is finished if there're 2 cities with the same name and their distance is 0. I.e: for the sequence Caracas Valencia 98 Caracas Maturin 312 Caracas Caracas 0, the algorithm should output: 
    Caracas Valencia: 156,8
    Caracas Maturin: 499,2
*/

#include <iostream>

using namespace std;

void distance(){
    int city1, city2;
    float dis;
    
    cout << "please insert name of the city: " << endl << "(1) Puerto Ayacucho" << endl << "(2) Barcelona" << endl << "(3) San Fernando de Apure" << endl << "(4) Maracay" <<endl << "(5) Barinas" <<endl << "(6) Ciudad Bolivar" <<endl << "(7) Valencia" <<endl << "(8) San Carlos" <<endl << "(9) Tucupita" <<endl << "(10) Coro" <<endl << "(11) San Juán de Los Morros" << endl << "(12) Barquisimeto" << endl << "(13) Mérida" << endl << "(14) Los Teques"<< endl << "(15) Maturin" << endl << "(16) La Asunción" << endl << "(17) Guanare" << endl << "(18) Cumaná" << endl << "(19) San Cristóbal" << endl << "(20) Trujillo" << endl << "(21) La Guaira" << endl << "(22) San Felipe" << endl << "(23) Maracaibo" << endl << "(24) Caracas";

        cout << endl;
        cout << "please insert name of the city 1: ";
        cin >> city1;

        cout << "please insert name of the city 2: ";
        cin >> city2;

        cout << "Insert distance in km: ";
        cin >> dis;
        //assigning variables in the loop
        cout << endl;


    while((city1 != city2) && dis != 0){
        while(((city1 > 24 || city1 < 1) || (city2 < 1 || city2 > 24)) || dis < 0){
            cout << "Invalid parameters" << endl;
                
            cout << endl;
            cout << "please insert name of the city 1: ";
            cin >> city1;

            cout << "please insert name of the city 2: ";
            cin >> city2;

            cout << "Insert distance in km: ";
            cin >> dis;
            //assigning variables in the loop
            cout << endl;
        } //validation

        cout << "Distance between the 2 cities is: " << dis*1.6 << " km";
        //output operation

        cout << endl;
        cout << "please insert name of the city 1: ";
        cin >> city1;

        cout << "please insert name of the city 2: ";
        cin >> city2;

        cout << "Insert distance in km: ";
        cin >> dis;
        //assigning variables in the loop
        cout << endl;
    }

}


int main(){
    distance();
    return 0;
}