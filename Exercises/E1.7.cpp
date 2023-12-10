/*
Author: Kartik Vanjani
Course: CSCI-135
Instructor: Tong Yi
Assignment: E1.7
Description: This program takes an input of 3 strings and prints out
that string in 3 lines.
*/

#include <iostream>
using namespace std;
#include <string>

int main(){
    string x;
    string y;
    string z;
    cout << "Enter your first entity:" << endl;
    cout << "Enter your second entity:" << endl;
    cout << "Enter your third entity:" << endl;
    cin >> x;
    cin >> y;
    cin >> z;
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
    return 0;

}
