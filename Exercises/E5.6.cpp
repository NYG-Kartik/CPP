/*
Author: Kartik Vanjani
Course: CSCI-135
Instructor: Tong Yi
Assignment: E5.6
Description: This program is a function that has a string as an argument
and prints the middle part of the string.
*/

#include <iostream>
#include <string>
using namespace std;

string middle(string str){
    string z;
    int x = str.length();
    int y = x/2;
    if(x%2==0){
        string z = str.substr(y-1,2);
        cout << z;
    }
    else{
        string z = str.substr(y,1);
        cout << z;
    }
    return z;
}
int main(){
    string str = "middle";
    middle(str);
    return 0;
}