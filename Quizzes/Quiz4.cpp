//
//Author: Kartik Vanjani
//Course: CSCI-135
//Instructor: Tong Yi
//Assignment: Quiz 4
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    ifstream fin("data.txt");
    string junk;
    getline(fin,junk);
    string data;
    string code;
    cout << junk <<endl;
    while(fin>>data>>code){
        cout << data << " " << code;
        cout << endl;
    }
    fin.close();

    return 0;
}