/*
Author: Kartik Vanjani
Course: CSCI-135
Instructor: Tong Yi
Assignment: LAB 11C
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
    bool following[MAX_USERS][MAX_USERS];
    int findID(string usrn);
public:
    Network();
    bool addUser(string usrn, string dspn);   
    bool follow(string usrn1, string usrn2);
    void printDot();
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
bool Network::follow(string usrn1, string usrn2){
    int id1 = findID(usrn1);
    int id2 = findID(usrn2);
    if(id1!= -1 && id2!= -1){
        following[id1][id2] = true;
        return true;
    }
    else{
        return false;
    }
}

void Network::printDot(){
    cout << "digraph {" << endl;
    for (int i = 0; i < numUsers; i++) {
        cout << " " << "\"@" << profiles[i].getUsername() << "\"" << endl;
    }
     for (int i = 0; i < numUsers; i++) {
        for (int g = 0; g < numUsers; g++) {
            if (following[i][g]) {
                cout << " " << "\"@" << profiles[i].getUsername() << "\" -> \"@" << profiles[g].getUsername() << "\"" << endl;
            }
        }
    }

    cout << "}" << endl;



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
    // add three users
    nw.addUser("mario", "Mario");
    nw.addUser("luigi", "Luigi");
    nw.addUser("yoshi", "Yoshi");

    // make them follow each other
    nw.follow("mario", "luigi");
    nw.follow("mario", "yoshi");
    nw.follow("luigi", "mario");
    nw.follow("luigi", "yoshi");
    nw.follow("yoshi", "mario");
    nw.follow("yoshi", "luigi");

    // add a user who does not follow others
    nw.addUser("wario", "Wario");
    
    // add clone users who follow @mario
    for(int i = 2; i < 6; i++) {
        string usrn = "mario" + to_string(i);
        string dspn = "Mario " + to_string(i);
        nw.addUser(usrn, dspn);
        nw.follow(usrn, "mario");
    }
    // additionally, make @mario2 follow @luigi
    nw.follow("mario2", "luigi");

    nw.printDot();
}