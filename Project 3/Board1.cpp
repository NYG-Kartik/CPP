/*
Author: Kartik Vanjani
Course: CSCI-135
Instructor: Tong Yi
Assignment: PROJECT 3A
Description: This program is a part of the game 1024
*/

#include "Board.hpp"
#include <iostream>
#include <iomanip>
using namespace std;

Board::Board(): Board(3,3){
}

Board::Board(int m): Board(m,m){

}

Board::Board(int m, int n){
    if(m<1 || n<1){
        m = 3;
        n = 3;
    }
    numRows = m;
    numCols = n;

    panel = new int*[numRows];
    for(int row=0; row<numRows; row++){
        panel[row] = new int[numCols];
    }

    clear();
    max = 0;
    target = 32;
}

void Board:: clear(){
    for(int row = 0; row<numRows; row++){
        for(int col = 0; col<numCols; col++){
            panel[row][col] = 0;
        }
    }
}

Board::~Board(){
    for(int row=0; row<numRows; row++){
        delete[] panel[row];
        panel[row] = nullptr;
    }
    delete[] panel;
    panel = nullptr;
}

void Board::print() const{
    for(int row = 0; row < numRows; row++){
        cout << "+";
        for(int col = 0; col < numCols; col++){
            cout << "----+";
        }
        cout << endl;
        cout << "|";
        for(int col = 0; col< numCols; col++){
            if(panel[row][col] != 0){
                cout << setw(4) << panel[row][col] << "|";
            }
            else{
                cout << "    |";
            }
        }
        cout << endl;
    }
    cout << "+";
    for(int j = 0; j < numCols; j++){
        cout << "----+";
    }
    cout << endl;
}


int Board::getNumRows() const{
    return numRows;
}

int Board::getNumCols() const{
    return numCols;
}

int Board::getTarget() const{
    return target;
}

int Board::getMax() const{
    return max;
}