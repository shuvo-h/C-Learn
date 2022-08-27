#include<bits/stdc++.h>
using namespace std;

int main(){
    int row,col;
    cin>>row;
    col = row;
    int numArray[row][col];
    // take 2D array input
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>numArray[i][j];
        }
    }
    cout<<endl;
    // count pattern sum
    int sum = 0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            int key = numArray[i][j];

            // fist row half collect
            if(j < row/2 && i==0) sum += key;

            // middle col collect
            if(i == row/2) sum += key;

            // middle row collect
            if(j == col/2 && i!=j) sum += key;

            //  fist col lower half
            if(j==0 && i>col/2) sum += key;


            //  last col upper half
            if(j==col-1 && i<col/2) sum += key;

            // last row last half
            if(i==row-1 && j>col/2) sum += key;
        }
    }
    cout<<sum<<endl;

    return 0;
}

