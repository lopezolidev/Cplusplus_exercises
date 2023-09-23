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
    while(i < 20){
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

void printPatient(Patient arr[]){
    int i = 0;
    while( i < 20){
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

void readingPatients(Patient array[]){

    fstream inputfile;

    inputfile.open("patients.txt", ios::in);

if(inputfile.is_open()){
        // cout << "It's open" << endl;

        string name;
        bool gender;
        int age;
        string symptom;

        int i = 0;

        while(i < 20){
            if(inputfile.eof()) break;

            inputfile >> name;
            array[i].name = (string)name;
            

            inputfile >> gender;
            array[i].gender = (bool)gender;
 
            inputfile >> age;
            array[i].age = (int)age;

            int j = 0;
            while(j < 4){
                inputfile >> symptom;
                array[i].sympt[j] = (string)symptom;
                j++;
            }

            i++;

        }
    }
    inputfile.close();
} // function to read patients info from file 

void fillDisease(Disease array[]){
    int i = 0;
    while(i < 10){
        Disease d;
        d.disease_name = "";
        int j = 0;
        while(j < 4){
            d.symptoms[j] = "";
            j++;
        }
        d.countM = 0;
        d.countF = 0;
        d.countT = d.countF + d.countM;

        array[i] = d;
        i++;
    }
} // filling diseases array

void printDisease(Disease array[]){
    int i = 0;

    while(i < 10){
        cout << "Disease name: " << array[i].disease_name << endl;
        
        int j = 0;
        
        while(j < 4){
            cout << "Symptom " << j << ": " << array[i].symptoms[j] << endl;
            j++;
        }
        
        cout << "Males infected: " << array[i].countM << endl;
        cout << "Females infected: " << array[i].countF << endl;
        array[i].countT = array[i].countF + array[i].countM;
        cout << "Total infected: " << array[i].countT << endl << endl;
        
        i++;
    }
}

void readingDiseases(Disease array[]){
    fstream inputfile;

    inputfile.open("diseases.txt", ios::in);

    if(inputfile.is_open()){
        //cout << "Disease file opened!" << endl;

        string disease_name;
        string sympt;

        int i = 0;
        while(i < 10){
            inputfile >> disease_name;
            array[i].disease_name = disease_name;

            int j = 0;
            while(j < 4){
               
                inputfile >> sympt;
                array[i].symptoms[j] = sympt;

                j++;
            }
            

            if(inputfile.eof()) break;

            i++;
        }
    }

    inputfile.close();
} // input in array of diseases list with its symptoms from file 

void matchSympt(Patient patients_array[], Disease diseases_array[]){
    int i = 0;
    while(i < 20){
        Patient p;
        p = patients_array[i];

        int j = 0;
        while(j < 10){
            Disease d;
            d = diseases_array[j];    
            
            if(
                (((p.sympt[0] == d.symptoms[0] || p.sympt[0] == d.symptoms[1]) || p.sympt[0] == d.symptoms[2]) || p.sympt[0] == d.symptoms[3])
                &&
                (((p.sympt[1] == d.symptoms[0] || p.sympt[1] == d.symptoms[1]) || p.sympt[1] == d.symptoms[2]) || p.sympt[1] == d.symptoms[3])
                &&
                (((p.sympt[2] == d.symptoms[0] || p.sympt[2] == d.symptoms[1]) || p.sympt[2] == d.symptoms[2]) || p.sympt[2] == d.symptoms[3])
                &&
                (((p.sympt[3] == d.symptoms[0] || p.sympt[3] == d.symptoms[1]) || p.sympt[3] == d.symptoms[2]) || p.sympt[3] == d.symptoms[3])
            ){ // condition to evaluate match of patient symptoms to disease symptoms
                if(p.gender == 1){
                    diseases_array[j].countM++;
                } else if (p.gender == 0){
                    diseases_array[j].countF++;
                }
            }

            j++;
        }

        i++;
    }
} // matching diseases symptoms with patients symptoms

void MFDisease(Disease array[]){
    int c = 0;
    Disease d;

    int i = 0;
    while(i < 10){

        if(c < array[i].countT){
            c = array[i].countT;
            d.disease_name = array[i].disease_name;
        }

        i++;
    }

    cout << endl << "The most frequent disease is: " << d.disease_name << " with " << c << " total affected" << endl;
} // algorithm to find the most frequent disease and printing in console

void totalMF(int& males, int& females, Disease array[]){
    int i = 0;
    while(i < 10){
        females += array[i].countF;
        males += array[i].countM;

        i++;
    }
} // total males and females counter passing parameters as reference

int main(){
    
    Patient patients[20]; // creating patients array
    fillArray(patients); //filling patients array with dummy data
    //printPatient(patients); // printing patients array in console
    
    
    readingPatients(patients);
    // calling function to read from file
    printPatient(patients);  // printing patients array in console

    Disease diseases[10];
    fillDisease(diseases); // filling diseases array
    //printDisease(diseases); // printing diseases in console

    readingDiseases(diseases);
    //printDisease(diseases); // printing diseases in console

    matchSympt(patients, diseases);
    printDisease(diseases); // printing diseases in console
    
    /* FIRST TASK COMPLETED */
    MFDisease(diseases); 

    int totalM = 0;
    int totalF = 0;

    totalMF(totalM, totalF, diseases);

    cout << "total males: " << totalM << endl;
    cout << "total females: " << totalF << endl;

    /* TODO: Finish 2nd task */

    return 0;
}
