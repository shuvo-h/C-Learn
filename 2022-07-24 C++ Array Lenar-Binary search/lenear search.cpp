
#include<bits/stdc++.h>
using namespace std;

void arrayLenearSearch(int array[],int size,int searchValue){
    bool isFound = false;
    for(int i=0;i<size;i++){
        if(array[i] == searchValue){
            cout<< i <<"th index, "<< i+1 <<"th position" <<endl;
            isFound = true;
        }
    }
    if(!isFound){
        cout<<"Didn't found "<<searchValue<<" in this array!"<<endl;
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
        arrayLenearSearch(array,n,checValue);
        cout<<"Do you want to continue the search: (y/n) ";
        cin>>needSearch;
    }

}
