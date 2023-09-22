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
    string disease_name;
    string symptoms[4];
    int countM;
    int countF;
    int countT = countM + countF;
}; // structure for Disease

struct Patient {
    string name;
    bool gender;
    int age;
    string sympt[4];
}; // structure for Patient

void fillArray(Patient arr[]){
    int i = 0;
    while(i < 10){
        Patient p;

        p.name = "";
        p.gender = false;
        p.age = 0;
        int j = 0;
        while(j < 4){
            p.sympt[j] = "";
            j++;
        }

        arr[i] = p;

        i++;
    }
}
// fill array function 

void printPatient(Patient arr[10]){
    int i = 0;
    while( i < 10){
        cout << "Patient's name: " << arr[i].name << endl;
        cout << "gender: " << arr[i].gender << endl;
        cout << "age: " << arr[i].age << endl;

        int k = 0;
        while(k < 4){
            cout << "Patient's symptom N°" << k + 1 << ": " << arr[i].sympt[k] << endl;
            k++;
        }                                
        cout << endl;
        i++;
    }
}
// print patient function

int main(){

    
    Patient patients[10]; // creating patients array
    fillArray(patients); //filling patients array with dummy data
    printPatient(patients); // printing patients array in console
    //filling and printing patients list for the first time
    
    fstream inputfile;

    inputfile.open("patients.txt", ios::in);

    if(inputfile.is_open()){
        cout << "It's open" << endl;

        string name;
        bool gender;
        int age;
        string symptom;

        int i = 0;

        while(i < 10){

            inputfile >> name;
            patients[i].name = (string)name;
            

            inputfile >> gender;
            patients[i].gender = (bool)gender;
 
            inputfile >> age;
            patients[i].age = (int)age;

            int j = 0;
            while(j < 4){
                inputfile >> symptom;
                patients[i].sympt[j] = (string)symptom;
                j++;
            }

            i++;

        }
    }
    inputfile.close();
    
    printPatient(patients);

    return 0;
}
