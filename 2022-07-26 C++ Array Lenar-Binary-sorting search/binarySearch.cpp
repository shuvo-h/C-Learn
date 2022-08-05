
#include<bits/stdc++.h>
using namespace std;
int counter =1;
int binarySearch(int array[],int x, int lb, int ub){
    if(lb<=ub){
            int mid = (lb+ub)/2;
            // print the array
            cout<<"Iteration "<<counter<<":"<<endl;
            counter++;
            cout<<"\tMid = "<<mid<<",\n\tUpper boundary = "<<ub<<",\n\tLower Boundary = "<<lb<<endl;
            cout<<"\t[";
            for(int i=lb;i<=ub; i++){
                cout<<array[i]<<" ";
            }
            cout<<"]";
            cout<<endl<<endl;
        // Center is the searched index
        if(x == array[mid]){
            return mid;
        }else if(x > array[mid]){ // Right is the searched index
            return binarySearch(array,x,mid+1,ub);
        }else if(x < array[mid]){ // Left is the searched index
            return binarySearch(array,x,lb,mid-1);
        }
    }else{
        return -1;
    }
}

int main(){
    int array[]={1,2,9,11,17,24,26,31,32,45};
    // bubble sort implement
    int searchValue=  binarySearch(array,32,0,10);
    cout<<"The index of search item is = "<<searchValue<<endl;
    return 0;
}
