#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c,counter;
    cin>>a;
    cin>>b;
    cin>>c;
    if(a==b&&a==c){
        counter=1;
    }else if((a==b&&a!=c)||(b==c&&b!=a)||(a==c&&a!=b)){
        counter=2;
    } else {
        counter=3;
    }
    cout<<counter<<endl;
    return 0;
}
