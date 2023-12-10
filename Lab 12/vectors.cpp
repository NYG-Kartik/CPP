/*
Author: Kartik Vanjani
Course: CSCI-135
Instructor: Tong Yi
Assignment: LAB 12A
Description: This program works with vectors.
*/

#include <vector>
#include <iostream>
using namespace std;

vector<int> makeVector(int n){
    vector<int> x;
    for(int i = 0; i<n; i++){
        x.push_back(i);
    }
    return x;
}