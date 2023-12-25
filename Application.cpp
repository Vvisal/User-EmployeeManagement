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
    string username;
    string password;
public:
    void runUser(){
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
                    cout << "Update user" << endl;
                    choice = getCommandUpdateUser();
                    switch (choice){
                        case 1 : 
                            cout << "Enter username : ";
                            cin >> username;
                            uc.updateUsername(username);
                            break;
                        case 2 : 
                            cout << "Enter username : ";
                            cin >> username;
                            uc.updatePassword(username);
                            break;
                        default : 
                            cout << "Invalid choice." << endl;
                            break;
                    }
                    break;
                case 4 : 
                    cout << "Delete user" << endl;
                    cout << "===========================" << endl;
                    cout << "Enter username to search : ";
                    cin >> username;
                    uc.deleteUser(username);
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
                    cout << "Invalid choice.";
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
    int getCommandUpdateUser(){
        int choice;
        cout << "1, Update username." << endl;
        cout << "2, Update password." << endl;
        cout << "Enter your choice : " ;
        cin >> choice;
        return choice;
    }
    bool isLegal (int c){
        return ((c==1) || (c==2) || (c==3) || (c==4) || (c==5) || (c==6) || (c==7) || (c==8));
    }
    void employeeMenu(){
        cout << "1, Add new employee." << endl;
        cout << "2, View all employee." << endl;
        cout << "3, Update employee." << endl;
        cout << "4, Delete employee." << endl;
        cout << "5, Search employee." << endl;
        cout << "6, Sort employee." << endl;
        cout << "7, Save data to file." << endl;
        cout << "8, Load data from file." << endl;
        cout << "9, Exit." << endl;
    }
    int getCommandEmployee(){

    }
    

};