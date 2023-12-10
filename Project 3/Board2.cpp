/*
Author: Kartik Vanjani
Course: CSCI-135
Instructor: Tong Yi
Assignment: PROJECT 3B
Description: This program is a part of the game 1024
*/

#include "Board.hpp"
#include <vector>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <iomanip>
using namespace std;




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


struct RowCol{
    int row;
    int col;
};

void Board::selectRandomCell(int& row, int& col){
    vector<RowCol> zeros;
    RowCol cell;
    for(int i =0; i<numRows; i++){
        for(int j =0; j<numCols; j++){
            if(panel[i][j]==0){
                cell.row = i;
                cell.col = j;
                zeros.push_back(cell);

            }
        }
    }
    if(zeros.size()>0){
        int index = rand() % zeros.size();
        row = zeros[index].row;
        col = zeros[index].col;
        panel[row][col] = 1;
        print();
    }
    if(zeros.size() == 0 || zeros.size() == 1){
        if(noAdjacentSameValue()){
            if(max<target){
                cout << "Game over. Try again." << endl;
            }
        else{
            cout << "Congratulations" << endl;
        }
        exit(0);
        }
    }

}


bool Board:: noAdjacentSameValue() const{
    for(int i =0; i<numRows; i++){
        for(int j =0; j<numCols-1; j++){
            if(panel[i][j]==panel[i][j+1]){
                return false;
            }
        }
    }
    for(int j =0; j<numCols; j++){
        for(int i =0; i<numRows-1; i++){
            if(panel[i][j] == panel[i+1][j]){
                return false;
            }
        }
    }
    return true;
}



