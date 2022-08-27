#include<bits/stdc++.h>
using namespace std;


int main(){
    int p = 0;
    int n = 100;

    for(int i =1; i<n; i=i*2){
        cout<<i<<endl;
         p++;
    }


    for(int j=1; j<p; j=j*2){
         printf("hello ");
    }

    /*
    for(int i =1; i*i<n; i++){
     printf("hello \n");
    }
*/
    cout<<"P = "<<p<<endl;
    return 0;
}
