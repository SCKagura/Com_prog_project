#include <string>
#include <iostreaam>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <array>
#include <fstream>

void print_vector(vector<int, 251>vector){
    for(int i = 0; i<vector.size; i++){
        cout << vector[i] << "\t";
    }
    cout << "\n";
}

void print_vector(vector<int> vector)
{
    vector<int, 251> guesses;
    int count = 0;

    int random = rand() %251;
    cout << random << endl;
    cout << "Guess a number: ";
    while(true)
    {
        int guess;
        cin >> guess;
        count++;

        guesses.push_back(guess);

        if(guess == random)
        {
            cout << "You win!\n";
            break;
        } else if (guess < random)
        {
            cout << "Too low\n";
        } else 
        {
            cout << "Too high\n";
        }
    }

    ifstream input("best_score.txt"); 
    if(!input.is_open()){
        cout << "Unable to read file\n";
        return;
    } 

    int best_score;
    input >> best_score;

    ofstream output("best_score.txt");
    if(!output.is_open()){
        cout << "Unable to read file\n";
        return;
    } 

    if(count < best_score){
        output << count;
    }else{
        output << best_score;
    }

    print_vector(guesses, count);
}

int main()
{

}
