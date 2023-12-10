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
#include <algorithm>
using namespace std;


vector<int> merge_sorted(vector<int> a, vector<int> b){
    vector<int> g;
    merge(a.begin(), a.end(), b.begin(), b.end(), back_inserter(g) );

    return g;
}

