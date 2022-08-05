#include<bits/stdc++.h>
using namespace std;

void printArray(int array[],int size){
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

void insertionSortDescendingArray(int array[],int size){
    //step 1: traverse through all element
    for(int i=1;i<size;i++){
        cout<<"Iteration No. "<<i<<" -> ";
        // step 2: Identify the key element to be palced
        int keyEl = array[i];
        cout<<"\tKey Element: "<<keyEl<<endl;
        cout<<"\t\t\t\t";
        int j = i-1;
        // step 3: check the each traversed elements and move each elements
         while(array[j]>keyEl && j>=0){ // redundent testing (size - i) outside iteration
            array[j+1] = array[j];
            j--;
         }
         // step 4: place the key element
         array[j+1] = keyEl;
        printArray(array,size);
         cout<<endl;
    }
}

int main(){
    int array[]={5,1,3,8,2,2};
    cout<<"Before sort the array: "<<endl;
    printArray(array,6);
    // bubble sort implement
    insertionSortDescendingArray(array,6);
    cout<<"After sort the array: "<<endl;
    printArray(array,6);
    return 0;
}

