/*
Author: Kartik Vanjani
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 4F
Description: This program takes an input of a width and height
and prints out a trapezoid or triangle of those sizes.
*/

#include <iostream>
using namespace std;
int main(){
    int count = 0;
    int width;
    cout << "\nInput width:" << endl;
    cin >> width;
    int height;
    cout << "\nInput height:" << endl;
    cin >> height;
    int spaces = 0;
    int stars = width;
    
    for(int i=0; i<height; i++){
        spaces+=1;
        stars-=2;
    }
    if(stars+1<0){
        cout << "Impossible Shape!" << endl;
    }
    else{
        cout << "Shape: " << endl;
        for(int z=0; z<height; z++){
            for(int i=0; i<width; i++){
                if(z >= i + 1 || i >= width - z){
                    cout << " ";
                }
                else {
                    cout << "*";
                }
            }
        cout << endl;
        
        }
    
    
    } 
    return 0;

}
    