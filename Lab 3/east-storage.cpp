/*
Author: Kartik Vanjani
Course: CSCI-135
Instructor: Tong Yi
Assignment: LAB 3A
Description: This program takes an input of a date and prints
the storage on that date
*/
#include <fstream>
#include <cstdlib>
#include <climits>
#include <iostream>
#include <string>
using namespace std;


int main(){
    ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail()) {
    cerr << "File cannot be opened for reading." << endl;
    exit(1); // exit if failed to open the file
    }
    string junk;        // new string variable
    getline(fin, junk); // read one line from the file 
    string date1;
    cout << "Enter date: ";
    cin >> date1;
    double x = 0.0;
    string date;
    while(fin>>date){
        if(date==date1){
            fin >> x;
            cout << "East basin storage" << x << endl;
        }
    }
    return 0;
    }