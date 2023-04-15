/*
    Use loops to calculate the value of the following expression: Sum from i = 1 to n of (Product  from j = 1 to i and argument as j²)
*/


#include <iostream>
#include <cmath>

using namespace std;

int product(int b){
    int j = 1, p = 1;
        while(j <= b){
        p *= pow(j, 2); //calculating the product taking as argument j²
        j++; //increasing j by 1 on each iteration
    }
    return p;
}

int sum(int a){
    int res = 0, i = 1;
    while(i <= a){ //comparing with the upper limit of the sum
        res += product(i); //each iteration the loop will call product function to increase the value of result 
        i++; //increasing by one the iterator
    }
    return res;
}

int main(){
    int n = 0;

    cout << "Insert n: ";
    cin >> n;
    cout << endl;

    cout << sum(n);

    return 0;
}