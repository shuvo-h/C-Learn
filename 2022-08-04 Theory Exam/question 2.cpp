#include<bits/stdc++.h>
using namespace std;

void printArray(int array[],int size){
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int array[]={7,2,13,2,11,4};
    int size = sizeof array/sizeof array[0];
    for(int i=1;i<size;i++){
        cout<<"Iteration No. "<<i<<endl;
        // redundent testing inside iteration
        bool isShorted = true;
        // redundent testing (size - i) to reduce the loop
         for(int j=0;j<size-i;j++){
            if(array[j] < array[j+1]){
                int tempEl = array[j];
                array[j] = array[j+1];
                array[j+1] = tempEl;
                // check each time if the array is sorted
                isShorted = false;
            }
            printArray(array,size);
         }
         cout<<endl;
         // if sorted, break the loop immediately
         if(isShorted) break;
    }
    return 0;
}
