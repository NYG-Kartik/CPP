/*
Author: Kartik Vanjani
Course: CSCI-135
Instructor: Tong Yi
Assignment: E5.14
Description: This program is a function that has two int inputs and 
swaps if the first one is greater than the second one.
*/

#include <iostream>
using namespace std;
void sort2(int& a, int& b){
    if(a>b){
        int h = a;
        a = b;
        b = h;     
    }
}
int main(){
    int u = 2;
    int v = 3;
    int w = 4;
    int x = 1;
    sort2(u,v);
    sort2(w,x);
    cout << u << "," << v << endl;
    cout << w << "," << x << endl;
    return 0;
}