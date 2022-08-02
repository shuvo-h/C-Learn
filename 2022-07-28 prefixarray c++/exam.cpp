#include<bits/stdc++.h>
using namespace std;

// problem solution A:Quize

void takeArrinput(int array[],int size){
    //cout<<"Input the array elements: ";
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
}

int reachedWeekCounter(int array[],int size){
    int counter = 0;
    for(int i=0;i<size;i++){
        if(array[i] >= 10){
            counter++;
        }
    }
    return counter;
}

int main(){
    int problems[4];
    takeArrinput(problems,4);
    int reachWeeks = reachedWeekCounter(problems,4);
    cout<<reachWeeks;
    return 0;
}

