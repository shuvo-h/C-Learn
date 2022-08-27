
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

void differenceTwoSet(int A[], int size1, int B[], int size2){
    for(int i=0; i<size1;i++){
        bool isExist = false;
        for(int j=0; j<size2;j++){
            if(A[i] == B[j]) isExist = true;
        }
        if(!isExist) cout<<A[i]<<" ";
    }
}
/*
8
7 8 1 5 2 6 4 3
6
1 3 6 0 9 2
*/

int main(){
    int n, m;
    int A[n];
    cin>>n;
    inputArray(A,n);
    cin>>m;
    int B[m];
    inputArray(B,m);
    differenceTwoSet(A,n,B,m);
    return 0;
}
