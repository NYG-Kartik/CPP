/*
Author: Kartik Vanjani
Course: CSCI-135
Instructor: Tong Yi
Assignment: LAB 10A
Description: This program works with time.
*/

#include <iostream>
using namespace std;

class Time { 
public:
    int h;
    int m;
};

enum Genre {ACTION, COMEDY, DRAMA, ROMANCE, THRILLER};


class Movie { 
public: 
    string title;
    Genre genre;     
    int duration;    
};

class TimeSlot { 
public: 
    Movie movie;     
    Time startTime;  
};

int minutesSinceMidnight(Time time) {
    int x = (time.h * 60) + time.m;

    return x;
}

int minutesUntil(Time earlier, Time later) {
    int y = ((later.h - earlier.h) * 60) + (later.m - earlier.m);

    return y;
}

Time addMinutes(Time time0, int min) {
    Time g;

    g.h = time0.h + (min + time0.m) / 60;
    g.m = (min + time0.m) % 60;

    return g;
}

void printMovie(Movie mv) {
    string g;

    switch (mv.genre) {
        case ACTION: 
            g = "ACTION"; 
            break;
        case COMEDY: 
            g = "COMEDY"; 
            break;
        case DRAMA: 
            g = "DRAMA";  
            break;
        case ROMANCE: 
            g = "ROMANCE"; 
            break;
        case THRILLER: 
            g = "THRILLER"; 
            break;
    }

    cout << mv.title << " " << g << " (" << mv.duration << " min)";
}

void printTimeSlot(TimeSlot ts) {
    Time endingTime = addMinutes(ts.startTime, ts.movie.duration);
    
    printMovie(ts.movie);

    cout << "[starts at " << ts.startTime.h << ":" << ts.startTime.m 
         << ", ends by " << endingTime.h << ":" << endingTime.m << "]";
}


TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie) {
    Time end = addMinutes(ts.startTime, ts.movie.duration);
    TimeSlot h = {nextMovie, end};

    return h;
}

bool timeOverlap(TimeSlot ts1, TimeSlot ts2){
    int ts1_minutes = (60 * ts1.startTime.h) + ts1.startTime.m;
    int ts2_minutes = (60 * ts2.startTime.h) + ts2.startTime.m;
    
    TimeSlot early;
    
    if(ts1_minutes > ts2_minutes) {
        early = ts2;
    }
    else {
        early = ts1;
    }
    
    int diff = ts2_minutes - ts1_minutes;
    if(diff < 0){
        diff *=-1;
    }
    if(early.movie.duration > diff){
        return true;
    }
    else {
        return false;
    }
    
}



int main(){
    cout << endl;
    return 0;
}