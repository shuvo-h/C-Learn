#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int> PAIR;

int main(){
    vector<int> V(3,-1);
    for(int i=0;i<V.size(); i++){
        cout<< V[i] <<" ";
    }
    cout<<endl<<endl;
    V.push_back(4);
    // rule: Iterator
    vector<int>::iterator it;
    for(it=V.begin();it!=V.end(); it++){
        cout<< *it <<" ";
    }
    cout<<endl<<endl;

    // // rule: auto register in place of iterator
    for(auto it=V.begin();it!=V.end(); it++){ // looping with auto so any type data can print
        cout<< *it <<" ";
    }
    cout<<endl<<endl;

    // rule: auto register in range based traversal
    for(auto element: V){
        cout<<element<<" ";
    }
    cout<<endl<<endl;

    // maximum priority queue
    cout<<"maximum priority queue:"<<endl;
    priority_queue<int, vector<int>> PQ;
    PQ.push(1);
    PQ.push(6);
    PQ.push(2);
    while(!PQ.empty()){
        cout<<PQ.top()<<endl;
        PQ.pop();
    }
     cout<<endl<<endl;

     // minimum priority queue
     cout<<"minimum priority queue:"<<endl;
    priority_queue<int, vector<int>, greater<int>> mPQ;
    mPQ.push(1);
    mPQ.push(6);
    mPQ.push(2);
    while(!mPQ.empty()){
        cout<<mPQ.top()<<endl;
        mPQ.pop();
    }
     cout<<endl<<endl;



     // minimum priority queue
    cout<<"Pair based priority queue:"<<endl;
    priority_queue<PAIR, vector<PAIR>, greater<PAIR>> pPQ;
    pPQ.push(make_pair(1,9));
    pPQ.push(make_pair(6,2));
    pPQ.push(make_pair(4,1));
    while(!pPQ.empty()){
        cout<<pPQ.top().first<<" | "<<pPQ.top().second<<endl;
        pPQ.pop();
    }
     cout<<endl<<endl;


    return 0;
}
