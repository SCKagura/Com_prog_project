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
    cout << "Choose 1 to register\n" ;
    cout << "Choose 2 to login\n " ;
    int choice ;
    cin >> choice ;
    if (choice == 1 )
    {
        cout << "Please Enter Your Username : " ;
        cin.ignore() ;
        getline (cin,username) ; 
        usernamefile ="C:\\Users\\boss\\Com_prog_project\\Usernameinfo\\"+username+".txt" ;
        ofstream saveusername ;
        saveusername.open(usernamefile) ;
        saveusername <<username;
        saveusername.close() ;
        cout << "Register SuccessFul" ;
    }
    if (choice == 2 )
    {
        cout << "Please Enter Your Username : " ;
        cin.ignore() ;
        getline (cin,username) ; 
        usernamefile ="C:\\Users\\boss\\Com_prog_project\\Usernameinfo\\"+username+".txt" ;
        ifstream pullusername ;
        pullusername.open(usernamefile) ;
        string textline ;
        if (getline(pullusername,textline))
        {
        cout <<"Login Successful !!\n " ;       
        }else
        {
            cout <<"Failed to Login\n" ;
               main() ;
        }
 
        
    }
    
    

}
