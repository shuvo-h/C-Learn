#include<bits/stdc++.h>
using namespace std;

void takeArrinput(int array[],int size){
    //cout<<"Input the array elements: ";
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
}

void printArr(int array[],int size){
    //cout<<"Input the array elements: ";
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

int getMaxEl(int array[],int size){
    int max = INT_MIN;
    for(int i=0;i<size;i++){
        if(array[i]>max){
            max = array[i];
        }
    }
    return max;
}
void arrayFillZero(int array[],int size){
     for(int i=0;i<size;i++){
        array[i] = 0;
     }
}
void frequencyCalc(int array[],int size,int frequencyArray[]){
     for(int i=0;i<size;i++){
        frequencyArray[array[i]]++;
     }
}
void cumulativeSum(int array[],int size){
     for(int i=1;i<=size;i++){
        array[i] += array[i-1];
     }
}
void finalCountingSort(int mainArr[],int size,int cumulativeArray[],int finalSortArr[]){  //Backward traversal of main array
     for(int i=size-1;i>=0;i--){
        cumulativeArray[mainArr[i]]--;
        int k_position = cumulativeArray[mainArr[i]];
        finalSortArr[k_position] = mainArr[i];
     }
}

int main(){
    int array[] = {7,2,9,2,7,4,5,1};
    int size = sizeof array/sizeof array[0];

    cout<<"Before sort: "<<endl;
    //printArr(array,size);
    // step 1: find max element
    int maxEl = getMaxEl(array,size);
    // step 2: initializing count array
    int count[maxEl+1];  // max element+1 length
    arrayFillZero(count,maxEl+1);
    // step 3: frequency array
    frequencyCalc(array,size,count);

    // step 4: Cumulative Sum of count array element
    cumulativeSum(count,maxEl+1);

    // step 5: Final sorted array (counting sort), Backward traversal of main array
    int finalArr[size];
    finalCountingSort(array,size,count,finalArr);
    // print the sorted array
    cout<<"After sort: "<<endl;
    printArr(finalArr,size);

    return 0;
}
