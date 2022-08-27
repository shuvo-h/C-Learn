#include<bits/stdc++.h>
#include"MYQUEUE.h";
using namespace std;


/*
Queue: FIFO
3 types of operation in Queue:
 i) enQueue: push() operation
 ii) deQueue: pop() operation
 iii) peck: Top() operation
 iv) empty: isEmpty() operation return bool

*/



typedef pair<char, int> mytype;

// for pair data type
int main(){
    Queue <mytype>q;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        char c1;
        int c2;
        cin>>c1>>c2;
        q.push(make_pair(c1,c2));
    }

    /*
    while(!q.empty()){
        mytype chk;
        chk = q.pop();
        cout<<chk.first<<" : "<<chk.second<<endl;
    }
    */

    if(!q.empty()){
        mytype chk;
        chk = q.Front();
        cout<<chk.first<<" : "<<chk.second<<endl;
    }
    if(!q.empty()){
        mytype chk;
        chk = q.Back();
        cout<<chk.first<<" : "<<chk.second<<endl;
    }

    return 0;
}


/*
// for int datatyep
int main(){
    Queue <int>q;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int chk;
        cin>>chk;
        q.push(chk);
    }


    while(!q.empty()){
        cout<<q.pop()<<" ";
    }


    if(!q.empty()){
            cout<<q.Front()<<endl;
    }
    if(!q.empty()){
            cout<<q.Back()<<endl;
    }

    return 0;
}
*/
