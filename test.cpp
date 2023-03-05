#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <random>
#include <cstdlib>
#include <fstream> 

using namespace std;

int main()
{
    string username ; 
    cin >> username ;
    ofstream usernamefile ;
    usernamefile.open("C:\\Users\\boss\\Com_prog_project\\Usernameinfo\\"+username+".txt") ;
    usernamefile <<username ;
    usernamefile.close() ;
    return 0 ;
}
