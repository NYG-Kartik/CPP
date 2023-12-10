//
//Author: Kartik Vanjani
//Course: CSCI-135
//Instructor: Tong Yi
//Assignment: Quiz 13
//

#include <iostream>
#include <vector>
using namespace std;


vector<int> makeVector(int n){
    vector<int> x;
    if(n<=0){
        return x;
    }
    else{
    for(int i =n; i>=0; i--){
        x.push_back(i);
    }
    }
    return x;
    
}


