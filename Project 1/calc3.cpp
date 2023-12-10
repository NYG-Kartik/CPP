/*
Author: Kartik Vanjani
Course: CSCI-135
Instructor: Tong Yi
Assignment: Project 1D
Description: This reads a context of a txt file and acts as a calculator
for all the elements part of that file.
*/

#include <iostream>
using namespace std;

int main(){
    int sum = 0;
    char ch = '+';
    int operand;
    while(cin>>operand){
        if(cin.peek()=='^'){
            cin.ignore();
            operand = operand * operand;
        }
        if(ch == ';'){
            cout << sum << endl;
            sum = operand;
            ch = '+';
        }
        else if(ch =='+'){
            sum+=operand;
        }
        else if(ch =='-'){
            sum-=operand;
        }
        cin >> ch;
        } 
    cout << sum;       
    return 0;

    
}