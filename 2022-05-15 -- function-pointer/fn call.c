#include<stdio.h>

void stringPrint(char strSet[]){
    printf("%s",strSet);
}



int main(){
    //stringPrint("Oi no answer why?\n");
    //stringPrint("Oi no answer why?\n");

    int fib[5];
    fib[0] = fib[1] = 1;
    for (int i=2; i<5; i++) {
            fib[i] = fib[i-1]+fib[i-2];
    }
    printf("%d", fib[4]);

    /*
    int a[5] = {0, 2, 1, 4, 3};
    printf("%d\n",a[a[1]+1]);
    */
    /*
    int a[10];
    printf("%d\n",a[2]);
    a[0]+=10;
    a[0]= a[0]*2;

    printf("%d\n",a[0]);
    */
    return 0;
}
