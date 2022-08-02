
#include<bits/stdc++.h>
using namespace std;

void take2DArrinput(int *array,int row,int col){
    //cout<<"Input the array elements: ";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            //cin>>array[i][j];
            cin>>*((array+i*col)+j);
        }
    }
}


void print2DArry(int *array,int row,int col){
    //cout<<"Input the array elements: ";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<*((array+i*col)+j)<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}


int main(){
    int row,col;
    cin>>row>>col;
    int numArray[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>numArray[i][j];
        }
    }
    //take2DArrinput(&numArray,row,col);
    print2DArry(&numArray,row,col);
}
