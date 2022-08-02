#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j=0;
    string str;
    cin >> str;
    int n = str.size();
    for(i=0;i<n;i++){
        if(str[i]=='A'){
            j = i;
            break;
        }
    }
    for(i=n-1;i>=0;i--){
        if(str[i]=='Z'){
            break;
        }
    }
    cout << i-j+1 << endl;
    return 0;
}
