#include "game.h"

// Function to display hints
void displayHints(const string& targetWord, const string& guessedWord) {
    cout << "Matching characters: ";
    bool correct = true; // Flag to check correctness

    for (int i = 0; i < targetWord.length(); i++) {
        if (targetWord[i] == guessedWord[i]) {
            cout << targetWord[i];
        } else {
            cout << "_ "; // Display an underscore for incorrect positions
            correct = false; // Guess is incorrect
        }
    }

    cout << endl;
}

// Function to display the first and last two characters of a word
void displayFirstAndLastTwo(const string& word) {
    if (word.length() >= 2) {
        cout << "\nFirst two characters: " << word.substr(0, 2) << endl;
        cout << "\nLast two characters: " << word.substr(word.length() - 2, 2) << endl;
    } else {
        cout << "\nThe word is too short to extract the first and last two characters." << endl;
    }
}


// Function to display the first four characters of a word
void displayFirstFour(const string& word) {
    if (word.length() >= 4) {
        cout << "\nFirst four characters: " << word.substr(0, 4) << endl;
    } else {
        cout << "\nThe word is too short to extract the first four characters." << endl;
    }
}

// Function to display all characters of a word except the last one
void displayAllButLast(const string word) {
    cout<<"\nAll but the last character: " << word.substr(0, word.length() - 1) << endl;
}

// Function to display the last four characters of a word
void displayLastFour(const string& word) {
    if (word.length() >= 4) {
        cout << "\nLast four characters: " << word.substr(word.length() - 4, 4) << endl;
    } else {
        cout << "\nThe word is too short to extract the last four characters." << endl;
    }
}

//Function to check if the deduction per quiz is greater than 5
bool checkDeduct(int deduct, string w){
    if(deduct>5){
        cout<<"You have exausted all your available points for this quiz. The answer is: "<<w<<endl; 
        return true;
    }

    return false;
}

//The rules will be written here
void rules(){
    cout << "Here are the game rules" << endl;
    cout << "============================================================================================" << endl;
    cout << "1. Each quiz has 5 points for a correct guess" << endl;
    cout << "2. You have 3 attempts per quiz" << endl;
    cout << "3. You can get hints when stuck, but points will be deducted for each hint given as follows:" << endl;
    cout << "   a). Type 'h1' to get first and last two characters of the word (2 points deduction)" << endl;
    cout << "   b). Type 'h2' to get first four characters of the word (3 points deduction)" << endl;
    cout << "   c). Type 'h3' to get the last four characters of the word (3 points deduction)" << endl;
    cout << "   d). Type 'h4' to get the all but the last character of the word (4 points deduction)" << endl;
    cout << "============================================================================================" << endl;
    }

    