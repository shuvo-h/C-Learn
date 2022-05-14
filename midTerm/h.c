
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    int d;
    scanf("%d %d", &n, &d);
    int num[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", num[(i + d) % n]);
    }
    puts("");

    return 0;
}


/*
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    int n;
    int d;
    for(int i=0; i<2; i++){
            if(i == 0){
                scanf("%d",&n);
            }else{
                scanf("%d",&d);
            }
    }
    int nums[n];
    for(int i =0; i<n; i++){
            scanf("%d",&nums[i]);
    }
    int result[n];
    for(int i =0; i<n; i++){

        int position = i;
        for(int j =0; j<d; j++){
            if(position == 0){
                position = 4;
            }else{
                position = position - 1;
            }
        }
        result[position] = nums[i];
    }
    for(int i =0; i<n; i++){
        printf("%d ",result[i]);
    }
    return 0;
}
*/
