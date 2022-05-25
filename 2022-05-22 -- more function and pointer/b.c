#include<stdio.h>

int fun(int a) {

    return a>0;
}

int main(){
    int res = fun(-21);
    printf("%d\n",res);
}
