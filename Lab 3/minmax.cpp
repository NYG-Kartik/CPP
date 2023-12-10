/*
Author: Kartik Vanjani
Course: CSCI-135
Instructor: Tong Yi
Assignment: LAB 3B
Description: This program takes finds the minimum and maximum
in the East basin in 2018
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
    string date;
    double east;
    double min;
    double max;
    fin >> date;
    fin >> min;
    getline(fin,junk);
    while(fin>>date){
        fin >> east;
        if(east<min){
            min = east;
        }
        if(east>max){
            max = east;
        }
        getline(fin,junk);
    }
    cout << "Minimum is" << min << endl;
    cout << "Maximum is" << max;
    fin.close();
    return 0;
    







}