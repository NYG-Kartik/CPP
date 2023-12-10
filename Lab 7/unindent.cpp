/*
Author: Kartik Vanjani
Course: CSCI-135
Instructor: Tong Yi
Assignment: LAB 7A
Description: This program takes in an input of a string and outputs
the string without spaces
*/
#include <iostream>
#include <string>
using namespace std;

string removeLeadingSpaces(string line){
    int i = 0;
    while(isspace(line[i])){
        i++;
    }
    return line.substr(i);


}
int main(){
    string x;
    while(getline(cin,x)){
        cout << removeLeadingSpaces(x) << endl;

    }
    return 0;
}