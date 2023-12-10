//
//Author: Kartik Vanjani
//Course: CSCI-135
//Instructor: Tong Yi
//Assignment: Quiz 7
//

#include <iostream>
using namespace std;
#include <string>

void remove_e(string& sentence){
    for(int i = 0; i < sentence.length(); i++){
        if(sentence[i] == 'e'){
            sentence.erase(i,1);
            i--;
        }
    }
}
