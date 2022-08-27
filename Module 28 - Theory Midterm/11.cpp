
#include<bits/stdc++.h>
#include"MYQUEUEST.h";
using namespace std;


/*
Queue: FIFO
3 types of operation in Queue:
 i) enQueue: push() operation
 ii) deQueue: pop() operation
 iii) peck: Top() operation
 iv) empty: isEmpty() operation return bool

*/



// for int datatyep
int main(){
    Queue <int>q;
    int x=9;
    int y=x+3;
    int z=x+y;
    int p=y+z;

    q.push(z);
    q.push(p);
    q.pop();
    q.push(y);
    q.push(z);

    return 0;
}


