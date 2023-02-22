#include<iostream>
#include <fstream>
#include <string> 
using namespace std ;

int main() 
{
string username,usernamefile ;
    cout << "||      ||  ||||||||||  ||          ||            ||||||           ||  ||\n" ;
    cout << "||      ||  ||          ||          ||          ||      ||       ||  ||  ||\n" ;
    cout << "||||||||||  ||||||||||  ||          ||          ||      ||       ||      ||\n" ;
    cout << "||      ||  ||          ||          ||          ||      ||         ||  ||\n" ;
    cout << "||      ||  ||||||||||  ||||||||||  ||||||||||    ||||||             || \n" ;
    cout << "Please Enter Your Username : " ;
    getline (cin,username) ;
    cout << "Your Username is :" << username ; 
    usernamefile ="C:\\Users\\boss\\Com prog project\\Com_prog_project\\Com_prog_project\\Usernameinfo\\"+username+".txt" ;
    cout <<usernamefile ;
    ofstream saveusername ;
    saveusername.open(usernamefile) ;
    saveusername <<username;
    saveusername.close() ;

}
