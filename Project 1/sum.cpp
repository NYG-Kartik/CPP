/*
Author: Kartik Vanjani
Course: CSCI-135
Instructor: Tong Yi
Assignment: Project 1A
Description: This reads a context of a txt file and adds all the elements
part of that file
*/

#include <iostream>
using namespace std;
int main(){
    int x = 0;
    int y;
    while(cin>>y){
        x = x + y;
    }
    cout << x << endl;
}