/*
    Given a file named "people.txt" with information about people, you have to write an algorithm that reads the file and loads it in an array of structures. After that, you must store in another file only the id's and ages of people that have more than 18 years of age. First line of the file "people.txt" contains the name N of people stored in the file. For each person there will be a line with its id, then a line with his or her full name, then a line with his or her age, and finally a line with his or her gender. There will be 100 people at most in the file. The structure to store a person's information of a person is the following:

    struct Persona {
        int cedula;
        string name;
        int edad;
        char sexo;
    }
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Persona {
    int cedula;
    string name;
    int edad;
    char sexo;
};

void fillPeople(Persona array[]){
    int i = 0;

    while(i < 10){
    Persona p;
    p.cedula = 0;
    p.edad = 0;
    p.name = " ";
    p.sexo = false;

    array[i] = p;

        i++;
    }

}

void printPeople(Persona array[]){
    int j = 0;

    while(j < 10){
        cout << "CI: " << array[j].cedula << endl;
        cout << "name: " << array[j].name << endl;
        cout << "edad: " << array[j].edad << endl;  
        cout << "sexo: ";
        if(array[j].sexo){
            cout << "true" << endl;
        } else {
            cout << "false" << endl;
        }
       
        j++;
    }
}

int main(){

    fstream inputFile;
    
    Persona people[10];
    int k = 0;

    fillPeople(people);

    int numberOfPeople;
   
    inputFile.open("people.txt", ios::in);


    if(inputFile.is_open()){
        cout << "It's open";
        int id;
        string name;
        int edad;
        int sex;

        inputFile >> numberOfPeople;

        while(true){

            inputFile >> id;
            people[k].cedula = id;

            inputFile >> name;
            people[k].name = name;

            inputFile >> edad;
            people[k].edad = edad;

            inputFile >> sex;
            people[k].sexo = (bool)sex;

            if(inputFile.eof()) break;

            k++;
        }
    }
    inputFile.close();

    cout << "number of people: " << numberOfPeople << endl;
    printPeople(people);

    return 0;
}