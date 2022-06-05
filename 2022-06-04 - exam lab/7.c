#include<stdio.h>
#include<stdlib.h>
int main(){
    int num[10],n,i;
    scanf("%d",&n);
    for(i=0;n>0;i++){
        num[i]=n%2;
        n=n/2;
    }
    printf("\nResult is=");
    for(i=i-1;i>=0;i--){
        printf("%d",num[i]);
    }
    return 0;
}
