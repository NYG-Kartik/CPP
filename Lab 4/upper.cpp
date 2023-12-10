
/*
Author: Kartik Vanjani
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 4E
Description: This program takes an input of a size and prints 
a triangle starting with the most asteriks on top.
*/

#include <iostream>
using namespace std;
int main(){
    int size;
    cout << "\nInput side length:";
    cin >> size;
    int count = 0;
    cout << "Shape: " << endl;
    for(int i=size; i>=0; i--){
        for(int z=0; z<i; z++){
            cout << "*";
        }
        cout << endl;
        count +=1;
        for(int h=0;h<count;h++){
            cout << " ";
        }
    }
    return 0;
}
    
    
    
