
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int X[n];
    for(int i =1; i<=n; i++ ){
        X[i] = 0;
    }
    int px, py;
    scanf("%d",&px);
    for(int i =1; i<=px; i++ ){
        int step;
        scanf("%d",&step);
        X[step]++;
    }
    scanf("%d",&py);
    for(int i =1; i<=py; i++ ){
        int step;
        scanf("%d",&step);
        X[step]++;
    }
    for(int i =1; i<=n; i++ ){
        if(X[i] == 0){
            printf("Oh, my keyboard!");
            return 0;
        }
    }
    printf("I become the guy.");
}
