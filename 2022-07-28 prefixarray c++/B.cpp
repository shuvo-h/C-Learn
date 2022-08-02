#include<bits/stdc++.h>
using namespace std;

// problem solution B:Quize

void takeArrinput(int array[],int size){
    //cout<<"Input the array elements: ";
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
}

int findMin(int arrayN[],int size){
    int stIdx, endIdx;
    cin>>stIdx;
    cin>>endIdx;
    int minValue = arrayN[stIdx-1];
    for(int i=stIdx-1;i<=endIdx-1;i++){
        if(minValue > arrayN[i]){
            minValue = arrayN[i];
        }
    }
    return minValue;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // number of case
    int caseN;
    cin>>caseN;
    cout<<'\n';
    for(int i = 0; i<caseN; i++){
        cout<<"Case "<<i+1<<":";
        // array size
        int size, queryTimes;
        cin>>size;
        cin>>queryTimes;
        // take array elements
        int numbersList[size];
        takeArrinput(numbersList,size);
        for(int j = 1; j<=queryTimes; j++){
            int min = findMin(numbersList,size);
            if(i == caseN - 1 && j == queryTimes){
                cout<<min;
            }else{
                cout<<min<<'\n';
            }
        }
    }
    //cout<<reachWeeks;
    return 0;
}


