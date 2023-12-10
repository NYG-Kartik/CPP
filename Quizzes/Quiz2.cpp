/*
Author: Kartik Vanjani
Course: CSCI-135
Instructor: Tong Yi
Assignment: Quiz 2
*/

#include <iostream>
using namespace std;
int main(){
    int x;
    cout << "Enter a number:" << endl;
    cin >> x;
    int y;
    cout << "Enter a number:" << endl;
    cin >> y;
    if(x>y){
        cout << x << "is the greater number" << endl;
    }
    else{
        cout << y << "is the greater number" << endl;
    }
    return 0;
}