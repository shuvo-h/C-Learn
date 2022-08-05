
#include<bits/stdc++.h>
using namespace std;

void printArray(int array[],int size){
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

void bubbleSortDescendingArray(int array[],int size){
    for(int i=1;i<size;i++){
        cout<<"Iteration No. "<<i<<endl;
        bool isShorted = true; // redundent testing inside iteration
         for(int j=0;j<size-i;j++){ // redundent testing (size - i) outside iteration
            if(array[j] > array[j+1]){
                int tempEl = array[j];
                array[j] = array[j+1];
                array[j+1] = tempEl;
                isShorted = false;
            }
            cout<<"\t";
            printArray(array,size);
         }
         cout<<endl;
         if(isShorted) break;
    }
}

int main(){
    int mainArr[]={7,2,13,2,11,4};
    int length = sizeof mainArr/sizeof mainArr[0];
    bubbleSortDescendingArray(mainArr,length);
    return 0;
}
