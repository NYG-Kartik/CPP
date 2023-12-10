/*
Author: Kartik Vanjani
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 2C
Description: This program makes an array of 20 elements and
provides the user with an interface to edit any of its contents
*/

#include <iostream>
using namespace std;
int main() {
    double myData[10];
    int x;
    int v;
    for(int i=0; i<10; i++){
        myData[i] = 1;
        cout << myData[i] << " ";
    }
    do {
        for(int i=0; i<10; i++){
            cout << "\nEnter an index:" << endl;
            cin >> x;
            cout << "Element to replace:" << endl;
            cin >> v;
            if(x>=0 && x<10){
                myData[x] = v;
                for(int i =0;i<10; i++){
                    cout << myData[i] << " ";
                    }
                    }
        }
    }while(x>=0 && x<10);
    return 0;
    }
    
    

