#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include "User.cpp"
using namespace std;

class UserCollector{
private :
    vector <User> users;
    string username;
public :
    void addUser(User u){
        users.push_back(u);
    };
    void viewUser(){
        for(auto iter=users.begin();iter!=users.end();iter++){
            cout<<iter->ToString();
        }
    }
    bool updateUsername(string name){
        string newUsername;
        int index = searchUser(name);
        if(index!=-1){
            cout << "Enter new username : ";
            cin >> newUsername;
            users[index].setUsername(newUsername);
            cout << "Username updated." << endl;
            return true;
        }else{
            return false;
        }
    }
    bool updatePassword(string name){
        string newPassword;
        int index = searchUser(name);
        if(index!=-1){
            cout << "Enter new password : ";
            cin >> newPassword;
            users[index].setPassword(newPassword);
            cout << "Password updated." << endl;
            return true;
        }else {
            cout << "Invalid user.";
            return false;
        }

    }
    bool deleteUser(string name){
        vector<User>::iterator it;
            for(it=users.begin();it!=users.end();it++){
                if((it)->getUsername().compare(name)==0){
                users.erase(it);
                cout << "Deleted user" << endl;
                break;
            }
        }
    }
    int getCommandUpdateUser(){
        int choice;
        cout << "1, Update username." << endl;
        cout << "2, Update password." << endl;
        cout << "Enter your choice : " ;
        cin >> choice;
        return choice;
    }
    int searchUser(string name){
        for(int i=0; i<users.size(); i++){
            if(users[i].getUsername()==name){
                return i;
            }
        }
        return -1;
    }
    
};