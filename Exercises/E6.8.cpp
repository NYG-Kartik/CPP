/*
Author: Kartik Vanjani
Course: CSCI-135
Instructor: Tong Yi
Assignment: E6.8
Description: This program is a function that tests if two 
arrays are equal with the elements in the same order
*/

#include <iostream>
using namespace std;

bool equals(int a[], int a_size, int b[], int b_size){
    if(a_size != b_size){
        return false;
    }
    for(int i=0; i < a_size && i < b_size; i++){
        if(a[i] != b[i]){
            return false;
        }
        }
    return true;
    }
