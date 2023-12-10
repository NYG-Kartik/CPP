//
//Author: Kartik Vanjani
//Course: CSCI-135
//Instructor: Tong Yi
//Assignment: Quiz 8
//

#include <iostream>
#include <string>
using namespace std;

int unbalanced_brackets(string input){
    int x = 0;
    int y = input.length();
    for(int i=0; i<y; i++){
        if(input[i] == '{'){
            x+=1;
        }
        else if(input[i] == '}'){
            x-=1;
        }
    }
    return x;
}

int main(){
    cout << unbalanced_brackets("{}}}}") << endl;
    return 0;
}