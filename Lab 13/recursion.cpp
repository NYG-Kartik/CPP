/*
Author: Kartik Vanjani
Course: CSCI-135
Instructor: Tong Yi
Assignment: LAB 13D
Description: This program works with recursion
*/

#include <iostream>
#include <string>
using namespace std;

void printRange(int left, int right){
    if(right>=left){
        cout << left << " ";
        printRange(left+1, right);
    }
    else{
        cout << "";
    }
}

int sumRange(int left, int right){
    int sum = 0;
    if(right>=left){
        sum = left;
        left++;
    }
    else{
        return 0;
    }
    return sum + sumRange(left,right);

}



int sumArray(int *arr, int size){
    int sum = 0;
    if(size>0){
        sum = arr[size-1] + sumArray(arr, size-1);

    }
    return sum;

}

bool isAlphanumeric(string s){
    int x = s.size() - 1;
    if(x>0 && iswalnum(s[x])){
        return isAlphanumeric(s.substr(0,x));
    }
    else if(!iswalnum(s[x])){
        return false;

    }
    return true;

}
