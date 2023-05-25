/*
    Write an algorithm that reads all the characters in a file names "letters.txt" and count the frequence of each letter in the file
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Letter {
    char letter;
    int frequence;

};

void fillArray(Letter lettersArray[]){
    for (int i = 0; i < 26; i++)
    {
        Letter l;
        l.letter = (char)(int)'a' + i; //creating each letter for the array
        l.frequence = 0;
        lettersArray[i] = l; //inserting each letter by order
    }
} // function to create an array of letters

void printArray(Letter arr[]){
    int i = 0;

    while(i < 26){
        cout << "Letra: " << arr[i].letter << endl;
        cout << "Frecuencia: " << arr[i].frequence << endl;
        i++;
    } //print array function
}

void match(char& letter, Letter lettersArray[]){

    int j = 0;

    while(j < 26){
        if(letter == lettersArray[j].letter){
            lettersArray[j].frequence++;
        }

        j++;
    }
} //match function to know how frequence of letters in the given file

int main(){
    string name = "letters.txt";

    fstream outfile(name, ios_base::out); //writing in the file

    outfile << "fbqeibqirewfbidbiqbvqibrifvbq3riugbqneijvcnq";
    outfile << "\n";
    outfile << "3uhrfbinbedfiqrfbviqbedkjvcnbqaigbadjkvnbqrivbejvkbaicuq";
    outfile << "\n";
    outfile << "irvbqirvbqireb";
    //example line to fill the "Letters.txt" file

    outfile.close();

    fstream file;
    
    Letter array[26];
    fillArray(array);

    file.open("letters.txt", ios::in); //reading a file
        
        if(file.is_open()){
            cout << "It's open!" << endl;
            char letra;
        while(true){
   
            file >> letra;

            match(letra, array);
            
            if(file.eof()) break;

            // cout << letra << endl;   
        }
    }
    file.close();

    printArray(array); //print function

    return 0;
}