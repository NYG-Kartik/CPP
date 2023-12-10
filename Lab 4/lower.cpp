/*
Author: Kartik Vanjani
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 4D
Description: This program takes an input of a size and prints 
a triangle starting with one on top.
*/

#include <iostream>
using namespace std;
int main(){
    int size;
    cout << "\nInput side length:";
    cin >> size;
    cout << "Shape: " << endl;
    for(int i=0; i<=size; i++){
        for(int z=0; z<i; z++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}