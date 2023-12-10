/*
Author: Kartik Vanjani
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 2D
Description: This program is a representation of the fib sequence.
*/

#include <iostream>
using namespace std;
int main(){
    int fib[60];
    fib[0] = 0;
    fib[1] = 1;
    cout << fib[0] << endl;
    cout << fib[1] << endl;
    for(int i = 2; i<60; i++){
        fib[i] = fib[i-2] + fib[i-1];
        cout << fib[i] << endl;
    }
    return 0;
}