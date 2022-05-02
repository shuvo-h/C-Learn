/*

Masud has recently got his dream job at Voogle. To get to his job, he leaves home at SS o'clock (on the 2424-hour clock) every day and returns home TT o'clock every day.
The date may change while he is out of home. Outside this time period, he always stays at home.
Determine whether Masud is away from home at 3030 minutes past XX o'clock.

*/

#include<stdio.h>
int main(){
    int S,T,X;
    scanf("%d %d %d", &S,&T,&X);
    if( S>T){
        if(S<=X && X<=23){
            printf("Yes");
        }else if(X<T){
            printf("Yes");
        }else{
            printf("No");
        }
    }else{
        if(S<X && X<T){
            printf("Yes");
        }else{
            printf("No");
        }
    }
    return 0;
}
