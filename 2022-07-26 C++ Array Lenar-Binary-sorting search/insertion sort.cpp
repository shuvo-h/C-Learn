#include<bits/stdc++.h>
using namespace std;


void takeArrinput(int array[],int size){
    cout<<"Input the array elements: ";
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
}
void printArray(int array[],int size){
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

void insertionSortDescendingArray(int array[],int size){
    for(int i=1;i<size;i++){
        //cout<<"Iteration No. "<<i<<endl;
        int keyEl = array[i];
        int j = i-1;
         while(array[j]>keyEl && j>=0){ // redundent testing (size - i) outside iteration
            array[j+1] = array[j];
            j--;
         }
         array[j+1] = keyEl;
         //cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Input the array SIze: ";
    cout<<endl;
    cin>>n;
    int array[n];
    takeArrinput(array,n);
    cout<<"Before sort the array: "<<endl;
    printArray(array,n);
    // bubble sort implement
    insertionSortDescendingArray(array,n);
    cout<<"After sort the array: "<<endl;
    printArray(array,n);
    return 0;
}

