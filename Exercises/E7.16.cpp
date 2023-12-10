/*
Author: Kartik Vanjani
Course: CSCI-135
Instructor: Tong Yi
Assignment: E7.16
Description: This program is a function that computes the distance from a to b
*/

#include <iostream>
#include <cmath>
using namespace std;

class Point{
public:
    double x;
    double y;
};


double distance(Point a, Point b){
    return sqrt(pow(a.x - b.x, 2)+ pow(a.y - b.y,2));
}
