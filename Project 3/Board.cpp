/*
Author: Kartik Vanjani
Course: CSCI-135
Instructor: Tong Yi
Assignment: PROJECT 3D
Description: This program is the game 1024
*/

#include "Board.hpp"
#include <vector>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <iomanip>
using namespace std;

struct RowCol{
    int row;
    int col;

};

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


void merge(vector<int>& result, int& max) {
    int i = 0;
    int size = result.size();
    while(i<size){
        if(i+1<size && result[i+1] == result[i]){
            result[i] *=2;
            if(max<result[i]){
                max = result[i];
            
            }
            result[i+1] = 0;
            i+=2;
        }
        else{
            i++;
        }
    }
}



void Board::pressUp(){
    for(int col = 0; col<numCols; col++){
        vector<int> nonZeros;

        for(int r = 0; r<numRows; r++){
            if(panel[r][col]!=0)
                nonZeros.push_back(panel[r][col]);
            }
        merge(nonZeros, max);
        int row = 0;

        for(int i =0; i<nonZeros.size(); i++)
            if(nonZeros[i]!=0){
                panel[row][col] = nonZeros[i];
                row++;
            }

        while(row <numRows){
            panel[row][col] = 0;
            row++;
        }
        }
        int n = 0;
        int n2 = 0;
        selectRandomCell(n,n2);
}


void Board::pressDown(){
   for(int col = 0; col<numCols; col++){
        vector<int> nonZeros;

        for(int r = numRows-1; r>=0; r--){
            if(panel[r][col]!=0)
                nonZeros.push_back(panel[r][col]);
            }
        merge(nonZeros, max);
        int row = numRows-1;

        for(int i = 0; i<nonZeros.size(); i++)
            if(nonZeros[i]!=0){
                panel[row][col] = nonZeros[i];
                row--;
            }

        while(row>=0){
            panel[row][col] = 0;
            row--;
        }
        }
        int n3 = 0;
        int n4 = 0;
        selectRandomCell(n3,n4);
}

void Board::pressRight(){
    for(int row = 0; row<numRows; row++){
        vector<int> nonZeros;

        for(int c = numCols-1; c>=0; c--){
            if(panel[row][c]!=0)
                nonZeros.push_back(panel[row][c]);
            }
        merge(nonZeros, max);
        int col = numCols-1;

        for(int i = 0; i<nonZeros.size(); i++)
            if(nonZeros[i]!=0){
                panel[row][col] = nonZeros[i];
                col--;
            }

        while(col >= 0){
            panel[row][col] = 0;
            col--;
        }
        }
        int n5 = 0;
        int n6 = 0;
        selectRandomCell(n5,n6);
}

void Board:: pressLeft(){
    for(int row = 0; row<numRows; row++){
        vector<int> nonZeros;

        for(int c = 0; c<numCols; c++){
            if(panel[row][c]!=0)
                nonZeros.push_back(panel[row][c]);
            }
        merge(nonZeros, max);
        int col = 0;

        for(int i =0; i<nonZeros.size()>0; i++)
            if(nonZeros[i]!=0){
                panel[row][col] = nonZeros[i];
                col++;
            }

        while(col <numCols){
            panel[row][col] = 0;
            col++;
        }
        }
        int n7 = 0;
        int n8 = 0;
        selectRandomCell(n7,n8);
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

void Board::start()
{
    int round = 1;

 //TODO: call selectRandomCell twice to generate two values
    int row;
    int col;
    selectRandomCell(row, col);
    selectRandomCell(row, col);


    char ch;
    while (true) {
 
        if (max >= target) //in case goal is not a power of 2,
 {
            cout << "Congratulation!" << endl;
            break;
 }


    ch = getchar();
    if (ch == 'S'){
        break;
 }

    if (ch == '\033') { // if the first value is esc
    getchar(); // skip the [
    switch(getchar()) { // the real value
    case 'A':
 // code for arrow up
        cout << "Round " << setw(4) << round << ": ";
        cout << "Press UP. "
            << "Goal: " << target << endl;
        pressUp();
        round++;
        break;
    case 'B':
 // code for arrow up
        cout << "Round " << setw(4) << round << ": ";
        cout << "Press DOWN. "
            << "Goal: " << target << endl;
        pressDown();
        round++;
        break;
    case 'C':
 // code for arrow up
        cout << "Round " << setw(4) << round << ": ";
        cout << "Press RIGHT. "
            << "Goal: " << target << endl;
        pressRight();
        round++;
        break;
    case 'D':
 // code for arrow up
        cout << "Round " << setw(4) << round << ": ";
        cout << "Press LEFT. "
            << "Goal: " << target << endl;
        pressLeft();
        round++;
        break;
 }
 }
 }
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




