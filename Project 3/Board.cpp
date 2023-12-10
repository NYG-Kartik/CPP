/*
Author: Kartik Vanjani
Course: CSCI-135
Instructor: Tong Yi
Assignment: PROJECT 3C
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

struct RowCol{
    int row;
    int col;

};


void merge(vector<int>& result) {
    int i = 0;
    int size = result.size();
    while(i<size){
        if(i+1<size && result[i+1] == result[i]){
            result[i] *=2;
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
        merge(nonZeros);
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
        merge(nonZeros);
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
        merge(nonZeros);
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
        merge(nonZeros);
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




