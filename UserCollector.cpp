#pragma once
#include <iostream>
#include <vector>
#include "User.cpp"
using namespace std;

class UserCollector{
private :
    vector <User> users;
public :
    void addUser(User u){
        users.push_back(u);
    }
    void viewUser(){
        for(auto iter=users.begin();iter!=users.end();iter++){
            cout<<iter->ToString()<<endl;
        }
    }
};