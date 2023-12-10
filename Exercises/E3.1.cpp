/*
Author: Kartik Vanjani
Course: CSCI-135
Instructor: Tong Yi
Assignment: E3.1
Description: This program takes an input of an int and
prints whether it is negative, zero, or positive
*/
#include <iostream>
using namespace std;
int main(){
    int x;
    cout << "Enter a number:" << endl;
    cin >> x;
    if(x>0){
        cout << x << " is positive." << endl;
    }
    else if(x<0){
        cout << x << " is negative." << endl;
    }
    else if(x == 0){
        cout << x << " is zero." << endl;
    }
    else{
        cout << "Invalid input" << endl;
    }
    return 0;
}