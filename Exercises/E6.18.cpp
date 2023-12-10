/*
Author: Kartik Vanjani
Course: CSCI-135
Instructor: Tong Yi
Assignment: E6.18
Description: This program is a vector
*/

#include <iostream> 
#include <string>
#include <vector>
using namespace std;


vector<int> append(vector<int> a, vector<int> b){
    vector<int> g;
    for(int i =0; i<a.size(); i++){
        g.push_back(a[i]);
    }
    for(int i =0; i<b.size(); i++){
        g.push_back(b[i]);
    }

    return g;
}