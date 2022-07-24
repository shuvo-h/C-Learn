
#include<bits/stdc++.h>
using namespace std;

int arrayBinarySearch(int array[],int searchEl,int lowerBoundary, int upperBoundery){
   if(lowerBoundary <= upperBoundery){
        int mid = (lowerBoundary + upperBoundery)/2;
        // if search element is equal to the mid value
        if(searchEl == array[mid]){
            return mid;
        }else if(searchEl > array[mid]){
            // if search value is greater than the array mid element, then go right index of array to search
            arrayBinarySearch(array,searchEl,mid+1,upperBoundery);
        }else{
            // if search value is less than the array mid element, then go left index of array to search
            arrayBinarySearch(array,searchEl,lowerBoundary,mid-1);
        }
   }else{
    return -1;
   }
}

void arraySearch(int array[],int size,int searchValue){
    int searchResIdx = arrayBinarySearch(array,searchValue,0,size-1);
    if(searchResIdx == -1){
        cout<<searchValue<<" didn't found in this array!"<<endl;
    }else{
        cout<<"Index of search value = "<< searchResIdx <<endl;
        cout<<"Position of search value = "<< searchResIdx + 1 <<endl;
    }
}

void takeArrinput(int array[],int size){
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
}

int main(){
    int n;
    cin>>n;
    int array[n];
    takeArrinput(array,n);

    char needSearch;
    cout<<"Do you want to search: (y/n) ";
    cin>>needSearch;

    while(toupper(needSearch) == 'Y'){
        int checValue;
        cout<<"Please enter the value to search: ";
        cin>>checValue;
        arraySearch(array,n,checValue);
        cout<<"Do you want to continue the search: (y/n) ";
        cin>>needSearch;
    }

}
