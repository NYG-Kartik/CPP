/*
Author: Kartik Vanjani
Course: CSCI-135
Instructor: Tong Yi
Assignment: E7.1
Description: This program is a function that is the pointer
version of sort2
*/

#include <iostream>
using namespace std;

void sort2(double* p, double* q){
    if(*p < *q){
        return;
    }
    else {
        *p = *p + *q;
        *q = *p - *q;
        *p = *p - *q;
    }
    return;

}