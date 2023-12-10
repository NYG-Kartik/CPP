//
//Author: Kartik Vanjani
//Course: CSCI-135
//Instructor: Tong Yi
//Assignment: Quiz 11
//

#include <iostream>
using namespace std;


class Money{
public:
    int dollars;
    int cents;
};

Money withdraw_money(Money x, Money y){
    int c;
    int d; 



    int q = x.dollars;
    int h = y.dollars;

    int z = x.cents;
    int w = y.cents;

    int total1 = (q*100) + z;
    int total2 = (h*100) + w;

    int diff = total1-total2;

    if(diff <= 0){
        d = 0;
        c = 0;}
    else{
        d = diff/100;
        c = diff % 100;

    }

    Money o = {d, c};
    return o;
}


