#include<bits/stdc++.h>
using namespace std;

void take2DarrayInput(int *arr, int row,int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>*((arr+i*col)+j);
        }
    }
}

void print2Darray(int *arr, int row,int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<*((arr+i*col)+j);
        }
        cout<<endl;
    }
    cout<<endl;
}


int main(){
    int n;
    cin>>n;
    int row,col;
    row = sqrt(n);
    col=sqrt(n);
    int array2D[row][col];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>array2D[i][j];
        }
    }
    //take2DarrayInput(&array2D,row,clock);
    //print2Darray(&array2D,row,col);

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<array2D[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;


    return 0;
}
