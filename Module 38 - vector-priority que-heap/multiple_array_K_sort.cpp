
#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int> PAIR;

int main(){
    int k;
    cin>>k;
    vector<vector<int>> allValues(k);
    // take input
    for(int i=0; i<k; i++){
        int size;
        cin>>size;
        allValues[i] = vector<int>(size);
        for(int k=0; k<size; k++){
            cin>>allValues[i][k];
        }
    }

    vector<int>indexTraker(k,0);
    priority_queue<PAIR, vector<PAIR>, greater<PAIR>> PQ;
    // initialization of PQ
    for(int i=0; i<k; i++){
        PQ.push(make_pair(allValues[i][0],i));
    }

    vector<int>ans;
    // main logic of heap
    while(!PQ.empty()){
        PAIR x = PQ.top();
        PQ.pop();
        ans.push_back(x.first);
        if(indexTraker[x.second]+1 < allValues[x.second].size()){ // increment position validity check
            // create a pair: (increment position value,increment position array identity)
            // Then, push in PQ
            PQ.push(make_pair(allValues[x.second][indexTraker[x.second]+1],x.second));
        }
        indexTraker[x.second]+=1;

    }

    // print answer
    for(auto element:ans){
        cout<<element<<" ";
    }
    cout<<endl<<endl;
    return 0;
}

/*
    arr 0: [1, 4, 7]
    arr 1: [3, 5]
    arr 2: [2, 6, 7]

    input:
3
3
1 4 7
2
3 5
3
2 6 7
*/
