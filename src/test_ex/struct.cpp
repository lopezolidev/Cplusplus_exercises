/*
    A Struct data type is a heterogenous data structure, therefore admitting more than one data type in its attributes; also can store functions, thereby acting as methods like an object
*/

#include <iostream>

using namespace std;

/*
    COMPILE AND TEST THIS CODE
    TO-DO: Create a structure that "stores" functions like a library
*/

//creating a struct "person"

struct Person{
    int id; 
    bool gender;
    char name[256];
}; //declaring a struct type with person

//we can create a function that returns this new data type
Person readPerson(){
    Person x; //declaring
    cin >> x.name;
    cout << endl;

    cin >> x.gender;
    cout << endl;

    cin >> x.id;
    cout << endl; //inserting values to those attributes
    
    return x; //returning a struct data 
}

void printPerson(Person p){
    cout << "id: " << p.id << endl;
    cout << "gender: " << p.gender << endl;
        if(p.gender){
            cout << "male" << endl;
        } else {
            cout << "female" << endl;
        }
    cout << "name: " << p.name << endl;
} //function to read the attributes of the structure Person

int main(){
    Person a; //instancing a structure

    a.id = 10989545;
    
    a.gender = true;

    // a.name = "Francis";  ← expression must be a modifiable value

    Person b = {
        989444343,
        false,
        "Mary" 
    }; //we must send the values of the attributes in brackets when defining, also separated by commas and in the order that they were defined in the structure

    Person y = readPerson(); //calling the function of Person to insert those values inside a variable, which is the same data type 



    return 0;
}