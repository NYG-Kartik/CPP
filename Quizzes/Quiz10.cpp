//
//Author: Kartik Vanjani
//Course: CSCI-135
//Instructor: Tong Yi
//Assignment: Quiz 10
//

#include <iostream>
#include <string>
using namespace std;

class Date{
    public:
    int month;
    int day;
    int year;
    string day_of_week;
};


string mname(Date*input){
    string name;
    if(input->month == 1){
        name = "Jan";
    }
    else if(input->month == 2){
        name = "Feb";
    }
    else if(input->month == 3){
        name = "Mar";
    }
    else if(input->month == 4){
        name = "Apr";
    }
    else if(input->month == 5){
        name = "May";
    }
    else if(input->month == 6){
        name = "Jun";
    }
    else if(input->month == 7){
        name = "Jul";
    }
    else if(input->month == 8){
        name = "Aug";
    }
    else if(input->month == 9){
        name = "Sep";
    }
    else if(input->month == 10){
        name = "Oct";
    }
    else if(input->month == 11){
        name = "Nov";
    }
    else if(input->month == 12){
        name = "Dec";
    }
    return name;

}


std :: string formatDate(Date*input){
    string name= mname(input);
    cout << name << " " << input->day << "," << " " << input->year;

}




