/*
Author: Kartik Vanjani
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 4A
Description: This program takes an input of a length and width
and outputs a shape with those dimensions using asteriks
*/

#include <iostream>
using namespace std;
int main(){
    int height;
    int width;
    cout << "Input width: ";
    cin >> width;
    cout << "Input height: ";
    cin >> height;
    cout << "Shape:" << endl;
    for(int row =0; row <height; row++){
        for(int col=0; col < width; col++){
            if(row % 2 == 0){
                if(col %2 == 0){
                    cout << "*";
                    }
                else{
                    cout << " ";
                    }}
            else if(row %2 != 0){
                if(col %2 !=0){
                    cout << "*";
                    }
                else{
                    cout << " ";
                    }
                }    
                }
            
    
        cout << endl;
}
    return 0;
    
}