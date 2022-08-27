
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

void statusCalc(int incomesList[], int spendList[], int daysLength){
    //cout<<"stastus date"<<endl;
    int statusDate;
    cin>>statusDate;
    int totalAmount = 0;
    for(int k=0; k<=statusDate;k++){
        //cout<<"Enter Total = "<<k<<"->"<<totalAmount<<endl;
        totalAmount = totalAmount + incomesList[k] - spendList[k];
        //cout<<k<<" Total = "<<totalAmount<<" + "<<incomesList[k]<<" - "<<spendList[k]<<endl;
    }
    if(totalAmount >= 0) cout<<1<<" ";
    else cout<<0<<" ";
}

int main(){
    int testCase,daysLength;
    cin>>testCase;
    for(int i=0; i<testCase;i++){
        cin>>daysLength;
        int incomesList[daysLength], spendList[daysLength];
        inputArray(incomesList,daysLength);
        inputArray(spendList,daysLength);

        int queryNumber;
        cin>>queryNumber;
        for(int j=0; j<queryNumber;j++){
            statusCalc(incomesList,spendList,daysLength);
        }
        cout<<endl;
    }
    return 0;
}
