/*
Author: Kartik Vanjani
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 2A
Description: This program takes an input of an int in the range
0-100 and squares it.
*/

#include <iostream>
using namespace std;
int main(){
    int x;
    cout << "Please enter an integer:" << endl;
    cin >> x;
    while(x<=0 || x>=100){
        cout << "Please re-enter:" << endl;
        cin >> x;
    }
    cout << "Number squared is " << x * x << endl;
    return 0;
}