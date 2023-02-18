#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <random>
#include <cstdlib>

using namespace std;

int main()
{
    ifstream input_file("meaning.txt"); // Open the file for reading

    vector<string> words; // Create a vector to hold the words

    if (input_file.is_open()) // Check if the file was opened successfully
    {
        string word;

        while (input_file >> word) // Read the file word by word
        {
            words.push_back(word); // Add each word to the vector
        }

        input_file.close(); // Close the file
    }
    else
    {
        cerr << "Error opening file" << endl;
        return 1;
    }

    // Use a random device to generate a seed for the random number generator
    random_device rd;
    // Use the seed to create a Mersenne Twister random number generator
    mt19937 gen(rd());
    // Create a uniform distribution to generate integers in the range [0, words.size() - 1]
    uniform_int_distribution<> dis(0, words.size() - 1);
    // Use the distribution to generate a random index into the words vector
    int random_index = dis(gen);

    // Print the random word
    cout << "Random word: " << words[rand()%random_index] << endl;

    return 0;
}
