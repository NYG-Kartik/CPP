/*
Author: Kartik Vanjani
Course: CSCI-135
Instructor: Tong Yi
Assignment: LAB 9
Description: This program user pointers to get distance
*/

#include <iostream>
using namespace std;
#include <cmath>

class Coord3D {
public:
    double x;
    double y;
    double z;
};

double length(Coord3D *p){
    double x = p->x;
    double y = p->y;
    double z = p->z;
    double val = ((x*x)+(y*y)+(z*z));
    return sqrt(val);
}
Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2){
    if(length(p1)>length(p2)){
        return p1;
    }
    return p2;
}

void move(Coord3D *ppos, Coord3D *pvel, double dt){
    ppos->x = ppos->x+pvel->x * dt;
    ppos->y = ppos->y+pvel->y * dt;
    ppos->z = ppos->z+pvel->z * dt;
}
Coord3D* createCoord3D(double x, double y, double z){
    Coord3D* coord = new Coord3D;

    coord->x = x;
    coord->y = y;
    coord->z = z;
    return coord;
}
void deleteCoord3D(Coord3D *p){
    delete p;
}

int main() {
    Coord3D pos = {0, 0, 100.0};
    Coord3D vel = {1, -5, 0.2};

    move(&pos, &vel, 2.0); // object pos gets changed
    cout << pos.x << " " << pos.y << " " << pos.z << endl;
    // prints: 2 -10 100.4
}
