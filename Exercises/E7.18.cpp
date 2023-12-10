/*
Author: Kartik Vanjani
Course: CSCI-135
Instructor: Tong Yi
Assignment: E7.18
Description: This program is a function that computes the perimeter of a triangle
*/

#include <iostream>
#include <cmath>
using namespace std;

struct Point{
    double x;
    double y;
};

struct Triangle{
    Point a;
    Point b;
    Point c;
};

double perimeter(Triangle g){
    return sqrt(pow(g.a.x - g.b.x, 2)+ pow(g.a.y - g.b.y,2)) + sqrt(pow(g.a.x - g.c.x, 2) + pow(g.a.y - g.c.y,2)) + sqrt(pow(g.b.x - g.c.x, 2)+ pow(g.b.y - g.c.y,2));
}