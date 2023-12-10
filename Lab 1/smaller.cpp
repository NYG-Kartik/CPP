/*
Author: Kartik Vanjani
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 1A
Description: This program takes the smallest of two numbers
and prints it.
*/
# include <iostream>
using namespace std;

int main()
{
    int number1;
    cout << "Enter the first number:";
    cin >> number1;
    int number2;
    cout << "Enter the second number:";
    cin >> number2;
    if (number1 > number2){
        cout << "The smaller of the two is" << number2 << endl;

    }
    else {
        cout << "The smaller of the two is" << number1 << endl;
    }
    return 0;



}
