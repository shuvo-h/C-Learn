#include <bits/stdc++.h>
using namespace std;

void prefixArrayFn( int mainArray[],int mainSize,int prefixArray[],int prefixSize){
    prefixArray[0] = mainArray[0];
    for(int i=1; i<mainSize;i++){
        prefixArray[i] = mainArray[i] + prefixArray[i-1];
        // pre[j]-pre[i-1]; if i!=0 // use this rule to get the prefix sum between a fixed index length
    }
}
int sumIn2Index(int i, int j, int pre[]){
    if (i == 0) return pre[j];

    return pre[j] - pre[i - 1];
}

void printArray(int array[],int size){
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int mainArray[5] = {10,8,1,2,5};
    int prefixArray[5];
    prefixArrayFn(mainArray,5,prefixArray,5);
    printArray(mainArray,5);
    printArray(prefixArray,5);
    return 0;
}
