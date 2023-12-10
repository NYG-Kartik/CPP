//
//Author: Kartik Vanjani
//Course: CSCI-135
//Instructor: Tong Yi
//Assignment: Quiz 6
//

#include <iostream>
using namespace std;

int max3(int a, int b, int c){
    int max;
    if(a>b && a>c){
        int max = a;
        return max;
    }
    else if(b>a && b>c){
        int max = b;
        return max;
    }
    else{
        int max = c;
        return max;
    }
    return max;
}