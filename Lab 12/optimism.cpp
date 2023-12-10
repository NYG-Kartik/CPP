/*
Author: Kartik Vanjani
Course: CSCI-135
Instructor: Tong Yi
Assignment: LAB 12B
Description: This program works with vectors.
*/

#include <vector>
#include <iostream>
using namespace std;

vector<int> goodVibes(vector<int> v){
    vector<int> x;
    for(int i=0; i<v.size(); i++){
        if(v[i]>0){
            x.push_back(v[i]);
        }
    }
    return x;
}

