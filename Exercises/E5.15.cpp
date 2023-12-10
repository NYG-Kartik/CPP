/*
Author: Kartik Vanjani
Course: CSCI-135
Instructor: Tong Yi
Assignment: E5.15
Description: This program is a function that has three int inputs and 
swaps to get them in least to greatest form
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
void sort3(int& a, int& b, int& c){
    sort2(a,b);
    sort2(a,c);
    sort2(b,c);
}
int main(){
    int v = 3;
    int w = 4;
    int x = 1;
    sort3(v,w,x);
    cout << v << "," << w << "," << x << endl;
    return 0;
}