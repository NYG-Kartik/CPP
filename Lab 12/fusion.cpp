/*
Author: Kartik Vanjani
Course: CSCI-135
Instructor: Tong Yi
Assignment: LAB 12C
Description: This program works with vectors.
*/

#include <vector>
#include <iostream>
using namespace std;

void gogeta(vector<int> &goku, vector<int> &vegeta){
    for(int i =0; i<vegeta.size(); i++){
        goku.push_back(vegeta[i]);
    }
    vegeta.clear();

}