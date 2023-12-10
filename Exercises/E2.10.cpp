/*
Author: Kartik Vanjani
Course: CSCI-135
Instructor: Tong Yi
Assignment: E2.10
Description: This program asks the user input for the number of gallons
in the tank, fuel efficiency, and the price per gallon, and 
outputs the price and how far the car will go.
*/

#include <iostream>
using namespace std;
int main(){
    int x;
    cout << "Enter the number of gallaons of gas in the tank:";
    cin >> x;
    double y;
    cout << "Enter the fuel efficiency in miles per gallon:";
    cin >> y;
    double z;
    cout << "Enter the price of gas per gallon:";
    cin >> z;
    cout << "The cost per 100 miles is:" << (100/y)*z << endl;
    double d = y * x;
    cout << d << "kilometers" << endl;
    return 0;

}