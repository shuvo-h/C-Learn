#include <bits/stdc++.h>
using namespace std;
int main(){
    int number;
    cin>>number;
    if((number/100)==(number%10)){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }

    return 0;
}
