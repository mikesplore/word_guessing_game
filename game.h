#ifndef GAME_H
#define GAME_H

#include <iostream>
using namespace std;

//function declarations
void displayHints(const string& targetWord, const string& guessedWord);
void displayFirstAndLastTwo(const string& word);
void displayFirstFour(const string& word);
void displayAllButLast(const string word);
void displayLastFour(const string& word);
bool checkDeduct(int deduct, string w);
void rules();

 

#endif //GAME_H