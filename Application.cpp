#pragma once
#include <iostream>
#include "UserCollector.cpp"
#include "User.cpp"
using namespace std;

class Application{
private:
    UserCollector uc;
    User us;
public:
    void run(){
        us.input();
        uc.addUser(us);
        uc.viewUser();
    }
};