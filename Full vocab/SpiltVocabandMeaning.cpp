#include<iostream>
#include <fstream>
#include <string> 
using namespace std ;

int main() 
{ 
    ifstream vocab ;
    ofstream dest ;
    ofstream aaa;
    aaa.open("C:\\Users\\boss\\Com prog project\\Com_prog_project\\Com_prog_project\\Full vocab\\vocab.txt");
    vocab.open("C:\\Users\\boss\\Com prog project\\Com_prog_project\\Com_prog_project\\Full vocab\\vocabandmeaning.txt") ;
    dest.open ("C:\\Users\\boss\\Com prog project\\Com_prog_project\\Com_prog_project\\Full vocab\\meaning.txt") ;
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