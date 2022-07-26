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

void bubbleSortDescendingArray(int array[],int size){
    for(int i=1;i<size;i++){
        //cout<<"Iteration No. "<<i<<endl;
        bool isShorted = true; // redundent testing inside iteration
         for(int j=0;j<size-i;j++){ // redundent testing (size - i) outside iteration
            if(array[j] < array[j+1]){
                int tempEl = array[j];
                array[j] = array[j+1];
                array[j+1] = tempEl;
                isShorted = false; // each time if the loop enter into this if() condition, it will say that the array is not sorted
            }
            //printArray(array,size);
         }
         //cout<<endl;
         if(isShorted) break;
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
    bubbleSortDescendingArray(array,n);
    cout<<"After sort the array: "<<endl;
    printArray(array,n);
    return 0;
}
