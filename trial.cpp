#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include "game.h"
using namespace std;


int main() {
    
    
    srand(static_cast<unsigned int>(time(nullptr)));

    vector<string> words;
    string category;
    
    cout<<"Enter category of words you want eg animals, countries: ";
    getline(cin, category);

    string filecategory=category + ".txt";
    
    

    
    ifstream wordsFile(filecategory);
    if (wordsFile.is_open()) {
        string word;
        while (getline(wordsFile, word)) {  //words are stored in a file "words.txt"
            words.push_back(word);
        }
        wordsFile.close();
    } else {
        cerr << "Failed to open words file. Please make sure '"<<filecategory<<"' exists." << endl;
        return 1;
    }
    

    

    int points = 0;
    int deduct = 0;
    int high_score = 0;

    ifstream highScoreFile("highscore.txt");
    if (highScoreFile.is_open()) {
        highScoreFile >> high_score;
        highScoreFile.close();
    }

    cout << "\nWELCOME TO THE WORD GUESSING GAME\n" << endl;

    
    //the rules function called here
    rules();

    int attempts = 3;
    string guess;
        
    while (true) {
        
        int randomIndex = rand() % words.size();
        string word = words[randomIndex];

        cout << "====================================================================" << endl;
        cout << "\nAttempts remaining: 3" << endl;
        cout<<"-------------------------------------------"<<endl;
        cout << "Think of a word of " << word.length() << " letters that starts with '" << word[0] << "' and ends with '" << word[word.length() - 1] << "'" << endl;

        while (attempts > 0) {
            cout << "\nWhich word do you think of? (Type 'exit' to quit): ";
            getline(cin, guess);
        
            bool validInput = false;

// Check if the guess matches any of the exempted words
for (const string& word : { "h1", "h2", "h3", "h4" }) {
    if (guess == word) {
        validInput = true;
        break;
    }
}

if (!validInput) {
    for (char x : guess) {
        if (isdigit(x)) {
            cout << "\nPlease enter a non-digit word. Only h1, h2, h3, or h4 are allowed.\n" << endl;
            validInput = false;
            break; // Exit the loop if any digit is found
        }
    }
}

            displayHints(word, guess);

                if( guess=="h1") {
                    deduct+=2;
                    attempts=attempts+1;
                    if (checkDeduct(deduct, word)) {
                        break; // Move to the next quiz
                    }
                    displayFirstAndLastTwo(word);


                }

                if (guess == "h2") {
                    deduct += 3;
                    attempts=attempts+1;
                    if (checkDeduct(deduct, word)) {
                        break; // Move to the next quiz
                    }
                    displayFirstFour(word);
                } else if (guess == "h3") {
                    attempts=attempts+1;
                    deduct += 3;
                    if (checkDeduct(deduct,word)) {
                        break; // Move to the next quiz
                    }
                    displayLastFour(word);
                } else if (guess == "h4") {
                    attempts=attempts+1;
                    deduct += 4;
                    if (checkDeduct(deduct, word)) {
                        break; // Move to the next quiz
                    }
                    displayAllButLast(word);
                }



            if (guess == "exit") {
                cout << "Exiting the game." << endl;
                break;
            }

            if (guess == word) {
                points += 5 - deduct;
                cout<<"\nYour guess was right!\n";
                cout<<"Points for this game: "<<5-deduct<<endl;
                cout << "Total points: " << points<< "\n"<< endl;
                


                if (points > high_score) {
                    high_score = points;
                    cout << "Congratulations! You broke the previous record of " << high_score - 5 << " points!" << endl;
                }
                break;
            } else {
                
                cout << "\nYour guess isn't right." << endl;
                attempts=attempts-1;
                cout <<"\nAttemps remaining: "<<attempts;
                cout<<"\n-------------------------------------------"<<endl;
                

                if (attempts ==0) {

                    cout << "\nYour attempts are depleted for this quiz. The correct answer was '" << word << "'\n...on to the next one" << endl;
                }
            }
        }

        if (guess == "exit") {
            break;
        }

        attempts = 3;
        deduct = 0;
    }

    cout << "\nGame summary:" << endl;
    cout << "--------------------------------" << endl;
    cout << "Your score: " << points << endl;
    cout << "High score: " << high_score << endl;
    cout << "--------------------------------" << endl;

    ofstream highScoreOut("highscore.txt");
    if (highScoreOut.is_open()) {
        highScoreOut << high_score;
        highScoreOut.close();
    }

    cout << "Thanks for playing!" << endl;
    return 0;
}
//Developed by Mike :)