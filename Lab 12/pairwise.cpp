/*
Author: Kartik Vanjani
Course: CSCI-135
Instructor: Tong Yi
Assignment: LAB 12D
Description: This program works with vectors.
*/

#include <vector>
#include <iostream>
using namespace std;

vector<int> sumPairWise(vector<int>& v1, vector<int>& v2){
    vector<int> x;
    while(v1.size() > v2.size()) {
        v2.push_back(0);
    }

    while(v2.size() > v1.size()) {
        v1.push_back(0);
    }

    for(int i = 0 ; i < v2.size(); i++) {
        x.push_back(v1[i]+ v2[i]);
    }
    
    return x;
}
    




