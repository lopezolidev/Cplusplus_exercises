/*
    1. There're different kind of products in a store. Each product contains a code, description, a name and price. There're different types of products. Each type has a name, a code and 10 products.

    a) Define the data structures to store a product, and then store the type of product.  ----- DONE

    b) Let's suppose we have an array with 5 types of products and we wish to increase the 10% of the price of all products of a specific type with code C ----- DONE

    c) Write a function that given a code of product P, browse the product in the whole data structure and return true if the product exists or false in the opposite case
*/

//TODO: FINISH CREATE PRODUCTS FUNCTIONS

#include <iostream>
#include <string>
#include <fstream>

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
    int counter = 10;
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

int typeCounter(){
    int counter;

    cin >> counter;

    return counter;
}

string typeDescription(){
    string description;

    cin >> description; 
    
    return description;
}

float typePrice(){
    float price;

    cout << "Insert product price: ";
    cin >> price;

    return price;
}

void fillProducts(Products arr[], int sizeP, string file){

    string name;
    string description;
    float price;
    char code;

    fstream inputFile;

    inputFile.open(file, ios::in);

    int j = 0;

    if(inputFile.is_open()){
            while(j < 10){
            
            inputFile >> name;
            arr[j].name = name;

            inputFile >> description;
            arr[j].description = description;
            
            inputFile >> price;
            arr[j].price = price;

            inputFile >> code;
            arr[j].code = code;

            j++;
        }   
    }
    inputFile.close();
}

void fillTypes(Types arrT[], int sizeT, int sizeP){
    int i = 0;

    string name;
    char code;
    int counter;

    fstream inputFile;
    
    inputFile.open("types.txt", ios::in);

    string files[] = {"productsA.txt", "productsB.txt", "productsC.txt", "productsD.txt", "productsE.txt"};

    if(inputFile.is_open()){
        while(i < sizeT){

        inputFile >> name;
        arrT[i].name = name;

        inputFile >> code;
        arrT[i].code = code;

        fillProducts(arrT[i].storage, sizeP, files[i]); //sending the empty array of products in this function, this function will call the other methods to fill the attributes of each product

        i++;
        }
    }
    inputFile.close();

    
} // filling the array of types of products

void printProducts(Products arr[], int size){
    int k = 0;
    while(k < size){
        cout << "Name of product: " << arr[k].name << endl;
        cout << "Description of product: " << arr[k].description << endl;
        cout << "Price of product: " << arr[k].price << endl;
        cout << "Code of product: " << arr[k].code << endl;

        k++;
    }
    cout << endl;
}

void printTypes(Types arr[], int size){
    int i = 0;
    while(i < size){
        cout << "Name of type: " << arr[i].name << endl;
        cout << "Code of type: " << arr[i].code << endl;
        cout << "Ammount of products in type: " << arr[i].counter << " units"<< endl << endl;

        printProducts(arr[i].storage, 10);

        i++;
    }

}

int countC(Products arr[], int sizeP){
    int j = 0;

    int c = 0;

    while(j < sizeP){
        if(arr[j].code == 'C' || arr[j].code == 'c') c++;

        j++;
    }

    return c;
} // counting how many C type products exist in each category

void printCProduct(Products arr[], int sizeP){
    int i = 0;
    while(i < sizeP){
        if(arr[i].code == 'C' || arr[i].code == 'c'){
            cout << "Product name: " << arr[i].name << endl;
            cout << "Product price: " <<  arr[i].price << endl << endl;
        }

        i++;
    }

} // function to print only products which code is == C or c

void printC(Types arr[], int sizeT, int sizeP){
    int i = 0;
    while(i < sizeT){
        cout << "Type of product: " << arr[i].name << endl;
        cout << "Number of C-code products in this type: " << countC(arr[i].storage, sizeP) << endl; 
        printCProduct(arr[i].storage, sizeP);

        i++;
    }

}

void increaseProductC(Types types[], int sizeT, int sizeP){
    int i = 0;

    while(i < sizeT){

        int j = 0;
        while(j < sizeP){
            if(types[i].storage[j].code == 'C' || types[i].storage[j].code == 'c'){
                float p = 0.0;
               
                p = types[i].storage[j].price;
              
                p = (10 * p) / 100;
              
                types[i].storage[j].price = p + types[i].storage[j].price;
                // increasing 10% to the original price to products of code C   
            }


            j++;
        }

        i++;
    }


}

int main(){
    Types store[5];


    fillTypes(store, 5, 10);
    //printTypes(store, 5);

    printC(store, 5, 10);

    increaseProductC(store, 5, 10);

    printC(store, 5, 10);

    return 0;
}

//TODO: Correct everything