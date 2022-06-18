/*

Masud has recently got his dream job at Voogle. To get to his job, he leaves home at SS o'clock (on the 2424-hour clock) every day and returns home TT o'clock every day.
The date may change while he is out of home. Outside this time period, he always stays at home.
Determine whether Masud is away from home at 3030 minutes past XX o'clock.

*/

#include<stdio.h>
int main(){
    int St,Tt,Xt;
    scanf("%d %d %d", &St,&Tt,&Xt);
    if( St>Tt){
        if(St<=Xt && Xt<=23){
            printf("Yes");
        }else if(Xt<Tt){
            printf("Yes");
        }else{
            printf("No");
        }
    }else{
        if(St<Xt && Xt<Tt){
            printf("Yes");
        }else{
            printf("No");
        }
    }
    return 0;
}
