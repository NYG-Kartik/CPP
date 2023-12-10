/*
Author: Kartik Vanjani
Course: CSCI-135
Instructor: Tong Yi
Assignment: LAB 6A
Description: This program takes in an input of a string and outputs
the ascii value of each character
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    string c;
    cout << "Input: ";
    getline(cin,c);
    int z = c.size();
    for(int i=0; i<z; i++){
        cout << c[i] << " " << (int)c[i] << endl;
    }
    return 0;
}