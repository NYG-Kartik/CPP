/*
Author: Kartik Vanjani
Course: CSCI-135
Instructor: Tong Yi
Assignment: PROJECT 2A
Description: This program is a part of the game minesweeper.
*/

#include "Field.hpp"
#include <iostream>
#include <cstdlib> //rand, srand
#include <ctime>

using namespace std;


Field::Field() {
    srand(time(NULL));
    size = 7;
    num_mines = 2;
    //int cells[size]; 
    //WRONG, cannot use static allocated array
    //also, the above statement is a locally declared array,
    //it does not initialize data member cells
    cells = new int[size];
    for (int i = 0; i < size; i++) //add
        cells[i] = 0;

    int num_ones = 0;
    while(num_ones < num_mines){
        int pos = rand() % size;
        if(cells[pos] == 0){
            cells[pos] = 1;
            num_ones++;
        }
    }

    checked = new bool[size]; //add
    for (int i = 0; i < size; i++) //add
        checked[i] = false;
}
  

Field::Field(int size, int num_mines) {
    srand(time(NULL));
    if(size<=3){
        this->size = 7;
    }
    else{
        this->size = size;
    }
    if(num_mines<2){
        this->num_mines = 2;
    }
    else{
        this->num_mines = num_mines;
    }

    //add
    if (this->num_mines >= this->size)
       this->num_mines = this->size/3;

    //int cells[size]; //WRONG
    cells = new int[this->size]; //size is given parameter, it might be invalid, for example, -3, data member size should be used as this->size if it has the same name as an input parameter
    //also, int cells[size]; is a locally declared array,
    //it has nothing to do with data member cells.
    //Your job is to initialize data member cells.
    for (int i = 0; i < this->size; i++) //add
        cells[i] = 0;

    int num_ones = 0;
    while(num_ones < this->num_mines){
        int pos = rand() % this->size; //modified from size to this->size
        if(cells[pos] == 0){
            cells[pos] = 1;
            num_ones++;
        }
    }

    //bool checked[size]; //WRONG
    checked = new bool[this->size];
    for(int i=0; i<this->size; i++){
        checked[i] = false;
    }
}


Field::~Field() {
   //ADD: release memory and set the corresponding pointer to be nullptr
   delete[] cells;
   cells = nullptr;

   delete[] checked;
   checked = nullptr;
}

string get_labels(int size) {
    string str;
    for (int i = 0; i < size; i++) { 
        str += "  ";
        if (i < 10)
           str += " " + std::to_string(i);
        else str += to_string(i);
        str += "  ";
    }
    str += "\n";
    return str;
}


string get_separate_line(int size) {
    string str = "+";
    for (int i = 0; i < size; i++)
        str += "-----+";
    str += "\n";
    return str;
}


string Field::to_string() const {
    string str = get_labels(size);
    str += get_separate_line(size);

    str += "|";
    for (int i = 0; i < size; i++) {
       if (cells[i] == 0) 
        {
           if (checked[i] == true)
               str += "  " + std::to_string(neighbor_mines(i)) +
                      "  |";
           else str += "     |";
        }
        else //must have a mine 
            str += "     |";

        
    }

    str += "\n";

    str += get_separate_line(size);

    return str;
}


string Field::answer_string() const {
    string str = get_labels(size);
    str += get_separate_line(size);
    str+= "|";
    for(int i=0; i<size; i++){
        if(cells[i] == 1){
            str+= "  *  |";
        }
        else{
            str+= "  " + std::to_string(neighbor_mines(i)) + "  |";
        }
    }
    str += "\n";
    str+= get_separate_line(size);
    
    return str;

}


string Field::empty_layout_string() const {
    string x = get_labels(size);
    x+= get_separate_line(size);
    x += "|";
    for(int i =0;i<size;i++){
        x+= "     |";}
    x+="\n";
    x+=get_separate_line(size);
    return x;

}

int Field::get_size() const {
    return size;
    

}


int Field::get_num_mines() const {
    return num_mines;

}


int Field::neighbor_mines(int index) const {
    if(cells[index] == 1){
        return -1;
    }
    int count = 0;
    if(index > 0 && cells[index-1] == 1){
        count++;
    }
    if(index + 1 < size && cells[index+1] == 1){
        count ++;
    }
    return count;
}


void Field::mark_checked(int index) {
    if(index>=0 && index<size){
        checked[index] = true;
    }
    //checked[index] = false; //remove

}


bool Field::is_checked(int index) const {
    if(checked[index] == true){
        return true;
    }
    else{
    return false;

    }
    
    
    
}


bool Field::has_mine(int index) const {
    if(cells[index] == 1){
        return true;
    }

    return false;
    
    
    
}


//int main(int argc, char const *argv[])
//{
//    cout << "testing" << endl;

//    return 0;
//}

