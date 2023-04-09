/*
    Given a sequence of numbers finished in 0, elaborate an algorithm to calculate the percentage and total sum of odd numbers, percentage and sum of even numbers, the total sum of all the numbers, its average, and how many were inserted in the program.
*/

#include <iostream>

using namespace std;


int main(){
    long int numberSeq = 0; 
    int n, totalNum = 0, count = 0, oddC = 0, evenC = 0, oddSum = 0, evenSum = 0;


    while(n != 0){
        cout << "Please insert next number: ";
        cin >> n;
        cout << endl;
        while(n < 0 || n > 10){
            cout << "Incorrect number, insert a 1 digit number: ";
            cin >> n; 
            cout << endl; //validation menu
        }
        if(n != 0){                
            numberSeq += n;
            totalNum += n;
            numberSeq *= 10;
            count++;
            //every new number will add to the sequence and will be multiplied by 10, also the count of numbers will increase by 1
            if(n%2 != 0){
                oddC++;
                //every new odd number will add up to its counter
                oddSum += n;
                //sum of odd numbers as a specific number
            } else {
                evenC++;
                //same with even numbers
                evenSum += n;
            }
        }
    }
    

    cout << "Numbers sequence: ";
    cout << numberSeq;
    cout << endl;

    cout << "Total sum of numbers: ";
    cout << totalNum;
    cout << endl;

    cout << "How many numbers were inserted? ";
    cout << count;
    cout << endl;
    
    cout << "How many odd numbers were inserted? ";
    cout << oddC;
    cout << endl;

    cout << "How many even numbers were inserted? ";
    cout << evenC;
    cout << endl;
    
    cout << "Percentage of odd numbers: ";
    cout << (oddC/(float)count)*100 << "%";
    cout << endl;

    cout << "Percentage of even numbers: ";
    cout << (evenC/(float)count)*100 << "%";
    cout << endl;

    cout << "Average: ";
    cout << totalNum/(float)count;
    cout << endl;
    //displaying results

    return 0;
}