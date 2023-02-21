#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL)); // Initialize random seed
    
    // Define an array of consonants and an array of vowels
    char consonants[] = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z'};
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    
    // Generate a random word with 5-10 letters
    int word_length = rand() % 6 + 5; // Generate a random number between 5 and 10
    string word = "";
    
    // Add random consonants and vowels to the word
    for (int i = 0; i < word_length; i++) {
        if (i % 2 == 0) {
            // Add a random consonant to the word
            int rand_index = rand() % 21; // Generate a random number between 0 and 20
            word += consonants[rand_index];
        } else {
            // Add a random vowel to the word
            int rand_index = rand() % 5; // Generate a random number between 0 and 4
            word += vowels[rand_index];
        }
    }
    
    // Print the random word                                                                                  
    cout << "Random word: " << word << endl;
    
    return 0;
}
