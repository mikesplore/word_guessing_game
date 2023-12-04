**Word Guessing Game Documentation**
**Overview**
The Word Guessing Game is a console-based game where players attempt to guess a word based on given hints and constraints. 
Players receive points for correct guesses, with deductions for using hints. 
The game continues until the player exits or exhausts their attempts.

**Game Flow**
**Initialization:**

The game loads a list of words from the *"words.txt"* file.
It also retrieves the high score from *"highscore.txt.*"
*Rules Display:*

The game displays rules detailing the scoring system, available hints, and the number of attempts.
**Game Loop:**

For each round:
Randomly selects a word from the loaded list.
Displays the length of the word and hints about its starting and ending characters.
Allows the player three attempts to guess the word or use hints.
Provides hints upon request with corresponding point deductions.
Tracks remaining attempts and updates the deduction points accordingly.
**Scoring:**

Awards points for correct guesses, considering deductions for hints used.
Updates and displays the player's total score.
Notifies the player if they set a new high score.
**Exit:**

Allows the player to exit the game at any time by typing "exit."
Displays the game summary, including the player's score and the high score.
Updates the high score in the "highscore.txt" file if a new high score is achieved.
**Functions**
displayHints(targetWord, guessedWord):

Displays matching characters between the target word and the player's guessed word.
displayFirstAndLastTwo(word):

Shows the first and last two characters of a word.
displayFirstFour(word):

Displays the first four characters of a word.
displayLastFour(word):

Displays the last four characters of a word.
displayAllButLast(word):

Shows all characters of a word except the last one.
checkDeduct(deduct, word):

Checks if the deduction per quiz exceeds 5 points and reveals the answer if the deductions are exhausted.
rules():

Displays the game rules and instructions at the start of the game.
Files Used
words.txt:

Contains a list of words used for guessing.
highscore.txt:

Stores the highest score achieved in previous game sessions.
**Developer Information**
Developed by "Mike."
**Conclusion**
The Word Guessing Game provides an engaging and interactive experience, challenging players to deduce words based on hints while managing their points.
Players can aim to break their previous high scores in successive game sessions.