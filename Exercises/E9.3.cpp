/*
Author: Kartik Vanjani
Course: CSCI-135
Instructor: Tong Yi
Assignment: E9.3
Description: This program is a function that is like a circuit
*/

#include <iostream>
using namespace std;

class Circuit{
public: 
    int get_first_switch_state();
    int get_second_switch_state();
    int get_lamp_state();
    void toggle_first_switch();
    void toggle_second_switch();
private:
    int first_switch = 0;
    int second_switch = 0;
    int lamp_state = 0;
    void toggle_lamp_state(){
        lamp_state = first_switch ^ second_switch;
    }
};

int Circuit::get_first_switch_state(){
    return first_switch;


}
int Circuit::get_second_switch_state(){
    return second_switch;


}

int Circuit::get_lamp_state(){
    return lamp_state;
}




void Circuit::toggle_first_switch(){
    first_switch = 1 - first_switch;
    toggle_lamp_state();



}

void Circuit::toggle_second_switch(){
    second_switch = 1 - second_switch;
    toggle_lamp_state();
}




