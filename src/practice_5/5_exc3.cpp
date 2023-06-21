/*
    Write a function that takes as input a string and return TRUE if its a palindrome
*/

#include <iostream>
#include <string>

using namespace std;

void isPali(string word){
    int i = 0;
    bool b;

    while(i < word.length()){
        if(word[i] == word[word.length() - i - 1]){
             //operation to find out if the word is palindrome, comparing letters in opposite directions along the array of characters
            b = true;
        } else {
            b = false; //when there's no coincidence between letters the loop stops and the function determines the word its not a palindrome
            break;
        }
        i++;
    }

    cout << "The word is ";
    if(!b){
        cout << "not ";
    }
    cout << "a palindrome";
}

int main(){
    string word;
    cout << "Please insert a word to check if its palindrome: ";
    cin >> word; //inserting the string
    cout << endl;

    isPali(word);

    return 0;
}