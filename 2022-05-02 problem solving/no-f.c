/*

Matilda is practising driving. Since, she is not a very good driver, she drives in a weird pattern.

She drives on a n by m board. Let (x, y) be the y-th cell from left in the x-th row . Matilda starts at (1, 1). Then she drives rightwards to (1, m). Then she goes down two cells to (3, m) . After than she moves left to (3, 1) and so on.

Your task is to draw her path. If she visits a cell, it should be represented as hash characters ('#') and the unvisited cells should be filled with dots ('.').

Refer to the sample tests in order to understand the pattern.

The only line contains two integers: n and m (3 ≤ n, m ≤ 50).

n is an odd number.

*/

#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int state = 0;
    for(int i=1; i<=n; i++){
        if(i%2 != 0){
            for(int j=1; j<=m; j++){
                printf("#");
            }
            printf("\n");
        }else{
            if(state == 0){
                    state = 1;
                for(int j=1; j<=m; j++){
                        if(j == m){
                            printf("#");
                        }else{
                            printf(".");
                        }
                }
                 printf("\n");
            }else{
                state = 0;
                 for(int j=1; j<=m; j++){
                    if(j == 1){
                        printf("#");
                    }else{
                        printf(".");
                    }
                }
                printf("\n");
            }
        }
    }
    return 0;
}

