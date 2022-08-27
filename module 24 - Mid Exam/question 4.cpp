#include<bits/stdc++.h>
using namespace std;

int main(){
    int row,col;
    cin>>row>>col;
    int numArray[row][col];
    // take 2D array input
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>numArray[i][j];
        }
    }

    // replace the duplicate by -1
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            int key = numArray[i][j];
            //cout<<"Chrck == "<<key<<endl;
            // check if this value have seen
            for(int m=0;m<row;m++){
                for(int n=0;n<col;n++){
                    //if(i!=j) cout<<key<<" = "<<numArray[m][n]<<" | ";
                    if(i==m && j==n){
                        //cout<<"  ";
                        continue;
                    }else{
                        if(key == numArray[m][n]) numArray[m][n] = -1;
                        //cout<<key<<" -> "<<numArray[m][n]<<" ";
                        //cout<<numArray[m][n]<<" ";
                    }
                }
                //cout<<endl;
            }
            //cout<<numArray[i][j]<<endl;
        }
    //cout<<endl;
    }


    // print 2D array output
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<numArray[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    return 0;
}
