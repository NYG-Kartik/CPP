/*
Author: Kartik Vanjani
Course: CSCI-135
Instructor: Tong Yi
Assignment: E3.5
Description: This program takes an input of 3 ints and prints whether
they are increasing or decreasing, or neither
*/

#include <iostream>
using namespace std;
int main(){
    int x;
    int y;
    int z;
    cout << "Enter the first number:" << endl;
    cout << "Enter the second number:" << endl;
    cout << "Enter the third number:" << endl;
    cin >> x;
    cin >> y;
    cin >> z;
    if(y>x && z>y){
        cout << "These are increasing" << endl;
    }
    else if(x>y && y>z){
        cout << "These are decreasing" << endl;
    }
    else{
        cout << "Neither";
    }
    return 0;
}