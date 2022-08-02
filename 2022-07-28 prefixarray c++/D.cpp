
#include <bits/stdc++.h>
using namespace std;
void takeArrinput(int array[],int size){
    //cout<<"Input the array elements: ";
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
}

int findMaxOccuredEl(int *arr, int n) {
  int maxcount=0;
  int maxFri;
  for(int i=0;i<n;i++){
    int count=0;
    for(int j=0;j<n;j++){
      if(arr[i] == arr[j])
        count++;
    }
    if(count>maxcount){
      maxcount=count;
      maxFri = arr[i];
    }
  }
  return maxcount;
}


int main(){
    int times;
    cin>>times;
    for(int i = 0; i<times; i++){
        int size;
        cin>>size;
        int arr[size];
        takeArrinput(arr,size);
        // which element has maximum time is K.
        int K = findMaxOccuredEl(arr,size);
        cout<<size-K<<endl;
    }
    return 0;
}
