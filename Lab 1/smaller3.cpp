/*
Author: Kartik Vanjani
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 1B
Description: This program takes the smallest of three numbers
and prints it.
*/
#include <iostream>
using namespace std;

int main()
{
    int number1;
    cout << "Enter the first number:";
    cin >> number1;
    int number2;
    cout << "Enter the second number:";
    cin >> number2;
    int number3;
    cout << "Enter the third number:";
    cin >> number3;
    if (number1<number2 && number1<number3){
        cout << "The smallest of the three numbers is" << number1 << endl;
    
    }
    else if (number2<number1 && number2<number3){
        cout << "The smallest of the three numbers is" << number2 << endl;
    }
    else{
        cout << "The smallest of the three numbers is" << number3;
    }
    return 0;



}