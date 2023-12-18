#pragma once
#include <iostream>
#include <sstream>

using namespace std;

class User{
private :
    string username;
    string password;
public :
    User(){
        username = "Unknown";
        password = "Unknown";
    }
    User(string username, string password){
        this->username = username;
        this->password = password;
    }
    void setUsername(const string username){
        this->username = username;
    }
    string getUsername() const{
        return username;
    }
    void setPassword(const string password){
        this->password = password;
    }
    string getPassword() const{
        return password;
    }
    void input(){
        cout << "Enter username : ";
        cin >> username;
        
        cout << "Enter password : ";
        cin >> password;
        
    }
    void output(){
        cout <<"Username : " << getUsername() << "\t\t" << "Password : "<< getPassword() << endl;
    }
    /*
    string toString(){
        stringstream ss;
        ss<<"Username : " << getUsername() << "\t\t" << "Password : "<< getPassword() << endl;
        return ss.str();
    }
    */
};