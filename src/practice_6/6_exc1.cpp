/*
    1. There're different kind of products in a store. Each product contains a code, description, a name and price. There're different types of products. Each type has a name, a code and 10 products.

    a) Define the data structures to store a product, and then store the type of product.

    b) Let's suppose we have an array with 5 types of products and we wish to increase the 10% of the price of all products of a specific type with code C

    c) Write a function that given a code of product P, browse the product in the whole data structure and return true y the product exists or false in the opposite case
*/

//TODO: FINISH CREATE PRODUCTS FUNCTIONS

#include <iostream>
#include <string>

using namespace std;

struct Products {
    char code;
    float price;
    string name;
    string description;
}; //data strucure to create a product

struct Types {
    string name;
    char code;
    Products storage[10];
    int counter;
}; //data structure of product type


char typeCode(){
    char code;

    cin >> code;

    return code;
} // typeName and TypeCode are modular functions to abstract the insertion of name and properties

string typeName(){
    string name;

    cin >> name;

    return name;
}

string typeDescription(){
    string description;

    cout << "Insert description: ";

    cin >> description; 
    cout << endl;

    return description;
}

float typePrice(){
    float price;

    cout << "Insert product price: ";
    cin >> price;

    return price;
}



void createProduct(Products array[], int& count, char op){
    // char op;
    int i = 0;
do {
 
    if(op == 'y' || op == 'Y'){ 
        Products p;

        cout << "Insert product code: ";
        p.code = typeCode();
        cout << "p.code: " << p.code << endl;


        cout << "Insert product name: ";
        p.name = typeName();
        cout << "p.name: " << p.name << endl;

        p.description = typeDescription();
        cout << "p.description: " << p.description << endl;

        p.price = typePrice();
        cout << "p.price: " << p.price << endl;

        // if(tCode == c){
            if(count <= 9){    
                array[count] = p;
                count++;
                i++;
                cout << "count " << count << endl;
            } else {
                cout << "Products array is full!" << endl;
                return; 
            }
    } else if( op == 'n'){
        cout << "Thanks! " << endl;
        return;
    } else {
        cout << "ERROR: Invalid option. Must be yes (y) or no (n)";
    }

    cout << "Do you wish to create a new product? (y / n)" << endl;
    cin >> op;

} while((op != 'y' || op != 'n') || (i <= 9));     
}

void createType(Types array[]){
int i = 0;
char o;

while(i < 5){
cout << "Do you wish to create a new Type of product? (y / n)" << endl;
// cout << "Press (f) to finish the program" << endl;

    cin >> o;
    cout << endl;

    if(o == 'y' || o == 'Y'){
        Types t;

        cout << "Insert name of product type: ";
        t.name = typeName();
        cout << endl;
        
        cout << "Insert type of product code: ";
        t.code = typeCode();
        cout << endl;

        t.counter = 0;

        array[i] = t;

        cout << "The product type will have an array of 10 products, please insert the option for creating products (y / n)" << endl;   

        char d;

        do{
            cin >> d;
            cout << endl;

            if(d == 'y' || d == 'Y'){
                createProduct(t.storage, t.counter, d); //creating product by Type of product
                cout << "t.counter: " << t.counter << endl; 
            }   else if(d == 'n' || d == 'N' ){
                cout << "Thanks!";
                return;
            }   else {
                cout << "ERROR: invalid option. Only yes (y) or no (n)" << endl;
            }

            cout << "Do you wish to create a new product? (y / n) " << endl;
        } while(d != 'y' || d != 'n');

    i++; // increasing the number of elements in the array of Types of Products

    } else if(o == 'n'){
       cout << "Thanks! " << endl; 
       return;
    } else {
        cout << "ERROR: invalid option. Only yes (y) or no (n)";
    }
}

    cout << "ERROR: The types of products array is full! " << endl;

}

void createLoneProduct(Types arr[], char code){
    int k = 0;

    while(k < 5){
        if(arr[k].code == code){
            createProduct(arr[k].storage, arr[k].counter, 'y'); //now a new product will be created using code criteria and the rest of the Types of products parameters
        }
        k++;
    } 
    cout << "No Type of Product match with give product code." << endl;
    cout << "Cannot create a new product without a Type of product" << endl;    
}

void menu(Types array[]){
    char op;

    cout << "Welcome to Store.inc! please select any of the options below: " << endl;

    do {
        cout << "1- Create a type of product" << endl;
        cout << "2- Create a product" << endl;
        cout << "3- finish the program" << endl;

        cin >> op;
        cout << endl;

        if(op == '1'){
            createType(array);
        }else if(op == '2'){
            char dd;
            cout << "Insert Type of product code: ";
            cin >> dd;

            cout << endl;

            createLoneProduct(array, dd);
        } else if(op == '3'){
            cout << "See you!" << endl << endl;
            return;
        }else {
            cout << "ERROR: invalid option. The options are 1 or 2" << endl;
        }
    } while((op != '1' || op != '2') || op != '3');

}

void display(Types array[]){
    int i = 0;

    cout << "Types: " << endl;

    while(i < 1){

        cout << "Type of product name: " << array[i].name << endl;
        cout << "Type of product code: " << array[i].code << endl;
        cout << "Type of product counter: " << (int) array[i].counter << endl;
        
        cout << "==========================================================" << endl;
        int j = 0;
        while(j < 1){
            string productName = array[i].storage[j].name;
            string productDescription = array[i].storage[j].description;
            char productCode = array[i].storage[j].code;
            float productPrice =  array[i].storage[j].price;

            cout << "Product name: " << productName << endl;
            cout << "Product description: " << productDescription<< endl;
            cout << "Product code: " << productCode << endl;
            cout << "Product price: " << productPrice << " $" << endl;

            j++;
        }
        cout << "==========================================================" << endl;
        i++;
    }
}

int main(){
    Types store[5];

    menu(store);
    display(store);

    return 0;
}

//TODO: Correct everything