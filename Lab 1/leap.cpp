/*
Author: Kartik Vanjani
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 1C
Description: This program takes an input of a year and returns if it is a 
leap year or not.
*/
#include <iostream>
using namespace std;

int main(){
    int x;
    cout << "Input a year:" << endl;
    cin >> x;
    if(x % 4 != 0){
        cout << x << "is a common year." << endl;
    }
    else if(x % 100 != 0){
        cout << x << "is a leap year" << endl;
    }
    else if(x % 400 != 0){
        cout << x << "is a common year" << endl;
    }
    else {
        cout << x << "is a leap year";
    }
    return 0;

}
