#include<stdio.h>
#include<stdbool.h>
int main(){
    int year;
    scanf("%d",&year);

    for(int y = year + 1; ; y++){
        int fr[10] = {0};
        int currYear = y;
        bool repeat = false;
        while(currYear > 0){
            int d = currYear%10;
            currYear /= 10;
            fr[d]++;
            if(fr[d] >= 2){
                repeat = true;
            }
        }
        if(!repeat){
            printf("%d",y);
            break;
        }
    }

    return 0;
}

