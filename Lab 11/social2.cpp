/*
Author: Kartik Vanjani
Course: CSCI-135
Instructor: Tong Yi
Assignment: LAB 11B
Description: This program works with classes and constructors with a profile case
*/

#include <iostream>
using namespace std;
#include <string>
#include <cctype>

class Profile {
private:
    string username;
    string displayname;

public:
    // Profile constructor for a user (initializing 
    // private variables username=usrn, displayname=dspn)
    Profile(string usrn, string dspn);
    // Default Profile constructor (username="", displayname="")
    Profile();
    // Return username
    string getUsername();
    // Return name in the format: "displayname (@username)"
    string getFullName();
    // Change display name
    void setDisplayName(string dspn);
};

class Network {
private:
    static const int MAX_USERS = 20;
    int numUsers;
    Profile profiles[MAX_USERS];
    int findID(string usrn);
public:
    Network();
    bool addUser(string usrn, string dspn);   
};

Network::Network(){
    numUsers = 0;
}

int Network::findID(string usrn){
    for(int i =0; i < numUsers; i++){
        if(profiles[i].getUsername() == usrn){
            return i;
        }
    }
    return -1;
}


bool Network::addUser(string usrn, string dspn){
    for(int i =0; i < usrn.length(); i++){
        if(!isdigit(usrn[i]) && !isalpha(usrn[i])){
            return false;
        }
    }
    if(numUsers>MAX_USERS){
        return false;
    }
    if(numUsers<MAX_USERS && findID(usrn) == -1){
        Profile o(usrn,dspn);
        profiles[numUsers] = o;
        numUsers+=1;
        return true;

    }
    else{
        return false;
    }
}

Profile::Profile(){
    username = "";
    displayname = "";
}

Profile::Profile(string usrn, string dspn){
    username = usrn;
    displayname = dspn;
}


string Profile::getUsername(){
    return username;
}
string Profile::getFullName(){
    string x = " (@" + username + ")";
    string y = displayname + x;
    return y;

}
void Profile::setDisplayName(string dspn){
    displayname = dspn;

}

int main() {
  Network nw;
  cout << nw.addUser("mario", "Mario") << endl;     // true (1)
  cout << nw.addUser("luigi", "Luigi") << endl;     // true (1)

  cout << nw.addUser("mario", "Mario2") << endl;    // false (0)
  cout << nw.addUser("mario 2", "Mario2") << endl;  // false (0)
  cout << nw.addUser("mario-2", "Mario2") << endl;  // false (0)

  for(int i = 2; i < 20; i++)
      cout << nw.addUser("mario" + to_string(i), 
                 "Mario" + to_string(i)) << endl;   // true (1)

  cout << nw.addUser("yoshi", "Yoshi") << endl;     // false (0)
}