#include <bits/stdc++.h>
using namespace std;

void takeArrinput(int array[],int size){
    //cout<<"Input the array elements: ";
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
}


void prefixSumFn( int mainArray[],int mainSize,int prefixArray[],int prefixSize){
    prefixArray[0] = mainArray[0];
    for(int i=1; i<mainSize;i++){
        prefixArray[i] = mainArray[i] + prefixArray[i-1];
        // pre[j]-pre[i-1]; if i!=0 // use this rule to get the prefix sum between a fixed index length
    }
}

void deleteAnElement(int array[],int delIdx){
    cout<<array[delIdx]<<endl;
    array[delIdx] = 0;
}
void addElToAnIndex(int arr[],int addIdx,int value){
    arr[addIdx] = arr[addIdx] + value;
}

int sumIn2Index(int i, int j, int pre[]){
    if (i == 0) return pre[j];
    return pre[j] - pre[i - 1];
}


int main(){
    int caseNumber;
    cin>>caseNumber;
    for(int i=1;i<=caseNumber;i++){
        cout<<"Case "<<i<<":"<<endl;
        int size, queryInputTimes;
        cin>>size>>queryInputTimes;
        int mainArray[size];
        takeArrinput(mainArray,size);
        int preFixSum[size];
        prefixSumFn(mainArray,size,preFixSum,size);
        for(int i=1;i<=queryInputTimes;i++){
            int operatorNumber;
            cin>>operatorNumber;
            // operate based on the input value
            if(operatorNumber == 1){
                int delIdx;
                cin>>delIdx;
                deleteAnElement(mainArray,delIdx);
                prefixSumFn(mainArray,size,preFixSum,size);
            }else if(operatorNumber == 2){
                int updateIdx,newValue;
                cin>>updateIdx>>newValue;
                addElToAnIndex(mainArray,updateIdx,newValue);
                prefixSumFn(mainArray,size,preFixSum,size);
            }else if(operatorNumber == 3){
                int stIdx, endIdx;
                cin>>stIdx>>endIdx;
                int sum = sumIn2Index(stIdx,endIdx,preFixSum);
                cout<<sum<<endl;
            }
        }
    }
    /*
    int prefixArray[5];
    prefixArrayFn(mainArray,5,prefixArray,5);
    printArray(mainArray,5);
    printArray(prefixArray,5);
    */
    return 0;
}
