#include<bits/stdc++.h>
using namespace std;

int main(){
    int times;
    cin>>times;
    while (times--){
        int n;
        cin>>n;
        int arrayN[n];
        int count = 0;
        for (int i = 0; i < n; ++i) {
            cin>>arrayN[i];
            count+=arrayN[i];
        }
        sort(arrayN,arrayN+n);
        int counter = 0;
        for (int i = 1; i < n; ++i) {
            if (arrayN[i]>arrayN[0]){
                counter++;
            }
        }
        cout<<counter<<"\n";
    }
}
