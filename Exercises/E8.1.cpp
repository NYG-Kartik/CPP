/*
Author: Kartik Vanjani
Course: CSCI-135
Instructor: Tong Yi
Assignment: E8.1
Description: This program is a function that has a string as an argument
and prints the middle part of the string.
*/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main(){
    ofstream out_file;
    out_file.open("hello.txt");
    out_file << "Hello, World!";
    out_file.close();
    ifstream fin("hello.txt");
    string x;
    getline(fin,x);
    cout << x << endl;
    fin.close();
}