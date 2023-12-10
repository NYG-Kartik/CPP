/*
Author: Kartik Vanjani
Course: CSCI-135
Instructor: Tong Yi
Assignment: E4.8
Description: This program takes an input of a word and prints
one character of it per line
*/

#include <iostream>
using namespace std;
#include <string>

int main(){
    string word;
    cout << "Enter a word:";
    cin >> word;
    for(int i=0; i<word.length(); i++){
        cout << word.at(i) << endl;
    }
    }