/*
Author: Kartik Vanjani
Course: CSCI-135
Instructor: Tong Yi
Assignment: LAB 3D
Description: This program finds values for dates and prints them
in reverse chronological order.
*/
#include <fstream>
#include <cstdlib>
#include <climits>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail()) {
        cerr << "File cannot be opened for reading." << endl;
        exit(1); // exit if failed to open the file
    }
    string edate;
    cout << "Enter earlier date: ";
    cin >> edate;
    string ldate;
    cout << "Enter later date: ";
    cin >> ldate;

    string junk;        // new string variable
    getline(fin, junk); // read one line from the file 
    string date;
    double eastSt;
    double eastEl;
    double westSt;
    double westEl;
    int x = 0;
    double min;
    double max;
    string dates[365];
    double west[365];
    while(fin>>date>>eastSt>>westSt>>eastEl>>westEl){
        fin.ignore(INT_MAX, '\n');
        
        return 0;

    }