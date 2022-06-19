#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int sum = 0;

    for(int i=0; i<n; i++){
        int input;
        scanf("%d",&input);
        sum += input;
    }

    printf("Sum is = %d\n",sum);
    return 0;
}
