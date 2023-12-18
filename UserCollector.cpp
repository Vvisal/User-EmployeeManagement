#pragma once
#include <iostream>
#include <vector>
#include "User.cpp"
using namespace std;

class UserCollector{
private :
    User *users[100];
    int count = 0;
public :
    void addUser(User &user){
       users[count] = &user;
       count++;
    }
    void viewUser(){
        for(int i=0; i<count;i++){
            users[i]->output();
            cout << endl;
        }
    }
};