
#include<stdio.h>
struct Time{
    int hour;
    int minute;
    int second;
};
struct Interval{
    struct Time start;
    struct Time end;
}


int main(){
    struct Interval timeInterval;

    timeInterval.start.hour = 5;
    timeInterval.start.minute = 30;
    timeInterval.start.second = 00;
    timeInterval.end.hour = 10;
    timeInterval.end.minute = 15;
    timeInterval.end.second = 00;
}


