/*
Author: Kartik Vanjani
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 4C
Description: This program takes an input of a size and prints 
a cross of that size.
*/

#include <iostream>
using namespace std;
int main(){
    int size;
    cout << "\nEnter size: ";
    cin >> size;
    cout << "Shape:" << endl;
    for(int row =1; row <=size; row++){
        for(int col=1; col <= size; col++){
            if(row == col || col == (size+1)-row){
                cout << "*";
            }
            else{
                cout << " ";
            }

}
    cout << endl; 
    }
    return 0;



}