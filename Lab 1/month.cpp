/*
Author: Kartik Vanjani
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 1D
Description: This program takes an input of a month and prints out
the number of days in that month
*/

#include <iostream>
using namespace std;
int main(){
    int year;
    cout << "Enter year:" << endl;
    cin >> year;
    int month;
    cout << "Enter month:" << endl;
    cin >> month;
    if (month == 1){
        cout << "31 days" << endl;
    }
    if(month == 2){
        if((year % 4 != 0 || year % 100 == 0) && (year % 400 != 0)){
            cout << "28 days" << endl;

        }
        else{
            cout << "29 days" << endl;
        }
    }
    else if(month == 3){
        cout << "31 days" << endl;
    }
    else if(month == 4){
        cout << "30 days" << endl;
    }
    else if(month == 5){
        cout << "31 days" << endl;
    }
    else if(month == 6){
        cout << "30 days" << endl;
    }
    else if(month == 7){
        cout << "31 days" << endl;
    }
    else if(month == 8){
        cout << "31 days" << endl;
    }
    else if(month == 9){
        cout << "30 days" << endl;
    }
    else if(month == 10){
        cout << "31 days" << endl;
    }
    else if(month == 11){
        cout << "30 days" << endl;
    }
    else if(month == 12){
        cout << "31 days" << endl;
    }
    
    return 0;




}