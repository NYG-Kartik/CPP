/*
Author: Kartik Vanjani
Course: CSCI-135
Instructor: Tong Yi
Assignment: E9.3
Description: This program is a function that is like a circuit
*/

#include <iostream>
using namespace std;

class Rectangle{
public:
    Rectangle(double w, double h);
    double get_perimeter();
    double get_area();
    void resize(double factor);
private:
    double width = 0;
    double height  = 0;



};

Rectangle::Rectangle(double w, double h){
    width = w;
    height = h;
}

double Rectangle::get_perimeter(){
    return ((width*2)+(height*2));
}
double Rectangle::get_area(){
    return (width*height);
}
void Rectangle::resize(double factor){
    height *= factor;
    width *= factor;
}

