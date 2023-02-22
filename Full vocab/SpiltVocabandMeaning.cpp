#include<iostream>
#include <fstream>
#include <string> 
using namespace std ;

int main() 
{ 
    ifstream vocab ;
    ofstream dest ;
    ofstream aaa;
    aaa.open("vocab.txt");
    vocab.open("vocabandmeaning.txt") ;
    dest.open ("meaning.txt") ;
    string textline ;
    int i = 1;
    while (getline(vocab,textline))
    {
        if(i%2 == 0) dest << textline <<endl ;
        else aaa << textline << endl;
        i++;
        
    }
    vocab.close() ;
    dest.close() ;
    return 0;
}