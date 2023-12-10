/*
Author: Kartik Vanjani
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 2B
Description: This program takes an input of an int range and 
prints every number in that range.
*/

#include <iostream>
using namespace std;
int main(){
    int L;
    cout << "Please enter L:" << endl;
    cin >> L;
    int U;
    cout << "Please enter U:" << endl;
    cin >> U;
    for(int i=L; i<U; i++){
        cout << i << " ";
    }
    return 0;
}