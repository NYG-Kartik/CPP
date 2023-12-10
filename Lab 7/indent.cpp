/*
Author: Kartik Vanjani
Course: CSCI-135
Instructor: Tong Yi
Assignment: LAB 7B
Description: This program takes in an input of a string and outputs
the string that was original before the shifts
*/
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int countChar(string line, char c){
    int z = 0;
    for(int i=0; i<line.length(); i++){
        if(line[i] == c){
            z++;
        }
    }
    return z;
    
    }
string removeLeadingSpaces(string line){
    int i = 0;
    while(isspace(line[i])){
        i++;
    }
    return line.substr(i);
}
int main(){
    string x;
    char c;
    int count = 0;

    while(getline(cin, x)) {
        x = removeLeadingSpaces(x);

        if(x[0] == '}') {
            for(int i = 0; i < count - 1; i++) {
                cout << "\t"; 
            }
            cout << x << endl;
        } 
        else {
            for(int i = 0; i < count; i++) {
                cout << "\t";
            }
            cout << x << endl;

        }

        count = count - countChar(x, '}');
        count = count + countChar(x, '{');
    }

    return 0;
}


