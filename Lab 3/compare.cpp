/*
Author: Kartik Vanjani
Course: CSCI-135
Instructor: Tong Yi
Assignment: LAB 3C
Description: This program compares east and west in dates and
prints the maximum one for the date and where, east or 
west
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
    
    string start;
    cout << "Enter starting date: ";
    cin >> start;
    
    string end;
    cout << "Enter ending date: ";
    cin >> end;

    int x = 0;
    
    string date;
    double eastSt;
    double westSt;
    double eastEl;
    double westEl;

    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl){
        fin.ignore(INT_MAX, '\n');
        if(date == start){
            x++;
        }
        else if(date>end){
            break;
        }
        for(int i = 0;i < x;i++){
            if(eastEl<westEl){
                cout << date << " West" << endl;
        }
            else if(eastEl>westEl){
                cout << date << " East" << endl;
        }
            else{
                cout << date << " Equal" << endl;
        }
        }
        }
    fin.close();
    return 0;
}