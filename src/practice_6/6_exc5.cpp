/*

A medical clinic diagnoses possible diseases that its patients may be suffering from by comparing the information of the symptoms presented by the patient with the information of the symptoms characteristic of the diseases recorded by them. Thus, a patient is diagnosed with a disease if their symptoms match exactly with those recorded for that disease. Considering that the clinic has characterized M diseases, each with a maximum of N symptoms, develop an algorithm that, given a sample of K patients (name, gender, age, and symptoms), indicates:

• The most frequent disease.
• The percentage of each disease by gender.

*/

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct Disease {
    string symptom1;
    string symptom2;
    string symptom3;
    string symptom4;
};

struct Patient {
    string name;
    bool gender;
    int age;
    Disease arr[4];
}; 

int main(){

    /*TODO DO FUNCTION TO READ FILES AND FILL AN ARRAY*/

    return 0;
}
