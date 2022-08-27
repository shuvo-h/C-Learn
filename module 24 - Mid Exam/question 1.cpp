
#include<bits/stdc++.h>
using namespace std;

void inputArray(int array[],int size){
    for(int i=0; i<size;i++){
        cin>>array[i];
    }
}
void printArray(int array[],int size){
    for(int i=0; i<size;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

void sortArray(int arr[],int size){
    //int sortedArray[size];
    int i, j, min, temp;
       for (i = 0; i < size - 1; i++) {
          min = i;
          for (j = i + 1; j < size; j++)
          if (arr[j] < arr[min])
          min = j;
          temp = arr[i];
          arr[i] = arr[min];
          arr[min] = temp;
       }
    //printArray(arr,size);
}
void countFreequency(int array[],int size){
    // make sort of the array
    sortArray(array,size);
    int frequenctArray[101];
    // first fill with zero
    for(int i=0; i<=101;i++){
        frequenctArray[i] = 0;
    }
    for(int i=0; i<size;i++){
        frequenctArray[array[i]]++;
    }
    int nonDuplicate[size];
    int k = 0;
    for(int i=0; i<size;i++){
        bool isDuplicate = false;
        for(int j=0;j<=i;j++){
            if(nonDuplicate[j] == array[i]){
                isDuplicate = true;
            }
        }
        if(!isDuplicate){
            cout<<array[i]<< " = "<<frequenctArray[array[i]]<<endl;
            nonDuplicate[k] = array[i];
            k++;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int array[n];
    inputArray(array,n);
    countFreequency(array,n);
}
