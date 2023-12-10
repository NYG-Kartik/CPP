
/*
Author: Kartik Vanjani
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 4G
Description: This program takes an input of a width and height
and prints out a 3x3 checkerboard for that width and height
*/

#include <iostream>
using namespace std;
int main(){
    int width;
    cout << "\nEnter width: " << endl;
    cin >> width;
    int height;
    cout << "\nEnter height: " << endl;
    cin >> height;
    for(int z=0; z<height; z++){
        for(int i=0; i<width; i++){
            if((i % 6 == 2 || i % 6 == 1 || i % 6 == 0) && (z % 6 == 5 || z % 6 == 4 || z % 6 == 3)) {
                cout << " ";
            }
            else if((z % 6 == 2 || z % 6 == 1 || z % 6 == 0) && (i % 6 == 5 || i % 6 == 4 || i % 6 == 3)) { 
                cout << " ";
            }
            else {
                cout << "*"; 
            }
        }

        cout << endl;
}

return 0;
}