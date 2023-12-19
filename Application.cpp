#pragma once
#include <iostream>
#include "UserCollector.cpp"
#include "User.cpp"
using namespace std;

class Application{
private:
    UserCollector uc;
    User us;
    int choice;
public:
    void run(){
        do{
            userMenu();
            choice = getCommand();
            switch(choice){
                case 1 : 
                    us.input();
                    uc.addUser(us);
                    break;
                case 2 :
                    uc.viewUser();
                    break;
                case 3 : 
                    cout << "Update user";
                    break;
                case 4 : 
                    cout << "Delete user";
                    break;
                case 5 : 
                    cout << "Search user";
                    break;
                case 6 : 
                    cout << "Save user to file";
                    break;
                case 7 : 
                    cout << "Load user from file";
                    break;
                case 8 : 
                    exit(1);
                    break;
            }
        }while(choice != 8);
    }
    void userMenu(){
        cout << "1, Add new user." << endl;
        cout << "2, View user." << endl;
        cout << "3, Update user." << endl;
        cout << "4, Delete user." << endl;
        cout << "5, Search user." << endl;
        cout << "6, Save user to file." << endl;
        cout << "7, Load user from file." << endl;
        cout << "8, Exit." << endl;
    }
    int getCommand(){
        int choice;
        cout << "Enter your choice : ";
        cin >> choice;
        while(!isLegal(choice)){
            cout << "Invalid choice please enter again : " << endl;
            userMenu();
            cin >> choice;
        }
        return choice;
    }
    bool isLegal (int c){
        return ((c==1) || (c==2) || (c==3) || (c==4) || (c==5) || (c==6) || (c==7) || (c==8));
    }

};