#include<stdio.h>
int fun(int a,int b) {

    int ans=1;

    for(int i=1;i<=b;i++) {

        ans*=a;

    }

    return ans;
}

int main(){
    int res = fun(3,5);
    printf("%d\n",res);
}
