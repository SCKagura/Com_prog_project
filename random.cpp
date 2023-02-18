#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

string randomWord(){
    string wordlist[] = {"aaa","bbb","cc","sdadad"};
    int size = sizeof(wordlist)/sizeof(wordlist[0]);
    return wordlist[rand()%size];
}

int main() {
    srand(time(0));
    cout << "Word: " << randomWord() << endl;
    return 0;
}
